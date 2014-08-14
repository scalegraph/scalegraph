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
    virtual void __fieldInitializers63189();
    
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
        x10_long index103856 = tid;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value103857 = r->FMGL(min);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret103858;
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
            if (((index103856) < (((x10_long) (((x10_int)0))))) || ((index103856) >= (localSrcids->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103856), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (localSrcids->FMGL(data)).set(index103856, value103857);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret103858 = value103857;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret103858;
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
    void __apply(x10_long tid103977, x10::lang::LongRange r103978) {
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index103859 = tid103977;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> value103860 = org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((((x10_long) ((((x10_long) ((r103978->
                                                                                                                                                                    FMGL(max)) - (r103978->
                                                                                                                                                                                    FMGL(min))))) + (((x10_long)1ll))))) + (((x10_long)1ll)))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> ret103861;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((mOutEdgeModifyReqOffsets103975->FMGL(data)).isValid()))
            {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index103859) < (((x10_long) (((x10_int)0))))) ||
                ((index103859) >= (mOutEdgeModifyReqOffsets103975->
                                     FMGL(data)->FMGL(size))))
            {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103859), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (mOutEdgeModifyReqOffsets103975->FMGL(data)).set(index103859, value103860);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret103861 = value103860;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret103861;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index103862 = tid103977;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret103863;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((tmp103976->FMGL(data)).isValid())) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index103862) < (((x10_long) (((x10_int)0))))) ||
                ((index103862) >= (tmp103976->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103862), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (tmp103976->FMGL(data)).set(index103862, ((x10_long)777ll));
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret103863 = ((x10_long)777ll);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret103863;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > mOutEdgeModifyReqOffsets103975;
    org::scalegraph::util::MemoryChunk<x10_long> tmp103976;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->mOutEdgeModifyReqOffsets103975);
        buf.write(this->tmp103976);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > that_mOutEdgeModifyReqOffsets103975 = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >();
        org::scalegraph::util::MemoryChunk<x10_long> that_tmp103976 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_mOutEdgeModifyReqOffsets103975, that_tmp103976);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__14(org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > mOutEdgeModifyReqOffsets103975, org::scalegraph::util::MemoryChunk<x10_long> tmp103976) : mOutEdgeModifyReqOffsets103975(mOutEdgeModifyReqOffsets103975), tmp103976(tmp103976) { }
    
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
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* __apply(x10_long i103980) {
        
        //#line 502 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 502 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* alloc103981 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > >(), 0, sizeof(org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >))) org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >()))
            ;
            
            //#line 502 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
            (alloc103981)->::org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::_constructor(
              ((x10_long)0ll));
            alloc103981;
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
                   x10_long index103079 = i;
                   
                   //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                   org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret103080;
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
                       if (((index103079) < (((x10_long) (((x10_int)0))))) ||
                           ((index103079) >= (vctxs->FMGL(data)->FMGL(size))))
                       {
                           
                           //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                           if (true) {
                               
                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103079), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                           }
                           
                       }
                       
                   }
                   
                   //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                   ret103080 = (vctxs->FMGL(data))[index103079];
                   ret103080;
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
    void __apply(x10_long tid103938, x10::lang::LongRange r103939) {
        
        //#line 537 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* vc103940 =
          (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index103941 = tid103938;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret103942;
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
                if (((index103941) < (((x10_long) (((x10_int)0))))) ||
                    ((index103941) >= (vctxs->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103941), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103942 = (vctxs->FMGL(data))[index103941];
            ret103942;
        }))
        ;
        
        //#line 538 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ep103943 =
          x10aux::nullCheck(vc103940)->FMGL(mEdgeProvider);
        
        //#line 539 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(M)>* mesTempBuffer103944 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(M)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(M)>))) org::scalegraph::util::GrowableMemory<TPMGL(M)>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (mesTempBuffer103944)->::org::scalegraph::util::GrowableMemory<TPMGL(M)>::_constructor(
          ((x10_long)0ll));
        
        //#line 540 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long numProcessed103945 = ((x10_long)0ll);
        
        //#line 542 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long numLocalOutEdges103946 = ((x10_long) (((__extension__ ({
            
            //#line 542 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this103947 =
              x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
                FMGL(offsets);
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index103948 = ((x10_long) ((r103939->
                                                   FMGL(max)) + (((x10_long) (((x10_int)1))))));
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret103949;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this103947->FMGL(data)).isValid()))
                {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index103948) < (((x10_long) (((x10_int)0))))) ||
                    ((index103948) >= (this103947->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103948), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103949 = (this103947->FMGL(data))[index103948];
            ret103949;
        }))
        ) - ((__extension__ ({
            
            //#line 542 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this103950 =
              x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
                FMGL(offsets);
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index103951 = r103939->FMGL(min);
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret103952;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this103950->FMGL(data)).isValid()))
                {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index103951) < (((x10_long) (((x10_int)0))))) ||
                    ((index103951) >= (this103950->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103951), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103952 = (this103950->FMGL(data))[index103951];
            ret103952;
        }))
        )));
        
        //#line 543 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long numLocalMes103953 = ((x10_long)0ll);
        
        //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::ProfilingDB__Timer thtimer103954 =
          x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
            ((x10_int)1), tid103938);
        {
            
            //#line 546 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer103954->org::scalegraph::util::ProfilingDB__Timer::start();
        }
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i64699domain103900 = r103939;
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64699min103901 = i64699domain103900->FMGL(min);
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64699max103902 = i64699domain103900->FMGL(max);
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103903;
            for (
                 //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103903 = i64699min103901; ((i103903) <= (i64699max103902));
                 
                 //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103903 = ((x10_long) ((i103903) + (((x10_long)1ll)))))
            {
                
                //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long srcid103904 = i103903;
                
                //#line 548 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(vc103940)->FMGL(mSrcid) =
                  srcid103904;
                
                //#line 549 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(M)> mes103890 =
                  x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::message(
                    srcid103904, mesTempBuffer103944);
                {
                    
                    //#line 550 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    numLocalMes103953 = ((x10_long) ((numLocalMes103953) + ((__extension__ ({
                        mes103890->FMGL(data)->FMGL(size);
                    }))
                    )));
                }
                
                //#line 551 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((((__extension__ ({
                        mes103890->FMGL(data)->FMGL(size);
                    }))
                    ) > (((x10_long) (((x10_int)0))))) ||
                    (__extension__ ({
                        
                        //#line 551 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::Bitmap* this103891 =
                          saved_this->FMGL(mVertexActive);
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_long i103892 = srcid103904;
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_boolean ret103893;
                        {
                            
                            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                            if (((i103892) < (((x10_long) (((x10_int)0))))) ||
                                ((i103892) > (x10aux::nullCheck(this103891)->
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
                        x10_long wordOffset103886 = ((x10_long) ((i103892) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_ulong mask103887 = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i103892) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103893 = (!x10aux::struct_equals(((x10_ulong) (((x10aux::nullCheck(this103891)->
                                                                              FMGL(mc)->
                                                                              FMGL(data))[wordOffset103886]) & (mask103887))),
                                                            ((x10_ulong)0ull)));
                        ret103893;
                    }))
                    ) {
                    
                    //#line 553 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >::__apply(x10aux::nullCheck(compute), 
                      vc103940, mes103890);
                    
                    //#line 555 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(ep103943)->FMGL(mEdgeChanged))
                    {
                        
                        //#line 555 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(ep103943)->fixModifiedEdges(
                          srcid103904);
                    }
                    
                    //#line 556 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if ((__extension__ ({
                            
                            //#line 556 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::Bitmap* this103894 =
                              saved_this->FMGL(mVertexActive);
                            
                            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                            x10_long i103895 = srcid103904;
                            
                            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                            x10_boolean ret103896;
                            {
                                
                                //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                                if (((i103895) < (((x10_long) (((x10_int)0))))) ||
                                    ((i103895) > (x10aux::nullCheck(this103894)->
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
                            x10_long wordOffset103888 = ((x10_long) ((i103895) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
                            
                            //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                            x10_ulong mask103889 = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i103895) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103896 = (!x10aux::struct_equals(((x10_ulong) (((x10aux::nullCheck(this103894)->
                                                                                  FMGL(mc)->
                                                                                  FMGL(data))[wordOffset103888]) & (mask103889))),
                                                                ((x10_ulong)0ull)));
                            ret103896;
                        }))
                        ) {
                        
                        //#line 556 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                        numProcessed103945 = ((x10_long) ((numProcessed103945) + (((x10_long)1ll))));
                    }
                    
                }
                
            }
        }
        {
            
            //#line 559 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer103954->org::scalegraph::util::ProfilingDB__Timer::lap(
              ((x10_int)0));
        }
        
        //#line 560 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(aggregator, X10_NULL)))
        {
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index103897 = tid103938;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            TPMGL(A) value103898 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
              x10aux::nullCheck(x10aux::nullCheck(vc103940)->
                                  FMGL(mAggregateValue))->org::scalegraph::util::GrowableMemory<TPMGL(A)>::raw());
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            TPMGL(A) ret103899;
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
                if (((index103897) < (((x10_long) (((x10_int)0))))) ||
                    ((index103897) >= (intermedAggregateValue->
                                         FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103897), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (intermedAggregateValue->FMGL(data)).set(index103897, value103898);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103899 = value103898;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret103899;
        }
        {
            
            //#line 563 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer103954->org::scalegraph::util::ProfilingDB__Timer::lap(
              ((x10_int)1));
        }
        
        //#line 564 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(A)>* this103905 =
          x10aux::nullCheck(vc103940)->FMGL(mAggregateValue);
        
        //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this103905)->FMGL(size) = ((x10_long) (((x10_int)0)));
        
        //#line 565 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(vc103940)->FMGL(mNumActiveVertexes) =
          numProcessed103945;
        {
            
            //#line 566 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::test::STest::bufferedPrintln(
              reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("$ XPS1: place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                      FMGL(id)), x10aux::makeStringLit(": th: ")), tid103938), x10aux::makeStringLit(": ss: ")), ss103983), x10aux::makeStringLit(": OutEdge: ")), numLocalOutEdges103946), x10aux::makeStringLit(": Mes: ")), numLocalMes103953)));
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx;
    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute;
    x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator;
    org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue;
    x10_int ss103983;
    
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
        buf.write(this->ss103983);
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
        x10_int that_ss103983 = buf.read<x10_int>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_vctxs, that_saved_this, that_ectx, that_compute, that_aggregator, that_intermedAggregateValue, that_ss103983);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__17(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx, x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator, org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue, x10_int ss103983) : vctxs(vctxs), saved_this(saved_this), ectx(ectx), compute(compute), aggregator(aggregator), intermedAggregateValue(intermedAggregateValue), ss103983(ss103983) { }
    
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
    void __apply(x10_long tid103958, x10::lang::LongRange r103959) {
        
        //#line 601 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* vc103960 =
          (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index103961 = tid103958;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret103962;
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
                if (((index103961) < (((x10_long) (((x10_int)0))))) ||
                    ((index103961) >= (vctxs->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103961), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103962 = (vctxs->FMGL(data))[index103961];
            ret103962;
        }))
        ;
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i64738domain103921 = r103959;
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64738min103922 = i64738domain103921->FMGL(min);
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64738max103923 = i64738domain103921->FMGL(max);
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103924;
            for (
                 //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103924 = i64738min103922; ((i103924) <= (i64738max103923));
                 
                 //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103924 = ((x10_long) ((i103924) + (((x10_long)1ll)))))
            {
                
                //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long dosrcid103925 = i103924;
                
                //#line 603 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((__extension__ ({
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_long i103911 = dosrcid103925;
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_boolean ret103912;
                        {
                            
                            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                            if (((i103911) < (((x10_long) (((x10_int)0))))) ||
                                ((i103911) > (x10aux::nullCheck(BCbmp103957)->
                                                FMGL(size)))) {
                                
                                //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_long wordOffset103908 = ((x10_long) ((i103911) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_ulong mask103909 = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i103911) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103912 = (!x10aux::struct_equals(((x10_ulong) (((x10aux::nullCheck(BCbmp103957)->
                                                                              FMGL(mc)->
                                                                              FMGL(data))[wordOffset103908]) & (mask103909))),
                                                            ((x10_ulong)0ull)));
                        ret103912;
                    }))
                    ) {
                    
                    //#line 604 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(vc103960)->FMGL(mSrcid) =
                      dosrcid103925;
                    
                    //#line 605 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> OEsId103913 =
                      x10aux::nullCheck(vc103960)->org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdgesId();
                    
                    //#line 606 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    TPMGL(M) tempmes103914 = (__extension__ ({
                        
                        //#line 606 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<TPMGL(M)> this103915 =
                          x10aux::nullCheck(ectx)->FMGL(mBCCMessages);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index103916 = dosrcid103925;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(M) ret103917;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this103915->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103916) < (((x10_long) (((x10_int)0))))) ||
                                ((index103916) >= (this103915->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103916), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103917 = (this103915->FMGL(data))[index103916];
                        ret103917;
                    }))
                    ;
                    
                    //#line 607 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                    {
                        org::scalegraph::util::MemoryChunk__MCIterator<x10_long>* eI103918;
                        for (
                             //#line 607 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                             eI103918 = (__extension__ ({
                                 (__extension__ ({
                                     
                                     //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::util::MemoryChunk__MCIterator<x10_long>* alloc103919 =
                                        ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__MCIterator<x10_long> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__MCIterator<x10_long>))) org::scalegraph::util::MemoryChunk__MCIterator<x10_long>()))
                                     ;
                                     
                                     //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::util::MCData_Impl<x10_long > data103910 =
                                       OEsId103913->FMGL(data);
                                     
                                     //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                                     alloc103919->FMGL(cur) =
                                       ((x10_long)0ll);
                                     
                                     //#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                                     alloc103919->FMGL(data) =
                                       data103910;
                                     alloc103919;
                                 }))
                                 ;
                             }))
                             ; eI103918->hasNext(); ) {
                            
                            //#line 607 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long eI103920 = eI103918->next();
                            
                            //#line 608 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(vc103960)->org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessage(
                              eI103920, tempmes103914);
                        }
                    }
                    
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs;
    org::scalegraph::util::Bitmap* BCbmp103957;
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vctxs);
        buf.write(this->BCbmp103957);
        buf.write(this->ectx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> that_vctxs = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >();
        org::scalegraph::util::Bitmap* that_BCbmp103957 = buf.read<org::scalegraph::util::Bitmap*>();
        org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* that_ectx = buf.read<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_vctxs, that_BCbmp103957, that_ectx);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__18(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs, org::scalegraph::util::Bitmap* BCbmp103957, org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx) : vctxs(vctxs), BCbmp103957(BCbmp103957), ectx(ectx) { }
    
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
            org::scalegraph::util::ProfilingDB__Timer thtimer103994 = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                                        ((x10_int)1),
                                                                        ((x10_long) (i103998)));
            {
                
                //#line 687 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                thtimer103994->org::scalegraph::util::ProfilingDB__Timer::start();
            }
            
            //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<TPMGL(T)>* typed_buf103995 =
              reinterpret_cast<org::scalegraph::util::GrowableMemory<TPMGL(T) >*>(buf103988);
            
            //#line 689 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
              x10aux::nullCheck(typed_buf103995)->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw(),
              ((x10_long)0ll), outMem, offset_103993, src_len103992);
            
            //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(typed_buf103995)->FMGL(size) =
              ((x10_long) (((x10_int)0)));
            {
                
                //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                thtimer103994->org::scalegraph::util::ProfilingDB__Timer::lap(
                  ((x10_int)2));
            }
        }
        catch (x10::lang::CheckedThrowable* __exc433) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc433)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc433);
                {
                    
                    //#line 681 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc433);
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
    x10_int i103998;
    org::scalegraph::util::GrowableMemory<x10_int>* buf103988;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem;
    x10_long offset_103993;
    x10_long src_len103992;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i103998);
        buf.write(this->buf103988);
        buf.write(this->outMem);
        buf.write(this->offset_103993);
        buf.write(this->src_len103992);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_i103998 = buf.read<x10_int>();
        org::scalegraph::util::GrowableMemory<x10_int>* that_buf103988 = buf.read<org::scalegraph::util::GrowableMemory<x10_int>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_outMem = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10_long that_offset_103993 = buf.read<x10_long>();
        x10_long that_src_len103992 = buf.read<x10_long>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >(that_i103998, that_buf103988, that_outMem, that_offset_103993, that_src_len103992);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__19(x10_int i103998, org::scalegraph::util::GrowableMemory<x10_int>* buf103988, org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem, x10_long offset_103993, x10_long src_len103992) : i103998(i103998), buf103988(buf103988), outMem(outMem), offset_103993(offset_103993), src_len103992(src_len103992) { }
    
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
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_430
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_430
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
                                                  x10::array::Array<x10_int>* this103043 =
                                                    x10aux::nullCheck(this->
                                                                        FMGL(mTeam)->
                                                                        FMGL(base))->role();
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                  ;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int ret103044;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret103045; __ret103045: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(this103043)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret103044 =
                                                            (x10aux::nullCheck(this103043)->
                                                               FMGL(raw))->__apply(((x10_int)0));
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret103045_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(this103043)->
                                                                  FMGL(region)->contains(
                                                                  ((x10_int)0))))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                ((x10_int)0));
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret103044 =
                                                            (x10aux::nullCheck(this103043)->
                                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this103043)->
                                                                                                                   FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret103045_end_;
                                                      }
                                                      
                                                  }goto __ret103045_end_; __ret103045_end_: ;
                                                  }
                                                  ret103044;
                                                  }))
                                                  , ((x10_int)0)));
                        
    
    //#line 469 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 469 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this103046 =
          this->FMGL(mIds);
        this103046->FMGL(numberOfLocalVertexes);
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
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > mOutEdgeModifyReqOffsets103975 =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::_make(((x10_long) (this->
                                                                                                              FMGL(numThreads))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 490 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> tmp103976 =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (this->
                                                                          FMGL(numThreads))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 491 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(mOutEdgeModifyReqOffsets103975, tmp103976))));
    
    //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i64662domain103879 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((mOutEdgeModifyReqOffsets103975->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long i64662max103880 = i64662domain103879->FMGL(max);
    
    //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_long i103881;
        for (
             //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103881 = ((x10_long)0ll); ((i103881) <= (i64662max103880));
             
             //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103881 = ((x10_long) ((i103881) + (((x10_long)1ll)))))
        {
            
            //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i103882 = i103881;
            
            //#line 497 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index103867 =
                                             i103882;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long ret103868;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((tmp103976->
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
                                                   ((index103867) >= (tmp103976->
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
                                           ret103868 = (tmp103976->
                                                          FMGL(data))[index103867];
                                           ret103868;
                                       }))
                                       , ((x10_long)777ll))))
            {
                
                //#line 498 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Branch_c
                continue;
            }
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index103864 = i103882;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> value103865 =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)0))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> ret103866;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((mOutEdgeModifyReqOffsets103975->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index103864) < (((x10_long) (((x10_int)0))))) ||
                    ((index103864) >= (mOutEdgeModifyReqOffsets103975->
                                         FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103864), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (mOutEdgeModifyReqOffsets103975->FMGL(data)).set(index103864, value103865);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103866 = value103865;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret103866;
        }
    }
    
    //#line 501 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> mOutEdgeModifyReqsWithAR103979 =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* >::_make(((x10_long) (this->
                                                                                                                                                                   FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int i64681max103883 = ((x10_int) ((this->FMGL(numThreads)) - (((x10_int)1))));
    
    //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_int i103884;
        for (
             //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103884 = ((x10_int)0); ((i103884) <= (i64681max103883));
             
             //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103884 = ((x10_int) ((i103884) + (((x10_int)1)))))
        {
            
            //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int tid103885 = i103884;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index103869 = tid103885;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* value103870 =
              (__extension__ ({
                
                //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* alloc103871 =
                   ((new (memset(x10aux::alloc<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)> >(), 0, sizeof(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>))) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>()))
                ;
                
                //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
                (alloc103871)->::org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_constructor(
                  this, ectx, ((x10_long) (tid103885)), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_int index103872 = tid103885;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      org::scalegraph::util::MemoryChunk<x10_long> ret103873;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((mOutEdgeModifyReqOffsets103975->
                                   FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index103872) < (((x10_int)0))) ||
                              ((((x10_long) (index103872))) >= (mOutEdgeModifyReqOffsets103975->
                                                                  FMGL(data)->
                                                                  FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103872), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret103873 = (mOutEdgeModifyReqOffsets103975->
                                     FMGL(data))[index103872];
                      ret103873;
                  }))
                  , (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_int index103874 = tid103885;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* ret103875;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((mOutEdgeModifyReqsWithAR103979->
                                   FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index103874) < (((x10_int)0))) ||
                              ((((x10_long) (index103874))) >= (mOutEdgeModifyReqsWithAR103979->
                                                                  FMGL(data)->
                                                                  FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103874), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret103875 = (mOutEdgeModifyReqsWithAR103979->
                                     FMGL(data))[index103874];
                      ret103875;
                  }))
                  , (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_int index103876 = tid103885;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret103877;
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
                          if (((index103876) < (((x10_int)0))) ||
                              ((((x10_long) (index103876))) >= (localSrcids->
                                                                  FMGL(data)->
                                                                  FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103876), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret103877 = (localSrcids->FMGL(data))[index103876];
                      ret103877;
                  }))
                  );
                alloc103871;
            }))
            ;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret103878;
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
                if (((index103869) < (((x10_int)0))) || ((((x10_long) (index103869))) >= (vctxs->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103869), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (vctxs->FMGL(data)).set(index103869, value103870);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103878 = value103870;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret103878;
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
             org::scalegraph::util::Team2 this103082 = this->
                                                         FMGL(mTeam);
             x10aux::nullCheck(this103082->FMGL(base))->size();
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
        org::scalegraph::util::Bitmap* this103083 = this->
                                                      FMGL(mVertexActive);
        x10aux::nullCheck(this103083)->FMGL(mc);
    }))
    ;
    
    //#line 526 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<x10_ulong >(
      (__extension__ ({
          
          //#line 526 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::Bitmap* this103084 = this->
                                                        FMGL(mVertexShouldBeActive);
          x10aux::nullCheck(this103084)->FMGL(mc);
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
        x10_int i103982;
        for (
             //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103982 = ((x10_int)0); ((i103982) <= (((x10_int)10000)));
             
             //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103982 = ((x10_int) ((i103982) + (((x10_int)1)))))
        {
            
            //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int ss103983 = i103982;
            
            //#line 532 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(ectx)->FMGL(mSuperstep) = ss103983;
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
              numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(vctxs, this, ectx, compute, aggregator, intermedAggregateValue, ss103983))));
            {
                
                //#line 569 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
                  ((x10_int)1));
            }
            {
                
                //#line 570 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::test::STest::bufferedPrintln(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("$ MEM-XPS2: place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                              FMGL(id)), x10aux::makeStringLit(": ss: ")), ss103983), x10aux::makeStringLit(": TotalMem: ")), org::scalegraph::util::MemoryChunk<void>::getMemSize()), x10aux::makeStringLit(": GCMem: ")), org::scalegraph::util::get_gc_heap_size()), x10aux::makeStringLit(": ExpMem: ")), org::scalegraph::util::ExpMemState.totalSize)));
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
            x10_int i64718max103929 = ((x10_int) ((this->
                                                     FMGL(numThreads)) - (((x10_int)1))));
            
            //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_int i103930;
                for (
                     //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i103930 = ((x10_int)0); ((i103930) <= (i64718max103929));
                     
                     //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i103930 = ((x10_int) ((i103930) + (((x10_int)1)))))
                {
                    
                    //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int th103931 = i103930;
                    
                    //#line 580 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(ectx)->template sqweezeMessage<TPMGL(V),
                    TPMGL(E), TPMGL(A) >((__extension__ ({
                                             
                                             //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_int index103906 =
                                               th103931;
                                             
                                             //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret103907;
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
                                                 if (((index103906) < (((x10_int)0))) ||
                                                     ((((x10_long) (index103906))) >= (vctxs->
                                                                                         FMGL(data)->
                                                                                         FMGL(size))))
                                                 {
                                                     
                                                     //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103906), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103907 = (vctxs->
                                                            FMGL(data))[index103906];
                                             ret103907;
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
            x10_long numAllBCSCount103955 = this->FMGL(mTeam)->template allreduce<x10_long >(
                                              x10aux::nullCheck(ectx)->
                                                FMGL(mBCSInputCount),
                                              ((x10_int)0));
            
            //#line 598 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if (((((x10_long)0ll)) < (numAllBCSCount103955)) &&
                ((numAllBCSCount103955) < (((x10_long) (((__extension__ ({
                    
                    //#line 598 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::id::IdStruct this103956 =
                      this->FMGL(mIds);
                    this103956->FMGL(numberOfGlobalVertexes);
                }))
                ) / x10aux::zeroCheck(((x10_long) (((x10_int)50)))))))))
            {
                
                //#line 599 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Bitmap* BCbmp103957 =
                  x10aux::nullCheck(ectx)->FMGL(mBCCHasMessage);
                
                //#line 600 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
                  numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(vctxs, BCbmp103957, ectx))));
                
                //#line 613 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(ectx)->
                                    FMGL(mBCCHasMessage))->org::scalegraph::util::Bitmap::clear(
                  false);
                
                //#line 614 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(M)> this103926 =
                  x10aux::nullCheck(ectx)->FMGL(mBCCMessages);
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (this103926->FMGL(data)).del();
                
                //#line 615 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ectx)->FMGL(mBCCMessages) =
                  org::scalegraph::util::MemoryChunk<TPMGL(M) >::_make((__extension__ ({
                    
                    //#line 615 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::id::IdStruct this103963 =
                      this->FMGL(mIds);
                    this103963->FMGL(numberOfLocalVertexes);
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
            TPMGL(A) aggVal103964 = (!x10aux::struct_equals(aggregator,
                                                            X10_NULL))
              ? (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::template computeAggregate<TPMGL(A) >(
                   this->FMGL(mTeam), intermedAggregateValue,
                   aggregateBuffer, aggregator)) : (x10aux::zeroValue<TPMGL(A) >());
            
            //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i64757domain103932 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vctxs->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i64757max103933 = i64757domain103932->
                                         FMGL(max);
            
            //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_long i103934;
                for (
                     //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i103934 = ((x10_long)0ll); ((i103934) <= (i64757max103933));
                     
                     //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i103934 = ((x10_long) ((i103934) + (((x10_long)1ll)))))
                {
                    
                    //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i103935 = i103934;
                    
                    //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck((__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index103927 = i103935;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret103928;
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
                            if (((index103927) < (((x10_long) (((x10_int)0))))) ||
                                ((index103927) >= (vctxs->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103927), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103928 = (vctxs->FMGL(data))[index103927];
                        ret103928;
                    }))
                    )->FMGL(mAggregatedValue) = aggVal103964;
                }
            }
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value103936 = x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>::__apply(x10aux::nullCheck(end), 
              ss103983, aggVal103964) ? (((x10_long)1ll))
              : (((x10_long)0ll));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret103937;
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
            (statistics->FMGL(data)).set(((x10_int)0), value103936);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103937 = value103936;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret103937;
            
            //#line 629 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_boolean terminate103965 = org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::template gatherInformation<TPMGL(M) >(
                                            this->FMGL(mTeam),
                                            ectx, statistics,
                                            this->FMGL(mEnableStatistics),
                                            combiner);
            
            //#line 631 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((__extension__ ({
                                           
                                           //#line 631 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                           x10::lang::Place this103966 =
                                             x10::lang::Place::_make(x10aux::here);
                                           this103966->FMGL(id);
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
                      x10_long ret103967;
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
                      ret103967 = (recvStatistics->FMGL(data))[((x10_int)0)];
                      ret103967;
                  }))
                  )));
                
                //#line 633 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_ACTIVE_VERTEX: "), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                      ;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret103968;
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
                      ret103968 = (recvStatistics->FMGL(data))[((x10_int)1)];
                      ret103968;
                  }))
                  )));
                
                //#line 634 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_RAW_MESSAGE: "), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                      ;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret103969;
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
                      ret103969 = (recvStatistics->FMGL(data))[((x10_int)2)];
                      ret103969;
                  }))
                  )));
                
                //#line 635 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_VERTEX_MESSAGE: "), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                      ;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret103970;
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
                      ret103970 = (recvStatistics->FMGL(data))[((x10_int)3)];
                      ret103970;
                  }))
                  )));
                
                //#line 636 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (this->FMGL(mEnableStatistics) && (x10aux::struct_equals(terminate103965,
                                                                            false)))
                {
                    
                    //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_COMBINED_MESSAGE: "), (__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                          ;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret103971;
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
                          ret103971 = (recvStatistics->FMGL(data))[((x10_int)4)];
                          ret103971;
                      }))
                      )));
                    
                    //#line 638 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_VERTEX_TRANSFERED_MESSAGE: "), (__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                          ;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret103972;
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
                          ret103972 = (recvStatistics->FMGL(data))[((x10_int)5)];
                          ret103972;
                      }))
                      )));
                }
                
            }
            
            //#line 642 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if (terminate103965) {
                
                //#line 643 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(mLastAggVal) = (x10aux::class_cast_unchecked<x10::lang::Any*>(aggVal103964));
                
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
                  x10_long ret103973;
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
                  ret103973 = (recvStatistics->FMGL(data))[((x10_int)4)];
                  ret103973;
              }))
              ) > (((x10_long)0ll))), (((__extension__ ({
                  
                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                  ;
                  
                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  x10_long ret103974;
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
                  ret103974 = (recvStatistics->FMGL(data))[((x10_int)3)];
                  ret103974;
              }))
              ) > (((x10_long)0ll))));
        }
    }
    
    //#line 655 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(x10aux::makeStringLit("Superstep limit exceeded. # of supterstep > 10000"))));
    }
    #endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_430
    #ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_432
    #define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_432
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
        x10_int i64794max103999 = ((x10_int) ((this->FMGL(numThreads)) - (((x10_int)1))));
        
        //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_int i104000;
            for (
                 //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i104000 = ((x10_int)0); ((i104000) <= (i64794max103999));
                 
                 //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i104000 = ((x10_int) ((i104000) + (((x10_int)1)))))
            {
                
                //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_int i104001 = i104000;
                
                //#line 672 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                length = ((x10_long) ((length) + ((__extension__ ({
                    
                    //#line 672 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<x10_int>* this103984 =
                      (__extension__ ({
                        
                        //#line 672 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> this103985 =
                          this->FMGL(mOutput);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103986 = ((x10_int) ((((x10_int) ((i104001) * (((x10_int)8))))) + (index)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::GrowableMemory<x10_int>* ret103987;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this103985->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103986) < (((x10_int)0))) ||
                                ((((x10_long) (index103986))) >= (this103985->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103986), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103987 = (this103985->FMGL(data))[index103986];
                        ret103987;
                    }))
                    ;
                    x10aux::nullCheck(this103984)->FMGL(size);
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
            x10::lang::FinishState* x10____var48 = x10::lang::Runtime::startFinish();
            {
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable104041 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int i64812max103996 = ((x10_int) ((this->
                                                                     FMGL(numThreads)) - (((x10_int)1))));
                            
                            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                            {
                                x10_int i103997;
                                for (
                                     //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                     i103997 = ((x10_int)0);
                                     ((i103997) <= (i64812max103996));
                                     
                                     //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                     i103997 = ((x10_int) ((i103997) + (((x10_int)1)))))
                                {
                                    
                                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    x10_int i103998 = i103997;
                                    
                                    //#line 678 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::util::GrowableMemory<x10_int>* buf103988 =
                                      (__extension__ ({
                                        
                                        //#line 678 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> this103989 =
                                          this->FMGL(mOutput);
                                        
                                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        x10_int index103990 =
                                          ((x10_int) ((((x10_int) ((i103998) * (((x10_int)8))))) + (index)));
                                        
                                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::GrowableMemory<x10_int>* ret103991;
                                        {
                                            
                                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (!((this103989->
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
                                            if (((index103990) < (((x10_int)0))) ||
                                                ((((x10_long) (index103990))) >= (this103989->
                                                                                    FMGL(data)->
                                                                                    FMGL(size))))
                                            {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103990), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret103991 = (this103989->
                                                       FMGL(data))[index103990];
                                        ret103991;
                                    }))
                                    ;
                                    
                                    //#line 679 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    x10_long src_len103992 =
                                      (__extension__ ({
                                        x10aux::nullCheck(buf103988)->
                                          FMGL(size);
                                    }))
                                    ;
                                    
                                    //#line 680 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    x10_long offset_103993 =
                                      offset;
                                    
                                    //#line 681 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T)>(i103998, buf103988, outMem, offset_103993, src_len103992))));
                                    
                                    //#line 693 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                    offset = ((x10_long) ((offset) + (src_len103992)));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc434) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc434);
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
                catch (x10::lang::CheckedThrowable* __exc435) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal104042 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc435);
                        {
                            
                            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable104041 = formal104042;
                        }
                    } else
                    throw;
                }
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable104041)))
                {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable104041))
                    {
                        
                        //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable104041));
                    }
                    
                }
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var48);
                }
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable104041)))
                {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104041)))
                    {
                        
                        //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable104041));
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
    #endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_432
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
            x10::lang::IntRange i75938domain103495 = i_range103503;
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i75938min103496 = i75938domain103495->FMGL(min);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i75938max103497 = i75938domain103495->FMGL(max);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i103498;
                for (
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i103498 = i75938min103496; ((i103498) <= (i75938max103497));
                     
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i103498 = ((x10_int) ((i103498) + (((x10_int)1)))))
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii103499 = i103498;
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int tid103494 = ii103499;
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if ((((__extension__ ({
                            
                            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_long> this103491 =
                              x10aux::nullCheck((__extension__ ({
                                  
                                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_int index103492 = tid103494;
                                  
                                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103493;
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
                                      if (((index103492) < (((x10_int)0))) ||
                                          ((((x10_long) (index103492))) >= (list->
                                                                              FMGL(data)->
                                                                              FMGL(size))))
                                      {
                                          
                                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103492), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                              }
                                              
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103493 = (list->FMGL(data))[index103492];
                                  ret103493;
                              }))
                              )->FMGL(mEdgeModifyReqOffset);
                            this103491->FMGL(data)->FMGL(size);
                        }))
                        ) > (((x10_long) (((x10_int)0))))))
                    {
                        
                        //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Assert_c
                        #ifndef NO_ASSERTIONS
                        if (x10aux::x10__assertions_enabled)
                            x10aux::x10__assert((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                                                             tid103494))->
                                                                                           FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::size(),
                                                                       x10aux::nullCheck(list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                                           tid103494))->
                                                                         FMGL(mEdgeModifyReqOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                         ((x10_long) ((x10aux::nullCheck(list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                                                           tid103494))->
                                                                                         FMGL(mEdgeModifyReqOffset)->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long)1ll))))))));
                        #endif//NO_ASSERTIONS
                        
                    }
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index103478 = tid103494;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange value103479 = (__extension__ ({
                        
                        //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this103480 =
                          x10aux::nullCheck((__extension__ ({
                              
                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                              x10_int index103481 = tid103494;
                              
                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103482;
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
                                  if (((index103481) < (((x10_int)0))) ||
                                      ((((x10_long) (index103481))) >= (list->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                  {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103481), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                              ret103482 = (list->FMGL(data))[index103481];
                              ret103482;
                          }))
                          )->FMGL(mEdgeModifyReqWithAR);
                        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((x10aux::nullCheck(this103480)->
                                                                                     FMGL(size)) - (((x10_long)1ll)))));
                    }))
                    ;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange ret103483;
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
                        if (((index103478) < (((x10_int)0))) ||
                            ((((x10_long) (index103478))) >= (outModReqRange->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103478), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (outModReqRange->FMGL(data)).set(index103478, value103479);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103483 = value103479;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103483;
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange i64345domain103484 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103485 = tid103494;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10::lang::LongRange ret103486;
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
                            if (((index103485) < (((x10_int)0))) ||
                                ((((x10_long) (index103485))) >= (outModReqRange->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103485), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103486 = (outModReqRange->FMGL(data))[index103485];
                        ret103486;
                    }))
                    ;
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i64345min103487 = i64345domain103484->
                                                 FMGL(min);
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i64345max103488 = i64345domain103484->
                                                 FMGL(max);
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                    {
                        x10_long i103489;
                        for (
                             //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                             i103489 = i64345min103487; ((i103489) <= (i64345max103488));
                             
                             //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                             i103489 = ((x10_long) ((i103489) + (((x10_long)1ll)))))
                        {
                            
                            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long i103490 = i103489;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x103466 =
                              (__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103467 = tid103494;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_int> ret103468;
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
                                    if (((index103467) < (((x10_int)0))) ||
                                        ((((x10_long) (index103467))) >= (diffInEdgeCountPerThread->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103467), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103468 = (diffInEdgeCountPerThread->
                                               FMGL(data))[index103467];
                                ret103468;
                            }))
                            ;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int y103469 = (__extension__ ({
                                
                                //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103470 =
                                  saved_this->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103471 = (__extension__ ({
                                                        
                                                        //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this103472 =
                                                          x10aux::nullCheck((__extension__ ({
                                                              
                                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              x10_int index103473 =
                                                                tid103494;
                                                              
                                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103474;
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
                                                                  if (((index103473) < (((x10_int)0))) ||
                                                                      ((((x10_long) (index103473))) >= (list->
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
                                                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103473), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                          }
                                                                          
                                                                      }
                                                                      
                                                                  }
                                                                  
                                                              }
                                                              
                                                              //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                              ret103474 =
                                                                (list->
                                                                   FMGL(data))[index103473];
                                                              ret103474;
                                                          }))
                                                          )->
                                                            FMGL(mEdgeModifyReqWithAR);
                                                        
                                                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                        x10_long index103475 =
                                                          i103490;
                                                        
                                                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret103476;
                                                        {
                                                            
                                                            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                            if (((index103475) < (((x10_long) (((x10_int)0))))) ||
                                                                ((index103475) >= (x10aux::nullCheck(this103472)->
                                                                                     FMGL(size))))
                                                            {
                                                                
                                                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                                if (true)
                                                                {
                                                                    
                                                                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103475), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                        }
                                                        
                                                        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret103476 =
                                                          (x10aux::nullCheck(this103472)->
                                                             FMGL(mc)->
                                                             FMGL(data))[index103475];
                                                        ret103476;
                                                    }))
                                                    ->FMGL(val1);
                                ((x10_int) (((x10_long) ((id103471) >> (0x3f & (this103470->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret103477;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int r103463 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103464 = y103469;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret103465;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x103466->FMGL(data)).isValid()))
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
                                    if (((index103464) < (((x10_int)0))) ||
                                        ((((x10_long) (index103464))) >= (x103466->
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
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103464), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103465 = (x103466->FMGL(data))[index103464];
                                ret103465;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103460 = y103469;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value103461 = r103463;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret103462;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x103466->FMGL(data)).isValid()))
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
                                if (((index103460) < (((x10_int)0))) ||
                                    ((((x10_long) (index103460))) >= (x103466->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103460), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x103466->FMGL(data)).set(index103460, value103461);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103462 = value103461;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret103462;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103477 = r103463;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Local_c
                            ret103477;
                        }
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc416) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc416)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc416);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc416);
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
    x10::lang::IntRange i_range103503;
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range103503);
        buf.write(this->list);
        buf.write(this->outModReqRange);
        buf.write(this->diffInEdgeCountPerThread);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::IntRange that_i_range103503 = buf.read<x10::lang::IntRange>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10::lang::LongRange> that_outModReqRange = buf.read<org::scalegraph::util::MemoryChunk<x10::lang::LongRange> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > that_diffInEdgeCountPerThread = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > >();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >(that_i_range103503, that_list, that_outModReqRange, that_diffInEdgeCountPerThread, that_saved_this);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__2(x10::lang::IntRange i_range103503, org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this) : i_range103503(i_range103503), list(list), outModReqRange(outModReqRange), diffInEdgeCountPerThread(diffInEdgeCountPerThread), saved_this(saved_this) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> this102238 = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index102234 = i;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ret102235;
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
                    if (((index102234) < (((x10_long) (((x10_int)0))))) ||
                        ((index102234) >= (diffInEdgeCountPerThread->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102234), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret102235 = (diffInEdgeCountPerThread->FMGL(data))[index102234];
                ret102235;
            }))
            ;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index102237 = j;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret102239;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this102238->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index102237) < (((x10_long) (((x10_int)0))))) ||
                    ((index102237) >= (this102238->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102237), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret102239 = (this102238->FMGL(data))[index102237];
            ret102239;
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
            x10::lang::IntRange i75938domain103585 = i_range103593;
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i75938min103586 = i75938domain103585->FMGL(min);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i75938max103587 = i75938domain103585->FMGL(max);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i103588;
                for (
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i103588 = i75938min103586; ((i103588) <= (i75938max103587));
                     
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i103588 = ((x10_int) ((i103588) + (((x10_int)1)))))
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii103589 = i103588;
                    
                    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int tid103584 = ii103589;
                    
                    //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e103572 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103573 = tid103584;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103574;
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
                            if (((index103573) < (((x10_int)0))) ||
                                ((((x10_long) (index103573))) >= (list->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103573), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103574 = (list->FMGL(data))[index103573];
                        ret103574;
                    }))
                    ;
                    
                    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > workdata103575 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103576 = tid103584;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > ret103577;
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
                            if (((index103576) < (((x10_int)0))) ||
                                ((((x10_long) (index103576))) >= (diffInEdgeDataPerThread->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103576), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103577 = (diffInEdgeDataPerThread->
                                       FMGL(data))[index103576];
                        ret103577;
                    }))
                    ;
                    
                    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> workoff103578 =
                      x10aux::nullCheck((__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_int index103579 = tid103584;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103580;
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
                              if (((index103579) < (((x10_int)0))) ||
                                  ((((x10_long) (index103579))) >= (list->
                                                                      FMGL(data)->
                                                                      FMGL(size))))
                              {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103579), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret103580 = (list->FMGL(data))[index103579];
                          ret103580;
                      }))
                      )->FMGL(mEdgeModifyReqOffset);
                    
                    //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long maxSrcid103581 = ((x10_long) (((__extension__ ({
                        workoff103578->FMGL(data)->FMGL(size);
                    }))
                    ) - (((x10_long)2ll))));
                    
                    //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> index103582 =
                      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (numTeam)), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
                    
                    //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long srcid103583 = ((x10_long)0ll);
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange i64402domain103565 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103566 = tid103584;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10::lang::LongRange ret103567;
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
                            if (((index103566) < (((x10_int)0))) ||
                                ((((x10_long) (index103566))) >= (outModReqRange->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103566), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103567 = (outModReqRange->FMGL(data))[index103566];
                        ret103567;
                    }))
                    ;
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i64402min103568 = i64402domain103565->
                                                 FMGL(min);
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i64402max103569 = i64402domain103565->
                                                 FMGL(max);
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                    {
                        x10_long i103570;
                        for (
                             //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                             i103570 = i64402min103568; ((i103570) <= (i64402max103569));
                             
                             //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                             i103570 = ((x10_long) ((i103570) + (((x10_long)1ll)))))
                        {
                            
                            //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long i103571 = i103570;
                            
                            //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> target103553 =
                              (__extension__ ({
                                
                                //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this103554 =
                                  x10aux::nullCheck((__extension__ ({
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      x10_int index103555 =
                                        tid103584;
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103556;
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
                                          if (((index103555) < (((x10_int)0))) ||
                                              ((((x10_long) (index103555))) >= (list->
                                                                                  FMGL(data)->
                                                                                  FMGL(size))))
                                          {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                  if (true)
                                                  {
                                                      
                                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103555), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                  }
                                                  
                                              }
                                              
                                          }
                                          
                                      }
                                      
                                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                      ret103556 = (list->
                                                     FMGL(data))[index103555];
                                      ret103556;
                                  }))
                                  )->FMGL(mEdgeModifyReqWithAR);
                                
                                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                x10_long index103557 = i103571;
                                
                                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret103558;
                                {
                                    
                                    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                    if (((index103557) < (((x10_long) (((x10_int)0))))) ||
                                        ((index103557) >= (x10aux::nullCheck(this103554)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103557), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103558 = (x10aux::nullCheck(this103554)->
                                               FMGL(mc)->
                                               FMGL(data))[index103557];
                                ret103558;
                            }))
                            ;
                            
                            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long dstid103559 = target103553->
                                                     FMGL(val1);
                            
                            //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int team103560 = (__extension__ ({
                                
                                //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103561 =
                                  saved_this->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103562 = dstid103559;
                                ((x10_int) (((x10_long) ((id103562) >> (0x3f & (this103561->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10While_c
                            while (((srcid103583) < (maxSrcid103581)) &&
                                   (((__extension__ ({
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103563 =
                                         ((x10_long) ((srcid103583) + (((x10_long) (((x10_int)1))))));
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103564;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((workoff103578->
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
                                           if (((index103563) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103563) >= (workoff103578->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103563), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103564 = (workoff103578->
                                                      FMGL(data))[index103563];
                                       ret103564;
                                   }))
                                   ) <= (i103571))) {
                                
                                //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                srcid103583 = ((x10_long) ((srcid103583) + (((x10_long)1ll))));
                            }
                            
                            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > this103543 =
                              (__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103544 = team103560;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > ret103545;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((workdata103575->
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
                                    if (((index103544) < (((x10_int)0))) ||
                                        ((((x10_long) (index103544))) >= (workdata103575->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103544), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103545 = (workdata103575->
                                               FMGL(data))[index103544];
                                ret103545;
                            }))
                            ;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103546 = ((x10_int) (((__extension__ ({
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_int> x103547 =
                                  index103582;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_int y103548 = team103560;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Empty_c
                                ;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_int ret103549;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_int r103535 = ((x10_int) (((__extension__ ({
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_int index103536 =
                                      y103548;
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_int ret103537;
                                    {
                                        
                                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((x103547->FMGL(data)).isValid()))
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
                                        if (((index103536) < (((x10_int)0))) ||
                                            ((((x10_long) (index103536))) >= (x103547->
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
                                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103536), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                    }
                                                    
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret103537 = (x103547->
                                                   FMGL(data))[index103536];
                                    ret103537;
                                }))
                                ) + (((x10_int)1))));
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103532 = y103548;
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int value103533 = r103535;
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret103534;
                                {
                                    
                                    //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x103547->FMGL(data)).isValid()))
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
                                    if (((index103532) < (((x10_int)0))) ||
                                        ((((x10_long) (index103532))) >= (x103547->
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
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103532), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (x103547->FMGL(data)).set(index103532, value103533);
                                
                                //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103534 = value103533;
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret103534;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103549 = r103535;
                                ret103549;
                            }))
                            ) - (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> value103550 =
                              (__extension__ ({
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> alloc103551 =
                                   org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)>::_alloc();
                                
                                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                                x10_long val103538 = ((x10_long) ((dstid103559) & (((x10_long)-8070450532247928833ll))));
                                
                                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                                x10_long val103539 = ((x10_long) (((__extension__ ({
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::graph::id::OnedR__StoD this103540 =
                                      saved_this->FMGL(mStoD);
                                    
                                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                    x10_long id103541 = ((x10_long) ((x10aux::nullCheck(e103572)->
                                                                        FMGL(mStartSrcid)) + (srcid103583)));
                                    ((x10_long) ((id103541) | (this103540->
                                                                 FMGL(rshifted))));
                                }))
                                ) | (((x10_long) ((dstid103559) & (((x10_long)8070450532247928832ll)))))));
                                
                                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                                TPMGL(E) val103542 = target103553->
                                                       FMGL(val2);
                                
                                //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                                alloc103551->FMGL(val1) =
                                  val103538;
                                
                                //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                                alloc103551->FMGL(val2) =
                                  val103539;
                                
                                //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                                alloc103551->FMGL(val3) =
                                  val103542;
                                alloc103551;
                            }))
                            ;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103552;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this103543->FMGL(data)).isValid()))
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
                                if (((index103546) < (((x10_int)0))) ||
                                    ((((x10_long) (index103546))) >= (this103543->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103546), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (this103543->FMGL(data)).set(index103546, value103550);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103552 = value103550;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret103552;
                        }
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc419) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc419)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc419);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc419);
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
    x10::lang::IntRange i_range103593;
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > diffInEdgeDataPerThread;
    x10_int numTeam;
    org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range103593);
        buf.write(this->list);
        buf.write(this->diffInEdgeDataPerThread);
        buf.write(this->numTeam);
        buf.write(this->outModReqRange);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::IntRange that_i_range103593 = buf.read<x10::lang::IntRange>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > that_diffInEdgeDataPerThread = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > >();
        x10_int that_numTeam = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10::lang::LongRange> that_outModReqRange = buf.read<org::scalegraph::util::MemoryChunk<x10::lang::LongRange> >();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >(that_i_range103593, that_list, that_diffInEdgeDataPerThread, that_numTeam, that_outModReqRange, that_saved_this);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__5(x10::lang::IntRange i_range103593, org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > diffInEdgeDataPerThread, x10_int numTeam, org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this) : i_range103593(i_range103593), list(list), diffInEdgeDataPerThread(diffInEdgeDataPerThread), numTeam(numTeam), outModReqRange(outModReqRange), saved_this(saved_this) { }
    
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
        x10::lang::LongRange i64477domain103630 = range;
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64477min103631 = i64477domain103630->FMGL(min);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64477max103632 = i64477domain103630->FMGL(max);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103633;
            for (
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103633 = i64477min103631; ((i103633) <= (i64477max103632));
                 
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103633 = ((x10_long) ((i103633) + (((x10_long)1ll))))) {
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103634 = i103633;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index103626 = i103634;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> value103627 =
                  (__extension__ ({
                    
                    //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> alloc103628 =
                       org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)>::_alloc();
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                    x10_long val103615 = (__extension__ ({
                        
                        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::graph::id::OnedR__DtoS this103616 =
                          saved_this->FMGL(mDtoS);
                        
                        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                        x10_long id103617 = (__extension__ ({
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index103618 =
                                                  i103634;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103619;
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
                                                    if (((index103618) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index103618) >= (result->
                                                                             FMGL(data)->
                                                                             FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103618), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret103619 =
                                                  (result->
                                                     FMGL(data))[index103618];
                                                ret103619;
                                            }))
                                            ->FMGL(val1);
                        ((x10_long) ((id103617) & (this103616->
                                                     FMGL(lmask))));
                    }))
                    ;
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                    x10_long val103620 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103621 =
                                               i103634;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103622;
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
                                                 if (((index103621) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103621) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103621), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103622 = (result->
                                                            FMGL(data))[index103621];
                                             ret103622;
                                         }))
                                         ->FMGL(val2);
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) val103623 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103624 =
                                               i103634;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103625;
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
                                                 if (((index103624) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103624) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103624), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103625 = (result->
                                                            FMGL(data))[index103624];
                                             ret103625;
                                         }))
                                         ->FMGL(val3);
                    
                    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103628->FMGL(val1) = val103615;
                    
                    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103628->FMGL(val2) = val103620;
                    
                    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103628->FMGL(val3) = val103623;
                    alloc103628;
                }))
                ;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103629;
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
                    if (((index103626) < (((x10_long) (((x10_int)0))))) ||
                        ((index103626) >= (result->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103626), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (result->FMGL(data)).set(index103626, value103627);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret103629 = value103627;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret103629;
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
            org::scalegraph::util::MemoryChunk<x10_long> this102611 = x10aux::nullCheck((__extension__ ({
                                                                          
                                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                          x10_long index102608 =
                                                                            tid;
                                                                          
                                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                          org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret102609;
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
                                                                              if (((index102608) < (((x10_long) (((x10_int)0))))) ||
                                                                                  ((index102608) >= (list->
                                                                                                       FMGL(data)->
                                                                                                       FMGL(size))))
                                                                              {
                                                                                  
                                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                  if (true)
                                                                                  {
                                                                                      
                                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102608), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                  }
                                                                                  
                                                                              }
                                                                              
                                                                          }
                                                                          
                                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                          ret102609 =
                                                                            (list->
                                                                               FMGL(data))[index102608];
                                                                          ret102609;
                                                                      }))
                                                                      )->
                                                                        FMGL(mEdgeModifyReqOffset);
            this102611->FMGL(data)->FMGL(size);
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
            x10_long index102612 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret102613;
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
                if (((index102612) < (((x10_long) (((x10_int)0))))) ||
                    ((index102612) >= (list->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102612), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret102613 = (list->FMGL(data))[index102612];
            ret102613;
        }))
        ;
        
        //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> reqoff = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index102615 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> ret102616;
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
                if (((index102615) < (((x10_long) (((x10_int)0))))) ||
                    ((index102615) >= (InEdgeModifyReqOffsets->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102615), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret102616 = (InEdgeModifyReqOffsets->FMGL(data))[index102615];
            ret102616;
        }))
        ;
        
        //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* reqs =
          (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index102618 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* ret102619;
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
                if (((index102618) < (((x10_long) (((x10_int)0))))) ||
                    ((index102618) >= (InEdgeModifyReqsWithAR->
                                         FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102618), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret102619 = (InEdgeModifyReqsWithAR->FMGL(data))[index102618];
            ret102619;
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
        x10::lang::LongRange i64496domain103656 = resrange;
        
        //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64496max103657 = i64496domain103656->FMGL(max);
        
        //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103658;
            for (
                 //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103658 = ((x10_long)0ll); ((i103658) <= (i64496max103657));
                 
                 //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103658 = ((x10_long) ((i103658) + (((x10_long)1ll)))))
            {
                
                //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103659 = i103658;
                
                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((((__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index103635 = i103659;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103636;
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
                              if (((index103635) < (((x10_long) (((x10_int)0))))) ||
                                  ((index103635) >= (result->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103635), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret103636 = (result->FMGL(data))[index103635];
                          ret103636;
                      }))
                      ->FMGL(val1)) >= (vrange->FMGL(min))))
                {
                    
                    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    start = i103659;
                    
                    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Branch_c
                    break;
                }
                
            }
        }
        
        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64515min103660 = start;
        
        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64515max103661 = resrange->FMGL(max);
        
        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103662;
            for (
                 //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103662 = i64515min103660; ((i103662) <= (i64515max103661));
                 
                 //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103662 = ((x10_long) ((i103662) + (((x10_long)1ll)))))
            {
                
                //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103663 = i103662;
                
                //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((((__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index103637 = i103663;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103638;
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
                              if (((index103637) < (((x10_long) (((x10_int)0))))) ||
                                  ((index103637) >= (result->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103637), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret103638 = (result->FMGL(data))[index103637];
                          ret103638;
                      }))
                      ->FMGL(val1)) > (vrange->FMGL(max))))
                {
                    
                    //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    end = ((x10_long) ((i103663) - (((x10_long)1ll))));
                    
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
        x10_long i64533min103664 = start;
        
        //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64533max103665 = end;
        
        //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103666;
            for (
                 //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103666 = i64533min103664; ((i103666) <= (i64533max103665));
                 
                 //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103666 = ((x10_long) ((i103666) + (((x10_long)1ll)))))
            {
                
                //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103667 = i103666;
                
                //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10While_c
                while (((tsrcid) < ((__extension__ ({
                                        
                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        x10_long index103651 =
                                          i103667;
                                        
                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103652;
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
                                            if (((index103651) < (((x10_long) (((x10_int)0))))) ||
                                                ((index103651) >= (result->
                                                                     FMGL(data)->
                                                                     FMGL(size))))
                                            {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103651), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret103652 = (result->
                                                       FMGL(data))[index103651];
                                        ret103652;
                                    }))
                                    ->FMGL(val1)))) {
                    
                    //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    tsrcid = ((x10_long) ((tsrcid) + (((x10_long)1ll))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103639 = ((x10_long) ((tsrcid) - (ssrc)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value103640 = reqsIndex;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103641;
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
                        if (((index103639) < (((x10_long) (((x10_int)0))))) ||
                            ((index103639) >= (reqoff->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103639), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqoff->FMGL(data)).set(index103639, value103640);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103641 = value103640;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103641;
                }
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                x10_long index103648 = ((x10_long) ((reqsIndex =
                  ((x10_long) ((reqsIndex) + (((x10_long)1ll))))) - (((x10_long)1ll))));
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> value103649 =
                  (__extension__ ({
                    
                    //#line 249 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc103650 =
                       org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
                    
                    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                    x10_long val103642 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103643 =
                                               i103667;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103644;
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
                                                 if (((index103643) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103643) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103643), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103644 = (result->
                                                            FMGL(data))[index103643];
                                             ret103644;
                                         }))
                                         ->FMGL(val2);
                    
                    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) val103645 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103646 =
                                               i103667;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103647;
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
                                                 if (((index103646) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103646) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103646), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103647 = (result->
                                                            FMGL(data))[index103646];
                                             ret103647;
                                         }))
                                         ->FMGL(val3);
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103650->FMGL(val1) = val103642;
                    
                    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103650->FMGL(val2) = val103645;
                    alloc103650;
                }))
                ;
                {
                    
                    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                    if (((index103648) < (((x10_long) (((x10_int)0))))) ||
                        ((index103648) >= (x10aux::nullCheck(reqs)->
                                             FMGL(size))))
                    {
                        
                        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103648), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                (x10aux::nullCheck(reqs)->FMGL(mc)->FMGL(data)).set(index103648, value103649);
            }
        }
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
        tsrcid = ((x10_long) ((tsrcid) + (((x10_long)1ll))));
        
        //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64551min103668 = ((x10_long) ((tsrcid) - (ssrc)));
        
        //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64551max103669 = ((x10_long) (((__extension__ ({
            reqoff->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long)1ll))));
        
        //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103670;
            for (
                 //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103670 = i64551min103668; ((i103670) <= (i64551max103669));
                 
                 //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103670 = ((x10_long) ((i103670) + (((x10_long)1ll)))))
            {
                
                //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103671 = i103670;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index103653 = i103671;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value103654 = reqsIndex;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret103655;
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
                    if (((index103653) < (((x10_long) (((x10_int)0))))) ||
                        ((index103653) >= (reqoff->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103653), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (reqoff->FMGL(data)).set(index103653, value103654);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret103655 = value103654;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret103655;
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
        x10::lang::LongRange i64587domain103707 = r;
        
        //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64587min103708 = i64587domain103707->FMGL(min);
        
        //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64587max103709 = i64587domain103707->FMGL(max);
        
        //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103710;
            for (
                 //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103710 = i64587min103708; ((i103710) <= (i64587max103709));
                 
                 //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103710 = ((x10_long) ((i103710) + (((x10_long)1ll)))))
            {
                
                //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid103711 = i103710;
                
                //#line 282 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid_103705 = (__extension__ ({
                    
                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                    x10_long id103706 = vid103711;
                    ((x10_long) ((id103706) | (StoD->FMGL(rshifted))));
                }))
                ;
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i64569min103697 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103698 = vid103711;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103699;
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
                        if (((index103698) < (((x10_long) (((x10_int)0))))) ||
                            ((index103698) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103698), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103699 = (offset->FMGL(data))[index103698];
                    ret103699;
                }))
                ;
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i64569max103700 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103701 = ((x10_long) ((vid103711) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103702;
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
                        if (((index103701) < (((x10_long) (((x10_int)0))))) ||
                            ((index103701) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103701), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103702 = (offset->FMGL(data))[index103701];
                    ret103702;
                }))
                ) - (((x10_long) (((x10_int)1))))));
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                {
                    x10_long i103703;
                    for (
                         //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                         i103703 = i64569min103697; ((i103703) <= (i64569max103700));
                         
                         //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                         i103703 = ((x10_long) ((i103703) + (((x10_long)1ll)))))
                    {
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_long i103704 = i103703;
                        
                        //#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::MessageBuffer<x10_long> mesBuf103686 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103687 = (__extension__ ({
                                
                                //#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103688 =
                                  mesComm->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103689 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index103690 =
                                      i103704;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long ret103691;
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
                                        if (((index103690) < (((x10_long) (((x10_int)0))))) ||
                                            ((index103690) >= (id->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103690), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret103691 = (id->FMGL(data))[index103690];
                                    ret103691;
                                }))
                                ;
                                ((x10_int) (((x10_long) ((id103689) >> (0x3f & (this103688->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::xpregel::MessageBuffer<x10_long> ret103692;
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
                                if (((index103687) < (((x10_int)0))) ||
                                    ((((x10_long) (index103687))) >= (UCCMessages->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103687), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103692 = (UCCMessages->FMGL(data))[index103687];
                            ret103692;
                        }))
                        ;
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103686->FMGL(messages))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          vid_103705);
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103686->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          (__extension__ ({
                              
                              //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::graph::id::OnedR__DtoS this103693 =
                                mesComm->FMGL(mDtoS);
                              
                              //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                              x10_long id103694 = (__extension__ ({
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long index103695 = i103704;
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long ret103696;
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
                                      if (((index103695) < (((x10_long) (((x10_int)0))))) ||
                                          ((index103695) >= (id->
                                                               FMGL(data)->
                                                               FMGL(size))))
                                      {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103695), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103696 = (id->FMGL(data))[index103695];
                                  ret103696;
                              }))
                              ;
                              ((x10_long) ((id103694) & (this103693->
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
            x10::lang::LongRange i75975domain103722 = i_range103730;
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i75975min103723 = i75975domain103722->FMGL(min);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i75975max103724 = i75975domain103722->FMGL(max);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i103725;
                for (
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i103725 = i75975min103723; ((i103725) <= (i75975max103724));
                     
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i103725 = ((x10_long) ((i103725) + (((x10_long)1ll)))))
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii103726 = i103725;
                    
                    //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i103721 = ii103726;
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    ::std::sort((x10aux::nullCheck(saved_this->FMGL(mInEdge))->
                                   FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                   (__extension__ ({
                                       
                                       //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::MemoryChunk<x10_long> this103712 =
                                         x10aux::nullCheck(saved_this->
                                                             FMGL(mInEdge))->
                                           FMGL(offsets);
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103713 =
                                         i103721;
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103714;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((this103712->
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
                                           if (((index103713) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103713) >= (this103712->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103713), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103714 = (this103712->
                                                      FMGL(data))[index103713];
                                       ret103714;
                                   }))
                                   , ((x10_long) (((__extension__ ({
                                       
                                       //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::MemoryChunk<x10_long> this103715 =
                                         x10aux::nullCheck(saved_this->
                                                             FMGL(mInEdge))->
                                           FMGL(offsets);
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103716 =
                                         ((x10_long) ((i103721) + (((x10_long) (((x10_int)1))))));
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103717;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((this103715->
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
                                           if (((index103716) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103716) >= (this103715->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103716), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103717 = (this103715->
                                                      FMGL(data))[index103716];
                                       ret103717;
                                   }))
                                   ) - ((__extension__ ({
                                       
                                       //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::MemoryChunk<x10_long> this103718 =
                                         x10aux::nullCheck(saved_this->
                                                             FMGL(mInEdge))->
                                           FMGL(offsets);
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103719 =
                                         i103721;
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103720;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((this103718->
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
                                           if (((index103719) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103719) >= (this103718->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103719), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103720 = (this103718->
                                                      FMGL(data))[index103719];
                                       ret103720;
                                   }))
                                   )))))->pointer(), (x10aux::nullCheck(saved_this->
                                                                          FMGL(mInEdge))->
                                                        FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                        (__extension__ ({
                                                            
                                                            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::MemoryChunk<x10_long> this103712 =
                                                              x10aux::nullCheck(saved_this->
                                                                                  FMGL(mInEdge))->
                                                                FMGL(offsets);
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long index103713 =
                                                              i103721;
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long ret103714;
                                                            {
                                                                
                                                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (!((this103712->
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
                                                                if (((index103713) < (((x10_long) (((x10_int)0))))) ||
                                                                    ((index103713) >= (this103712->
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
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103713), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret103714 =
                                                              (this103712->
                                                                 FMGL(data))[index103713];
                                                            ret103714;
                                                        }))
                                                        ,
                                                        ((x10_long) (((__extension__ ({
                                                            
                                                            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::MemoryChunk<x10_long> this103715 =
                                                              x10aux::nullCheck(saved_this->
                                                                                  FMGL(mInEdge))->
                                                                FMGL(offsets);
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long index103716 =
                                                              ((x10_long) ((i103721) + (((x10_long) (((x10_int)1))))));
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long ret103717;
                                                            {
                                                                
                                                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (!((this103715->
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
                                                                if (((index103716) < (((x10_long) (((x10_int)0))))) ||
                                                                    ((index103716) >= (this103715->
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
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103716), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret103717 =
                                                              (this103715->
                                                                 FMGL(data))[index103716];
                                                            ret103717;
                                                        }))
                                                        ) - ((__extension__ ({
                                                            
                                                            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::MemoryChunk<x10_long> this103718 =
                                                              x10aux::nullCheck(saved_this->
                                                                                  FMGL(mInEdge))->
                                                                FMGL(offsets);
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long index103719 =
                                                              i103721;
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long ret103720;
                                                            {
                                                                
                                                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (!((this103718->
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
                                                                if (((index103719) < (((x10_long) (((x10_int)0))))) ||
                                                                    ((index103719) >= (this103718->
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
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103719), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret103720 =
                                                              (this103718->
                                                                 FMGL(data))[index103719];
                                                            ret103720;
                                                        }))
                                                        )))))->pointer() + (x10aux::nullCheck(saved_this->
                                                                                                FMGL(mInEdge))->
                                                                              FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                                              (__extension__ ({
                                                                                  
                                                                                  //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                                                  org::scalegraph::util::MemoryChunk<x10_long> this103712 =
                                                                                    x10aux::nullCheck(saved_this->
                                                                                                        FMGL(mInEdge))->
                                                                                      FMGL(offsets);
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long index103713 =
                                                                                    i103721;
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long ret103714;
                                                                                  {
                                                                                      
                                                                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (!((this103712->
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
                                                                                      if (((index103713) < (((x10_long) (((x10_int)0))))) ||
                                                                                          ((index103713) >= (this103712->
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
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103713), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                  }
                                                                                  
                                                                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret103714 =
                                                                                    (this103712->
                                                                                       FMGL(data))[index103713];
                                                                                  ret103714;
                                                                              }))
                                                                              ,
                                                                              ((x10_long) (((__extension__ ({
                                                                                  
                                                                                  //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                                                  org::scalegraph::util::MemoryChunk<x10_long> this103715 =
                                                                                    x10aux::nullCheck(saved_this->
                                                                                                        FMGL(mInEdge))->
                                                                                      FMGL(offsets);
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long index103716 =
                                                                                    ((x10_long) ((i103721) + (((x10_long) (((x10_int)1))))));
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long ret103717;
                                                                                  {
                                                                                      
                                                                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (!((this103715->
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
                                                                                      if (((index103716) < (((x10_long) (((x10_int)0))))) ||
                                                                                          ((index103716) >= (this103715->
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
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103716), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                  }
                                                                                  
                                                                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret103717 =
                                                                                    (this103715->
                                                                                       FMGL(data))[index103716];
                                                                                  ret103717;
                                                                              }))
                                                                              ) - ((__extension__ ({
                                                                                  
                                                                                  //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                                                  org::scalegraph::util::MemoryChunk<x10_long> this103718 =
                                                                                    x10aux::nullCheck(saved_this->
                                                                                                        FMGL(mInEdge))->
                                                                                      FMGL(offsets);
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long index103719 =
                                                                                    i103721;
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long ret103720;
                                                                                  {
                                                                                      
                                                                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (!((this103718->
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
                                                                                      if (((index103719) < (((x10_long) (((x10_int)0))))) ||
                                                                                          ((index103719) >= (this103718->
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
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103719), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                  }
                                                                                  
                                                                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret103720 =
                                                                                    (this103718->
                                                                                       FMGL(data))[index103719];
                                                                                  ret103720;
                                                                              }))
                                                                              )))))->size());
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc423) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc423)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc423);
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc423);
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
    x10::lang::LongRange i_range103730;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range103730);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::LongRange that_i_range103730 = buf.read<x10::lang::LongRange>();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >(that_i_range103730, that_saved_this);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__10(x10::lang::LongRange i_range103730, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this) : i_range103730(i_range103730), saved_this(saved_this) { }
    
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
        x10::lang::LongRange i64624domain103773 = r;
        
        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64624min103774 = i64624domain103773->FMGL(min);
        
        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i64624max103775 = i64624domain103773->FMGL(max);
        
        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103776;
            for (
                 //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103776 = i64624min103774; ((i103776) <= (i64624max103775));
                 
                 //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103776 = ((x10_long) ((i103776) + (((x10_long)1ll)))))
            {
                
                //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid103777 = i103776;
                
                //#line 330 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid_103771 = (__extension__ ({
                    
                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                    x10_long id103772 = vid103777;
                    ((x10_long) ((id103772) | (StoD->FMGL(rshifted))));
                }))
                ;
                
                //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i64606min103763 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103764 = vid103777;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103765;
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
                        if (((index103764) < (((x10_long) (((x10_int)0))))) ||
                            ((index103764) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103764), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103765 = (offset->FMGL(data))[index103764];
                    ret103765;
                }))
                ;
                
                //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i64606max103766 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103767 = ((x10_long) ((vid103777) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103768;
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
                        if (((index103767) < (((x10_long) (((x10_int)0))))) ||
                            ((index103767) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103767), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103768 = (offset->FMGL(data))[index103767];
                    ret103768;
                }))
                ) - (((x10_long) (((x10_int)1))))));
                
                //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                {
                    x10_long i103769;
                    for (
                         //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                         i103769 = i64606min103763; ((i103769) <= (i64606max103766));
                         
                         //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                         i103769 = ((x10_long) ((i103769) + (((x10_long)1ll)))))
                    {
                        
                        //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_long i103770 = i103769;
                        
                        //#line 332 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > mesBuf103751 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103752 = (__extension__ ({
                                
                                //#line 332 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103753 =
                                  mesComm->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103754 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index103755 =
                                      i103770;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long ret103756;
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
                                        if (((index103755) < (((x10_long) (((x10_int)0))))) ||
                                            ((index103755) >= (id->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103755), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret103756 = (id->FMGL(data))[index103755];
                                    ret103756;
                                }))
                                ;
                                ((x10_int) (((x10_long) ((id103754) >> (0x3f & (this103753->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > ret103757;
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
                                if (((index103752) < (((x10_int)0))) ||
                                    ((((x10_long) (index103752))) >= (UCCMessages->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103752), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103757 = (UCCMessages->FMGL(data))[index103752];
                            ret103757;
                        }))
                        ;
                        
                        //#line 333 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103751->FMGL(messages))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::add(
                          (__extension__ ({
                              
                              //#line 333 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc103758 =
                                 org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
                              
                              //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                              x10_long val103747 = vid_103771;
                              
                              //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                              TPMGL(E) val103748 = (__extension__ ({
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long index103749 = i103770;
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  TPMGL(E) ret103750;
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
                                      if (((index103749) < (((x10_long) (((x10_int)0))))) ||
                                          ((index103749) >= (value->
                                                               FMGL(data)->
                                                               FMGL(size))))
                                      {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103749), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103750 = (value->FMGL(data))[index103749];
                                  ret103750;
                              }))
                              ;
                              
                              //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                              alloc103758->FMGL(val1) = val103747;
                              
                              //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                              alloc103758->FMGL(val2) = val103748;
                              alloc103758;
                          }))
                          );
                        
                        //#line 334 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103751->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          (__extension__ ({
                              
                              //#line 334 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::graph::id::OnedR__DtoS this103759 =
                                mesComm->FMGL(mDtoS);
                              
                              //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                              x10_long id103760 = (__extension__ ({
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long index103761 = i103770;
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long ret103762;
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
                                      if (((index103761) < (((x10_long) (((x10_int)0))))) ||
                                          ((index103761) >= (id->
                                                               FMGL(data)->
                                                               FMGL(size))))
                                      {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103761), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103762 = (id->FMGL(data))[index103761];
                                  ret103762;
                              }))
                              ;
                              ((x10_long) ((id103760) & (this103759->
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
            x10_long tid103797 = ((x10_long) (idx103799));
            
            //#line 350 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r103798 = i_range103803;
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i64643domain103792 = r103798;
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i64643min103793 = i64643domain103792->FMGL(min);
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i64643max103794 = i64643domain103792->FMGL(max);
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_long i103795;
                for (
                     //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i103795 = i64643min103793; ((i103795) <= (i64643max103794));
                     
                     //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i103795 = ((x10_long) ((i103795) + (((x10_long)1ll)))))
                {
                    
                    //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i103796 = i103795;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103778 = i103796;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value103779 = (__extension__ ({
                        
                        //#line 352 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> this103780 =
                          (__extension__ ({
                            
                            //#line 352 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > this103781 =
                              mesComm->FMGL(mUCRMessages);
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index103782 = i103796;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret103783;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this103781->FMGL(data)).isValid()))
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
                                if (((index103782) < (((x10_long) (((x10_int)0))))) ||
                                    ((index103782) >= (this103781->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103782), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103783 = (this103781->FMGL(data))[index103782];
                            ret103783;
                        }))
                        ;
                        this103780->FMGL(val1);
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103784;
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
                        if (((index103778) < (((x10_long) (((x10_int)0))))) ||
                            ((index103778) >= (id->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103778), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (id->FMGL(data)).set(index103778, value103779);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103784 = value103779;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103784;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103785 = i103796;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) value103786 = (__extension__ ({
                        
                        //#line 353 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> this103787 =
                          (__extension__ ({
                            
                            //#line 353 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > this103788 =
                              mesComm->FMGL(mUCRMessages);
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index103789 = i103796;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret103790;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this103788->FMGL(data)).isValid()))
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
                                if (((index103789) < (((x10_long) (((x10_int)0))))) ||
                                    ((index103789) >= (this103788->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103789), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103790 = (this103788->FMGL(data))[index103789];
                            ret103790;
                        }))
                        ;
                        this103787->FMGL(val2);
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) ret103791;
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
                        if (((index103785) < (((x10_long) (((x10_int)0))))) ||
                            ((index103785) >= (value->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103785), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (value->FMGL(data)).set(index103785, value103786);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103791 = value103786;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103791;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc427) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc427)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc427);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc427);
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
    x10_int idx103799;
    x10::lang::LongRange i_range103803;
    org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm;
    org::scalegraph::util::MemoryChunk<x10_long> id;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx103799);
        buf.write(this->i_range103803);
        buf.write(this->mesComm);
        buf.write(this->id);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10_int that_idx103799 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range103803 = buf.read<x10::lang::LongRange>();
        org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* that_mesComm = buf.read<org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_id = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_value = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >(that_idx103799, that_i_range103803, that_mesComm, that_id, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__12(x10_int idx103799, x10::lang::LongRange i_range103803, org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm, org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) : idx103799(idx103799), i_range103803(i_range103803), mesComm(mesComm), id(id), value(value) { }
    
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
            x10_long tid103839 = ((x10_long) (idx103841));
            
            //#line 448 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r_word103840 = i_range103845;
            
            //#line 449 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r103838 =  x10::lang::LongRange::_alloc();
            
            //#line 39 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": x10.ast.X10LocalDecl_c
            x10_long min103834 = ((x10_long) ((r_word103840->FMGL(min)) * (((x10_long) (((x10_int)64))))));
            
            //#line 39 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": x10.ast.X10LocalDecl_c
            x10_long max103835 = ((x10_long) (((__extension__ ({
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a103836 = numLocalVertexes;
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long b103837 = ((x10_long) ((((x10_long) ((r_word103840->
                                                                 FMGL(max)) + (((x10_long) (((x10_int)1))))))) * (((x10_long) (((x10_int)64))))));
                ((a103836) < (b103837)) ? (a103836) : (b103837);
            }))
            ) - (((x10_long) (((x10_int)1))))));
            
            //#line 40 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": x10.ast.X10LocalDecl_c
            x10_boolean x103833 = (x10aux::struct_equals(min103834, ((x10_long)0ll)));
            
            //#line 41 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
            r103838->FMGL(min) = min103834;
            
            //#line 41 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
            r103838->FMGL(max) = max103835;
            
            //#line 41 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
            r103838->FMGL(zeroBased) = x103833;
            
            //#line 451 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.ClosureCall_c
            x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::__apply(x10aux::nullCheck(task), 
              tid103839, r103838);
        }
        catch (x10::lang::CheckedThrowable* __exc448) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc448)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc448);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc448);
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
    x10_int idx103841;
    x10::lang::LongRange i_range103845;
    x10_long numLocalVertexes;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx103841);
        buf.write(this->i_range103845);
        buf.write(this->numLocalVertexes);
        buf.write(this->task);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__20* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__20>();
        buf.record_reference(storage);
        x10_int that_idx103841 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range103845 = buf.read<x10::lang::LongRange>();
        x10_long that_numLocalVertexes = buf.read<x10_long>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* that_task = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__20* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__20(that_idx103841, that_i_range103845, that_numLocalVertexes, that_task);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__20(x10_int idx103841, x10::lang::LongRange i_range103845, x10_long numLocalVertexes, x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task) : idx103841(idx103841), i_range103845(i_range103845), numLocalVertexes(numLocalVertexes), task(task) { }
    
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
    this->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::__fieldInitializers63189();
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int rank_r = (__extension__ ({
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this102068 = x10aux::nullCheck(team)->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret102069;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret102070; __ret102070: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this102068)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret102069 = (x10aux::nullCheck(this102068)->FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret102070_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this102068)->FMGL(region)->contains(
                                ((x10_int)0)))) {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret102069 = (x10aux::nullCheck(this102068)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this102068)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret102070_end_;
            }
            
        }goto __ret102070_end_; __ret102070_end_: ;
        }
        ret102069;
        }))
        ;
        
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mTeam) = (__extension__ ({
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc64328 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam103452 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc64328->FMGL(base) = baseTeam103452;
        alloc64328;
    }))
    ;
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mIds) = ids;
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this102073 =
          this->FMGL(mIds);
        this102073->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVtoD) = (__extension__ ({
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__VtoD alloc64329 =
           org::scalegraph::graph::id::OnedR__VtoD::_alloc();
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc64329)->::org::scalegraph::graph::id::OnedR__VtoD::_constructor(
          ids);
        alloc64329;
    }))
    ;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDtoV) = (__extension__ ({
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoV alloc64330 =
           org::scalegraph::graph::id::OnedR__DtoV::_alloc();
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc64330)->::org::scalegraph::graph::id::OnedR__DtoV::_constructor(
          ids);
        alloc64330;
    }))
    ;
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDtoS) = (__extension__ ({
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoS alloc64331 =
           org::scalegraph::graph::id::OnedR__DtoS::_alloc();
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids103454 = ids;
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int lgl103453 = ids103454->FMGL(lgl);
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc64331->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (lgl103453))))) - (((x10_long)1ll))));
        alloc64331;
    }))
    ;
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStoD) = (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD alloc64332 =
           org::scalegraph::graph::id::OnedR__StoD::_alloc();
        
        //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids103456 = ids;
        
        //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int r103457 = rank_r;
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int lgl103455 = ids103456->FMGL(lgl);
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc64332->FMGL(rshifted) = ((x10_long) ((((x10_long) (r103457))) << (0x3f & (lgl103455))));
        alloc64332;
    }))
    ;
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStoV) = (__extension__ ({
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoV alloc64333 =
           org::scalegraph::graph::id::OnedR__StoV::_alloc();
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids103458 = ids;
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int r103459 = rank_r;
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc64333->FMGL(r) = r103459;
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc64333->FMGL(lgr) = ids103458->FMGL(lgr);
        alloc64333;
    }))
    ;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexValue) = org::scalegraph::util::MemoryChunk<TPMGL(V) >::_make(numLocalVertexes, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexActive) = (__extension__ ({
        
        //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Bitmap* alloc64334 =  ((new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap()))
        ;
        
        //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc64334)->::org::scalegraph::util::Bitmap::_constructor(
          numLocalVertexes, true);
        alloc64334;
    }))
    ;
    
    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexShouldBeActive) = (__extension__ ({
        
        //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Bitmap* alloc64335 =  ((new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap()))
        ;
        
        //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc64335)->::org::scalegraph::util::Bitmap::_constructor(
          numLocalVertexes, true);
        alloc64335;
    }))
    ;
    
    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutEdge) = (__extension__ ({
        
        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* alloc64336 =
           ((new (memset(x10aux::alloc<org::scalegraph::xpregel::GraphEdge<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>))) org::scalegraph::xpregel::GraphEdge<TPMGL(E)>()))
        ;
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10Call_c
        alloc64336->org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::__fieldInitializers65554();
        alloc64336;
    }))
    ;
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInEdge) = (__extension__ ({
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* alloc64337 =
           ((new (memset(x10aux::alloc<org::scalegraph::xpregel::GraphEdge<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>))) org::scalegraph::xpregel::GraphEdge<TPMGL(E)>()))
        ;
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10Call_c
        alloc64337->org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::__fieldInitializers65554();
        alloc64337;
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
        org::scalegraph::util::MemoryChunk<x10_long> this102086 =
          x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(vertexes);
        this102086->FMGL(data)->FMGL(size);
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
        org::scalegraph::util::Team2 this102087 = this->FMGL(mTeam);
        x10aux::nullCheck(this102087->FMGL(base))->size();
    }))
    ;
    
    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this102088 =
          this->FMGL(mIds);
        this102088->FMGL(numberOfLocalVertexes);
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
    x10::lang::IntRange range103672 = threadRange;
    
    //#line 837 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size103509 = ((x10_int) ((((x10_int) ((range103672->
                                                     FMGL(max)) - (range103672->
                                                                     FMGL(min))))) + (((x10_int)1))));
    
    //#line 838 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103510 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 839 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size103511 = (__extension__ ({
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int a103512 = ((x10_int) ((((x10_int) ((((x10_int) ((size103509) + (nthreads103510)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads103510)));
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103512) < (((x10_int)1))) ? (((x10_int)1)) : (a103512);
    }))
    ;
    {
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var43 = x10::lang::Runtime::startFinish();
        {
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104026 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i75957max103506 = ((x10_int) ((nthreads103510) - (((x10_int)1))));
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103507;
                            for (
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103507 = ((x10_int)0); ((i103507) <= (i75957max103506));
                                 
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103507 = ((x10_int) ((i103507) + (((x10_int)1)))))
                            {
                                
                                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103508 = i103507;
                                
                                //#line 841 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start103500 = (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103501 = ((x10_int) ((range103672->
                                                                     FMGL(max)) + (((x10_int)1))));
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103502 = ((x10_int) ((range103672->
                                                                     FMGL(min)) + (((x10_int) ((i103508) * (chunk_size103511))))));
                                    ((a103501) < (b103502))
                                      ? (a103501) : (b103502);
                                }))
                                ;
                                
                                //#line 842 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range103503 =
                                  x10::lang::IntRange::_make(i_start103500, (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103504 = range103672->
                                                        FMGL(max);
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103505 = ((x10_int) ((((x10_int) ((i_start103500) + (chunk_size103511)))) - (((x10_int)1))));
                                    ((a103504) < (b103505))
                                      ? (a103504) : (b103505);
                                }))
                                );
                                
                                //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E)>(i_range103503, list, outModReqRange, diffInEdgeCountPerThread, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc417) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc417);
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
            catch (x10::lang::CheckedThrowable* __exc418) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104027 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc418);
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104026 = formal104027;
                    }
                } else
                throw;
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104026)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104026))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104026));
                }
                
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var43);
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104026)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104026)))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104026));
                }
                
            }
            
        }
    }
    
    //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> diec = org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (numTeam)), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i64383domain103673 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((diec->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long i64383max103674 = i64383domain103673->FMGL(max);
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_long i103675;
        for (
             //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103675 = ((x10_long)0ll); ((i103675) <= (i64383max103674));
             
             //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103675 = ((x10_long) ((i103675) + (((x10_long)1ll)))))
        {
            
            //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long team103676 = i103675;
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i64364domain103528 = threadRange;
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i64364max103529 = i64364domain103528->
                                        FMGL(max);
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_int i103530;
                for (
                     //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i103530 = ((x10_int)0); ((i103530) <= (i64364max103529));
                     
                     //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i103530 = ((x10_int) ((i103530) + (((x10_int)1)))))
                {
                    
                    //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int thread103531 = i103530;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x103519 =
                      diec;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long y103520 = team103676;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int z103521 = (__extension__ ({
                        
                        //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this103522 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103523 = thread103531;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> ret103524;
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
                                if (((index103523) < (((x10_int)0))) ||
                                    ((((x10_long) (index103523))) >= (diffInEdgeCountPerThread->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103523), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103524 = (diffInEdgeCountPerThread->
                                           FMGL(data))[index103523];
                            ret103524;
                        }))
                        ;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index103525 = team103676;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret103526;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this103522->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103525) < (((x10_long) (((x10_int)0))))) ||
                                ((index103525) >= (this103522->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103525), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103526 = (this103522->FMGL(data))[index103525];
                        ret103526;
                    }))
                    ;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret103527;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int r103516 = ((x10_int) (((__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index103517 = y103520;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret103518;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x103519->FMGL(data)).isValid()))
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
                            if (((index103517) < (((x10_long) (((x10_int)0))))) ||
                                ((index103517) >= (x103519->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103517), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103518 = (x103519->FMGL(data))[index103517];
                        ret103518;
                    }))
                    ) + (z103521)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103513 = y103520;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value103514 = r103516;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret103515;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x103519->FMGL(data)).isValid()))
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
                        if (((index103513) < (((x10_long) (((x10_int)0))))) ||
                            ((index103513) >= (x103519->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103513), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (x103519->FMGL(data)).set(index103513, value103514);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103515 = value103514;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103515;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103527 = r103516;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Local_c
                    ret103527;
                }
            }
            
        }
    }
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > diffInEdgeDataPerThread =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >::_make(((x10_long) (this->
                                                                                                                                                                                                              FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E)>(numTeam, diffInEdgeCountPerThread))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 836 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange range103677 = threadRange;
    
    //#line 837 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size103599 = ((x10_int) ((((x10_int) ((range103677->
                                                     FMGL(max)) - (range103677->
                                                                     FMGL(min))))) + (((x10_int)1))));
    
    //#line 838 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103600 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 839 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size103601 = (__extension__ ({
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int a103602 = ((x10_int) ((((x10_int) ((((x10_int) ((size103599) + (nthreads103600)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads103600)));
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103602) < (((x10_int)1))) ? (((x10_int)1)) : (a103602);
    }))
    ;
    {
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var44 = x10::lang::Runtime::startFinish();
        {
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104029 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i75957max103596 = ((x10_int) ((nthreads103600) - (((x10_int)1))));
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103597;
                            for (
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103597 = ((x10_int)0); ((i103597) <= (i75957max103596));
                                 
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103597 = ((x10_int) ((i103597) + (((x10_int)1)))))
                            {
                                
                                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103598 = i103597;
                                
                                //#line 841 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start103590 = (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103591 = ((x10_int) ((range103677->
                                                                     FMGL(max)) + (((x10_int)1))));
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103592 = ((x10_int) ((range103677->
                                                                     FMGL(min)) + (((x10_int) ((i103598) * (chunk_size103601))))));
                                    ((a103591) < (b103592))
                                      ? (a103591) : (b103592);
                                }))
                                ;
                                
                                //#line 842 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range103593 =
                                  x10::lang::IntRange::_make(i_start103590, (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103594 = range103677->
                                                        FMGL(max);
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103595 = ((x10_int) ((((x10_int) ((i_start103590) + (chunk_size103601)))) - (((x10_int)1))));
                                    ((a103594) < (b103595))
                                      ? (a103594) : (b103595);
                                }))
                                );
                                
                                //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E)>(i_range103593, list, diffInEdgeDataPerThread, numTeam, outModReqRange, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc420) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc420);
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
            catch (x10::lang::CheckedThrowable* __exc421) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104030 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc421);
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104029 = formal104030;
                    }
                } else
                throw;
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104029)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104029))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104029));
                }
                
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var44);
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104029)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104029)))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104029));
                }
                
            }
            
        }
    }
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long dataNum = ((x10_long)0ll);
    
    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i64421domain103678 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((diec->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long i64421max103679 = i64421domain103678->FMGL(max);
    
    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_long i103680;
        for (
             //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103680 = ((x10_long)0ll); ((i103680) <= (i64421max103679));
             
             //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103680 = ((x10_long) ((i103680) + (((x10_long)1ll)))))
        {
            
            //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long team103681 = i103680;
            
            //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
            dataNum = ((x10_long) ((dataNum) + (((x10_long) ((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index103603 = team103681;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret103604;
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
                    if (((index103603) < (((x10_long) (((x10_int)0))))) ||
                        ((index103603) >= (diec->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103603), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret103604 = (diec->FMGL(data))[index103603];
                ret103604;
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
    x10_int i64459max103682 = ((x10_int) ((numTeam) - (((x10_int)1))));
    
    //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_int i103683;
        for (
             //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103683 = ((x10_int)0); ((i103683) <= (i64459max103682));
             
             //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103683 = ((x10_int) ((i103683) + (((x10_int)1)))))
        {
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int team103684 = i103683;
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i64440domain103611 = threadRange;
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i64440max103612 = i64440domain103611->
                                        FMGL(max);
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_int i103613;
                for (
                     //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i103613 = ((x10_int)0); ((i103613) <= (i64440max103612));
                     
                     //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i103613 = ((x10_int) ((i103613) + (((x10_int)1)))))
                {
                    
                    //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int thread103614 = i103613;
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > src103605 =
                      (__extension__ ({
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > this103606 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103607 = thread103614;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > ret103608;
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
                                if (((index103607) < (((x10_int)0))) ||
                                    ((((x10_long) (index103607))) >= (diffInEdgeDataPerThread->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103607), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103608 = (diffInEdgeDataPerThread->
                                           FMGL(data))[index103607];
                            ret103608;
                        }))
                        ;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103609 = team103684;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > ret103610;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this103606->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103609) < (((x10_int)0))) ||
                                ((((x10_long) (index103609))) >= (this103606->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103609), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103610 = (this103606->FMGL(data))[index103609];
                        ret103610;
                    }))
                    ;
                    
                    //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::MemoryChunk<void>::template copy<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> >(
                      src103605, ((x10_long)0ll), died, dataIndex,
                      (__extension__ ({
                          src103605->FMGL(data)->FMGL(size);
                      }))
                      );
                    
                    //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    dataIndex = ((x10_long) ((dataIndex) + ((__extension__ ({
                        src103605->FMGL(data)->FMGL(size);
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
        org::scalegraph::graph::id::IdStruct this102655 =
          this->FMGL(mIds);
        this102655->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::OnedR__StoD StoD =  org::scalegraph::graph::id::OnedR__StoD::_alloc();
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::IdStruct ids103740 = this->
                                                       FMGL(mIds);
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int r103741 = (__extension__ ({
        
        //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this103742 = x10aux::nullCheck(this->
                                                                     FMGL(mTeam)->
                                                                     FMGL(base))->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret103743;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret103744; __ret103744: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this103742)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret103743 = (x10aux::nullCheck(this103742)->
                               FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret103744_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this103742)->
                                FMGL(region)->contains(((x10_int)0))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret103743 = (x10aux::nullCheck(this103742)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this103742)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret103744_end_;
            }
            
        }goto __ret103744_end_; __ret103744_end_: ;
        }
        ret103743;
        }))
        ;
        
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int lgl103685 = ids103740->FMGL(lgl);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    StoD->FMGL(rshifted) = ((x10_long) ((((x10_long) (r103741))) << (0x3f & (lgl103685))));
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
    x10::lang::LongRange range103745 = x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((numLocalVertexes) - (((x10_long)1ll)))));
    
    //#line 848 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size103736 = ((x10_long) ((((x10_long) ((range103745->
                                                        FMGL(max)) - (range103745->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 849 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103737 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 850 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size103738 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a103739 = ((x10_long) ((((x10_long) ((((x10_long) ((size103736) + (((x10_long) (nthreads103737)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads103737)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103739) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a103739);
    }))
    ;
    {
        
        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var45 = x10::lang::Runtime::startFinish();
        {
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104032 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i75994max103733 = ((x10_int) ((nthreads103737) - (((x10_int)1))));
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103734;
                            for (
                                 //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103734 = ((x10_int)0); ((i103734) <= (i75994max103733));
                                 
                                 //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103734 = ((x10_int) ((i103734) + (((x10_int)1)))))
                            {
                                
                                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103735 = i103734;
                                
                                //#line 852 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start103727 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103728 = ((x10_long) ((range103745->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103729 = ((x10_long) ((range103745->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i103735))) * (chunk_size103738))))));
                                    ((a103728) < (b103729))
                                      ? (a103728) : (b103729);
                                }))
                                ;
                                
                                //#line 853 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range103730 =
                                  x10::lang::LongRange::_make(i_start103727, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103731 = range103745->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103732 = ((x10_long) ((((x10_long) ((i_start103727) + (chunk_size103738)))) - (((x10_long) (((x10_int)1))))));
                                    ((a103731) < (b103732))
                                      ? (a103731) : (b103732);
                                }))
                                );
                                
                                //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E)>(i_range103730, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc424) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc424);
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
            catch (x10::lang::CheckedThrowable* __exc425) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104033 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc425);
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104032 = formal104033;
                    }
                } else
                throw;
            }
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104032)))
            {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104032))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104032));
                }
                
            }
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var45);
            }
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104032)))
            {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104032)))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104032));
                }
                
            }
            
        }
    }
    
    //#line 306 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCROffset) = (__extension__ ({
        (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> alloc102735 =
               org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc102735->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc102735;
        }))
        ;
    }))
    ;
    
    //#line 307 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCRMessages) = (__extension__ ({
        (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> alloc102737 =
               org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc102737->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc102737;
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
        org::scalegraph::graph::id::IdStruct this102741 =
          this->FMGL(mIds);
        this102741->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::OnedR__StoD StoD =  org::scalegraph::graph::id::OnedR__StoD::_alloc();
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::IdStruct ids103813 = this->
                                                       FMGL(mIds);
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int r103814 = (__extension__ ({
        
        //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this103815 = x10aux::nullCheck(this->
                                                                     FMGL(mTeam)->
                                                                     FMGL(base))->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret103816;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret103817; __ret103817: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this103815)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret103816 = (x10aux::nullCheck(this103815)->
                               FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret103817_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this103815)->
                                FMGL(region)->contains(((x10_int)0))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret103816 = (x10aux::nullCheck(this103815)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this103815)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret103817_end_;
            }
            
        }goto __ret103817_end_; __ret103817_end_: ;
        }
        ret103816;
        }))
        ;
        
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int lgl103746 = ids103813->FMGL(lgl);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    StoD->FMGL(rshifted) = ((x10_long) ((((x10_long) (r103814))) << (0x3f & (lgl103746))));
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
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > this102776 =
          mesComm->FMGL(mUCRMessages);
        this102776->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 348 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> id = org::scalegraph::util::MemoryChunk<x10_long >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 349 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> value = org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range103818 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numEdges) - (((x10_long) (((x10_int)1)))))));
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size103809 = ((x10_long) ((((x10_long) ((range103818->
                                                        FMGL(max)) - (range103818->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103810 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size103811 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a103812 = ((x10_long) ((((x10_long) ((((x10_long) ((size103809) + (((x10_long) (nthreads103810)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads103810)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103812) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a103812);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var46 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104035 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max103806 = ((x10_int) ((nthreads103810) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103807;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103807 = ((x10_int)0); ((i103807) <= (i76030max103806));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103807 = ((x10_int) ((i103807) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103808 = i103807;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx103799 = i103808;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start103800 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103801 = ((x10_long) ((range103818->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103802 = ((x10_long) ((range103818->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i103808))) * (chunk_size103811))))));
                                    ((a103801) < (b103802))
                                      ? (a103801) : (b103802);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range103803 =
                                  x10::lang::LongRange::_make(i_start103800, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103804 = range103818->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103805 = ((x10_long) ((((x10_long) ((i_start103800) + (chunk_size103811)))) - (((x10_long) (((x10_int)1))))));
                                    ((a103804) < (b103805))
                                      ? (a103804) : (b103805);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E)>(idx103799, i_range103803, mesComm, id, value))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc428) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc428);
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
            catch (x10::lang::CheckedThrowable* __exc429) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104036 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc429);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104035 = formal104036;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104035)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104035))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104035));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var46);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104035)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104035)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104035));
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
            org::scalegraph::util::MemoryChunk<x10_long> alloc102842 =
               org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc102842->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc102842;
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
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::__fieldInitializers63189(
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
                                                  x10::array::Array<x10_int>* this102847 =
                                                    x10aux::nullCheck(team->
                                                                        FMGL(base))->role();
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                  ;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int ret102848;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret102849; __ret102849: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(this102847)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret102848 =
                                                            (x10aux::nullCheck(this102847)->
                                                               FMGL(raw))->__apply(((x10_int)0));
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret102849_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(this102847)->
                                                                  FMGL(region)->contains(
                                                                  ((x10_int)0))))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                ((x10_int)0));
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret102848 =
                                                            (x10aux::nullCheck(this102847)->
                                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this102847)->
                                                                                                                   FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret102849_end_;
                                                      }
                                                      
                                                  }goto __ret102849_end_; __ret102849_end_: ;
                                                  }
                                                  ret102848;
                                                  }))
                                                  , ((x10_int)0)));
                        
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(A) value103821 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
      src);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(A) ret103822;
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
    (src->FMGL(data)).set(((x10_int)0), value103821);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret103822 = value103821;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret103822;
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
        TPMGL(A) value103819 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
          buffer);
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(A) ret103820;
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
        (buffer->FMGL(data)).set(((x10_int)0), value103819);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret103820 = value103819;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret103820;
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
        TPMGL(A) ret102859;
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
        ret102859 = (src->FMGL(data))[((x10_int)0)];
        ret102859;
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
    x10::array::Array<x10_long>* id56 = x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::preProcess();
    
    //#line 404 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numActive = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret102862;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret102862 = (x10aux::nullCheck(id56)->FMGL(raw))->__apply(((x10_int)0));
        ret102862;
    }))
    ;
    
    //#line 404 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numRawMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret102865;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret102865 = (x10aux::nullCheck(id56)->FMGL(raw))->__apply(((x10_int)1));
        ret102865;
    }))
    ;
    
    //#line 404 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numVertexMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret102868;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret102868 = (x10aux::nullCheck(id56)->FMGL(raw))->__apply(((x10_int)2));
        ret102868;
    }))
    ;
    {
        
        //#line 405 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)7));
    }
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value103823 = numActive;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret103824;
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
    (stt->FMGL(data)).set(((x10_int)1), value103823);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret103824 = value103823;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret103824;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value103825 = numRawMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret103826;
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
    (stt->FMGL(data)).set(((x10_int)2), value103825);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret103826 = value103825;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret103826;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value103827 = numVertexMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret103828;
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
    (stt->FMGL(data)).set(((x10_int)3), value103827);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret103828 = value103827;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret103828;
    
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
            x10_long ret102883;
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
            ret102883 = (recvStt->FMGL(data))[((x10_int)0)];
            ret102883;
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
                                   x10_long ret102886;
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
                                   ret102886 = (recvStt->
                                                  FMGL(data))[((x10_int)1)];
                                   ret102886;
                               }))
                               , ((x10_long)0ll))) && (x10aux::struct_equals((__extension__ ({
                                                                                 
                                                                                 //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                                                                 ;
                                                                                 
                                                                                 //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                 x10_long ret102889;
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
                                                                                 ret102889 =
                                                                                   (recvStt->
                                                                                      FMGL(data))[((x10_int)2)];
                                                                                 ret102889;
                                                                             }))
                                                                             ,
                                                                             ((x10_long)0ll))) &&
        (x10aux::struct_equals((__extension__ ({
                                   
                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                   ;
                                   
                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                   x10_long ret102892;
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
                                   ret102892 = (recvStt->
                                                  FMGL(data))[((x10_int)3)];
                                   ret102892;
                               }))
                               , ((x10_long)0ll)))) {
        
        //#line 424 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    //#line 428 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id57 = x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::process(
                                          combiner, (((__extension__ ({
                                              
                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                              ;
                                              
                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                              x10_long ret102895;
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
                                              ret102895 =
                                                (recvStt->
                                                   FMGL(data))[((x10_int)2)];
                                              ret102895;
                                          }))
                                          ) > (((x10_long) (((x10_int)0))))),
                                          (((__extension__ ({
                                              
                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                              ;
                                              
                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                              x10_long ret102898;
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
                                              ret102898 =
                                                (recvStt->
                                                   FMGL(data))[((x10_int)3)];
                                              ret102898;
                                          }))
                                          ) > (((x10_long) (((x10_int)0))))));
    
    //#line 428 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numCombinedMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret102901;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret102901 = (x10aux::nullCheck(id57)->FMGL(raw))->__apply(((x10_int)0));
        ret102901;
    }))
    ;
    
    //#line 428 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numTransferedVertexMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret102904;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret102904 = (x10aux::nullCheck(id57)->FMGL(raw))->__apply(((x10_int)1));
        ret102904;
    }))
    ;
    {
        
        //#line 430 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)9));
    }
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value103829 = numCombinedMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret103830;
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
    (stt->FMGL(data)).set(((x10_int)4), value103829);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret103830 = value103829;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret103830;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value103831 = numTransferedVertexMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret103832;
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
    (stt->FMGL(data)).set(((x10_int)5), value103831);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret103832 = value103831;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret103832;
    
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

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
class StopWatch;
} } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageCommunicator;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageBuffer;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class EdgeProvider;
} } } 
namespace x10 { namespace lang { 
class ULong;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
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
namespace x10 { namespace lang { 
class Error;
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
namespace x10 { namespace compiler { 
class CompilerFlags;
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
    
    void _constructor(x10::util::Team* team, org::scalegraph::graph::id::IdStruct ids);
    
    static org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* _make(
             x10::util::Team* team, org::scalegraph::graph::id::IdStruct ids);
    
    void _constructor(x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix);
    
    static org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* _make(
             x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix);
    
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
    virtual void __fieldInitializers58489();
    
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
#include <x10/lang/Long.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <org/scalegraph/util/StopWatch.h>
#include <org/scalegraph/Config.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <org/scalegraph/xpregel/MessageCommunicator.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/xpregel/MessageBuffer.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/Math.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <x10/lang/Fun_0_2.h>
#include <org/scalegraph/xpregel/EdgeProvider.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Zero.h>
#include <x10/lang/String.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Native.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* __apply(x10_long i) {
        
        //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_make(saved_this,
                                                                                                      ectx,
                                                                                                      i);
        
    }
    
    // captured environment
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->ectx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* that_ectx = buf.read<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_saved_this, that_ectx);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__4(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx) : saved_this(saved_this), ectx(ectx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:307";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* __apply(x10_long i) {
        
        //#line 309 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(vctxs->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>::__apply(
                                   i))->FMGL(mEdgeProvider);
        
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
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> that_vctxs = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_vctxs);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__5(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs) : vctxs(vctxs) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:309";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid58939, x10::lang::LongRange r58940) {
        
        //#line 332 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* vc58941 =
          vctxs->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>::__apply(
            tid58939);
        
        //#line 333 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ep58942 =
          x10aux::nullCheck(vc58941)->FMGL(mEdgeProvider);
        
        //#line 334 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(M)>* mesTempBuffer58943 =
          org::scalegraph::util::GrowableMemory<TPMGL(M)>::_make();
        
        //#line 335 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long numProcessed58944 = ((x10_long)0ll);
        
        //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i58800domain58925 = r58940;
        
        //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58800min58926 = i58800domain58925->FMGL(min);
        
        //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58800max58927 = i58800domain58925->FMGL(max);
        
        //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i58928;
            for (
                 //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i58928 = i58800min58926; ((i58928) <= (i58800max58927));
                 
                 //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i58928 = ((x10_long) ((i58928) + (((x10_long)1ll)))))
            {
                
                //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long srcid58929 = i58928;
                
                //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(vc58941)->FMGL(mSrcid) =
                  srcid58929;
                
                //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(M)> mes58924 =
                  x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::message(
                    srcid58929, mesTempBuffer58943);
                
                //#line 346 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (((mes58924->org::scalegraph::util::MemoryChunk<TPMGL(M)>::size()) > (((x10_long) (((x10_int)0))))) ||
                    x10aux::nullCheck(saved_this->FMGL(mVertexActive))->org::scalegraph::util::Bitmap::__apply(
                      srcid58929)) {
                    
                    //#line 348 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >::__apply(x10aux::nullCheck(compute), 
                      vc58941, mes58924);
                    
                    //#line 350 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(ep58942)->FMGL(mEdgeChanged))
                    {
                        
                        //#line 350 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(ep58942)->fixModifiedEdges(
                          srcid58929);
                    }
                    
                    //#line 351 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(saved_this->FMGL(mVertexActive))->org::scalegraph::util::Bitmap::__apply(
                          srcid58929)) {
                        
                        //#line 351 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                        numProcessed58944 = ((x10_long) ((numProcessed58944) + (((x10_long)1ll))));
                    }
                    
                }
                
            }
        }
        
        //#line 355 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(aggregator, X10_NULL)))
        {
            
            //#line 356 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            intermedAggregateValue->org::scalegraph::util::MemoryChunk<TPMGL(A)>::__set(
              tid58939, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
                x10aux::nullCheck(x10aux::nullCheck(vc58941)->
                                    FMGL(mAggregateValue))->org::scalegraph::util::GrowableMemory<TPMGL(A)>::raw()));
        }
        
        //#line 359 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(x10aux::nullCheck(vc58941)->FMGL(mAggregateValue))->org::scalegraph::util::GrowableMemory<TPMGL(A)>::clear();
        
        //#line 360 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(vc58941)->FMGL(mNumActiveVertexes) =
          numProcessed58944;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx;
    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute;
    x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator;
    org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue;
    x10_int ss58950;
    
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
        buf.write(this->ss58950);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> that_vctxs = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* that_ectx = buf.read<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>*>();
        x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* that_compute = buf.read<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >*>();
        x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* that_aggregator = buf.read<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(A)> that_intermedAggregateValue = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(A)> >();
        x10_int that_ss58950 = buf.read<x10_int>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_vctxs, that_saved_this, that_ectx, that_compute, that_aggregator, that_intermedAggregateValue, that_ss58950);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__6(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx, x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator, org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue, x10_int ss58950) : vctxs(vctxs), saved_this(saved_this), ectx(ectx), compute(compute), aggregator(aggregator), intermedAggregateValue(intermedAggregateValue), ss58950(ss58950) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:331-363";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 450 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<TPMGL(T)>* typed_buf58954 =
              reinterpret_cast<org::scalegraph::util::GrowableMemory<TPMGL(T) >*>(buf58951);
            
            //#line 451 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
              x10aux::nullCheck(typed_buf58954)->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw(),
              ((x10_long)0ll), outMem, offset_58953, src_len58952);
            
            //#line 452 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(typed_buf58954)->org::scalegraph::util::GrowableMemory<TPMGL(T)>::clear();
        }
        catch (x10::lang::CheckedThrowable* __exc940) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc940)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc940);
                {
                    
                    //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc940);
                {
                    
                    //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::GrowableMemory<x10_int>* buf58951;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem;
    x10_long offset_58953;
    x10_long src_len58952;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->buf58951);
        buf.write(this->outMem);
        buf.write(this->offset_58953);
        buf.write(this->src_len58952);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::GrowableMemory<x10_int>* that_buf58951 = buf.read<org::scalegraph::util::GrowableMemory<x10_int>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_outMem = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10_long that_offset_58953 = buf.read<x10_long>();
        x10_long that_src_len58952 = buf.read<x10_long>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >(that_buf58951, that_outMem, that_offset_58953, that_src_len58952);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__7(org::scalegraph::util::GrowableMemory<x10_int>* buf58951, org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem, x10_long offset_58953, x10_long src_len58952) : buf58951(buf58951), outMem(outMem), offset_58953(offset_58953), src_len58952(src_len58952) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:443-454";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_937
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_937
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::run(
  x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner,
  x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) {
    
    //#line 299 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 300 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 300 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("start xpregel iteration"));
    }
    
    //#line 302 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_boolean root = (x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                    FMGL(mTeam)->
                                                                                    FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                                                ((x10_int)0)),
                                              ((x10_int)0)));
    
    //#line 303 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = this->FMGL(mIds)->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes();
    
    //#line 304 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx =
      org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::_make(this->
                                                                       FMGL(mTeam),
                                                                     this->
                                                                       FMGL(mIds),
                                                                     this->
                                                                       FMGL(numThreads));
    
    //#line 306 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs =
      org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* >::_make(((x10_long) (this->
                                                                                                                                                  FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(this, ectx))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 308 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> edgeProviderList =
      org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* >::_make(((x10_long) (this->
                                                                                                                   FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(vctxs))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 310 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue =
      org::scalegraph::util::MemoryChunk<TPMGL(A) >::_make(((x10_long) (this->
                                                                          FMGL(numThreads))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 311 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(A)> aggregateBuffer =
      org::scalegraph::util::MemoryChunk<TPMGL(A) >::_make(((x10_long) (root
      ? (this->FMGL(mTeam)->org::scalegraph::util::Team2::size())
      : (((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> statistics =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                       FMGL(STT_MAX__get)()) * (((x10_int)2)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 313 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvStatistics =
      statistics->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
        ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                       FMGL(STT_MAX__get)())), ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                              FMGL(STT_MAX__get)())));
    
    //#line 315 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(ectx)->FMGL(mInEdgesOffset) = x10aux::nullCheck(this->
                                                                        FMGL(mInEdge))->
                                                      FMGL(offsets);
    
    //#line 316 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(ectx)->FMGL(mInEdgesVertex) = x10aux::nullCheck(this->
                                                                        FMGL(mInEdge))->
                                                      FMGL(vertexes);
    
    //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(ectx)->FMGL(mInEdgesMask) = this->FMGL(mInEdgesMask);
    
    //#line 320 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_ulong> vertexActvieBitmap =
      x10aux::nullCheck(this->FMGL(mVertexActive))->org::scalegraph::util::Bitmap::raw();
    
    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<x10_ulong >(
      x10aux::nullCheck(this->FMGL(mVertexShouldBeActive))->org::scalegraph::util::Bitmap::raw(),
      ((x10_long)0ll), vertexActvieBitmap, ((x10_long)0ll),
      vertexActvieBitmap->org::scalegraph::util::MemoryChunk<x10_ulong>::size());
    
    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int i58850min58947 = ((x10_int)0);
    
    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int i58850max58948 = ((x10_int)10000);
    
    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_int i58949;
        for (
             //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i58949 = i58850min58947; ((i58949) <= (i58850max58948));
             
             //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i58949 = ((x10_int) ((i58949) + (((x10_int)1)))))
        {
            
            //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int ss58950 = i58949;
            
            //#line 327 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(ectx)->FMGL(mSuperstep) = ss58950;
            
            //#line 330 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 330 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("vertex processing started"));
            }
            
            //#line 331 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
              numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(vctxs, this, ectx, compute, aggregator, intermedAggregateValue, ss58950))));
            
            //#line 367 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 367 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("vertex processing finished"));
            }
            
            //#line 369 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::deleteMessages();
            
            //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i58817min58930 = ((x10_int)0);
            
            //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i58817max58931 = ((x10_int) ((this->FMGL(numThreads)) - (((x10_int)1))));
            
            //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_int i58932;
                for (
                     //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i58932 = i58817min58930; ((i58932) <= (i58817max58931));
                     
                     //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i58932 = ((x10_int) ((i58932) + (((x10_int)1)))))
                {
                    
                    //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int th58933 = i58932;
                    
                    //#line 373 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(ectx)->template sqweezeMessage<TPMGL(V),
                    TPMGL(E), TPMGL(A) >(vctxs->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>::__apply(
                                           th58933));
                }
            }
            
            //#line 378 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 378 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("update out edge"));
            }
            
            //#line 379 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::xpregel::EdgeProvider<void>::template updateOutEdge<TPMGL(E) >(
              this->FMGL(mOutEdge), edgeProviderList, this->
                                                        FMGL(mIds));
            
            //#line 382 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 382 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("aggregate..."));
            }
            
            //#line 383 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            TPMGL(A) aggVal58945 = (!x10aux::struct_equals(aggregator,
                                                           X10_NULL))
              ? (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::template computeAggregate<TPMGL(A) >(
                   this->FMGL(mTeam), intermedAggregateValue,
                   aggregateBuffer, aggregator)) : (x10aux::zeroValue<TPMGL(A) >());
            
            //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i58833domain58934 = vctxs->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>::range();
            
            //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i58833min58935 = i58833domain58934->
                                        FMGL(min);
            
            //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i58833max58936 = i58833domain58934->
                                        FMGL(max);
            
            //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_long i58937;
                for (
                     //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i58937 = i58833min58935; ((i58937) <= (i58833max58936));
                     
                     //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i58937 = ((x10_long) ((i58937) + (((x10_long)1ll)))))
                {
                    
                    //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i58938 = i58937;
                    
                    //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(vctxs->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*>::__apply(
                                        i58938))->FMGL(mAggregatedValue) =
                      aggVal58945;
                }
            }
            
            //#line 388 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            statistics->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                FMGL(STT_END_COUNT__get)(), x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>::__apply(x10aux::nullCheck(end), 
                ss58950, aggVal58945) ? (((x10_long)1ll))
                : (((x10_long)0ll)));
            
            //#line 391 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_boolean terminate58946 = org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::template gatherInformation<TPMGL(M) >(
                                           this->FMGL(mTeam),
                                           ectx, statistics,
                                           this->FMGL(mEnableStatistics),
                                           combiner);
            
            //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->x10::lang::Place::id(),
                                       ((x10_int)0))) && (!x10aux::struct_equals(this->
                                                                                   FMGL(mLogPrinter),
                                                                                 X10_NULL)))
            {
                
                //#line 394 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_END_COUNT: "), recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                          org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                                            FMGL(STT_END_COUNT__get)()))));
                
                //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_ACTIVE_VERTEX: "), recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                              org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                                                FMGL(STT_ACTIVE_VERTEX__get)()))));
                
                //#line 396 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_RAW_MESSAGE: "), recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                            org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                                              FMGL(STT_RAW_MESSAGE__get)()))));
                
                //#line 397 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_VERTEX_MESSAGE: "), recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                               org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                                                 FMGL(STT_VERTEX_MESSAGE__get)()))));
                
                //#line 398 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (this->FMGL(mEnableStatistics) && (x10aux::struct_equals(terminate58946,
                                                                            false)))
                {
                    
                    //#line 399 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_COMBINED_MESSAGE: "), recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                                     org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                                                       FMGL(STT_COMBINED_MESSAGE__get)()))));
                    
                    //#line 400 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_VERTEX_TRANSFERED_MESSAGE: "), recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                                              org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                                                                FMGL(STT_VERTEX_TRANSFERED_MESSAGE__get)()))));
                }
                
            }
            
            //#line 404 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if (terminate58946) {
                
                //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(mLastAggVal) = (x10aux::class_cast_unchecked<x10::lang::Any*>(aggVal58945));
                
                //#line 406 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(mInEdgesMask) = x10aux::nullCheck(ectx)->
                                             FMGL(mInEdgesMask);
                
                //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::del();
                
                //#line 408 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
                return;
            }
            
            //#line 412 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::exchangeMessages(
              ((recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                  org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                    FMGL(STT_COMBINED_MESSAGE__get)())) > (((x10_long)0ll))),
              ((recvStatistics->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                  org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                    FMGL(STT_VERTEX_MESSAGE__get)())) > (((x10_long)0ll))));
        }
    }
    
    //#line 417 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(x10aux::makeStringLit("Superstep limit exceeded. # of supterstep > 10000"))));
}
#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_937
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_939
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_939
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)>
org::scalegraph::util::MemoryChunk<TPMGL(T)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::stealOutput(
  x10_int index) {
    
    //#line 426 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if (((index) > (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                      FMGL(MAX_OUTPUT_NUMBER__get)()))) {
        
        //#line 427 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make()));
    }
    
    //#line 432 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long)0ll);
    
    //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int i58866min58959 = ((x10_int)0);
    
    //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int i58866max58960 = ((x10_int) ((this->FMGL(numThreads)) - (((x10_int)1))));
    
    //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_int i58961;
        for (
             //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i58961 = i58866min58959; ((i58961) <= (i58866max58960));
             
             //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i58961 = ((x10_int) ((i58961) + (((x10_int)1)))))
        {
            
            //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i58962 = i58961;
            
            //#line 434 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
            length = ((x10_long) ((length) + (x10aux::nullCheck(this->
                                                                  FMGL(mOutput)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>::__apply(
                                                                  ((x10_int) ((((x10_int) ((i58962) * (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                         FMGL(MAX_OUTPUT_NUMBER__get)())))) + (index)))))->org::scalegraph::util::GrowableMemory<x10_int>::size())));
        }
    }
    
    //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(length, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 438 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long offset = ((x10_long)0ll);
    {
        
        //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var63 = x10::lang::Runtime::startFinish();
        {
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable58967 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
            try {
                
                //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_int i58882min58955 = ((x10_int)0);
                        
                        //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_int i58882max58956 = ((x10_int) ((this->
                                                                FMGL(numThreads)) - (((x10_int)1))));
                        
                        //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                        {
                            x10_int i58957;
                            for (
                                 //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                 i58957 = i58882min58955;
                                 ((i58957) <= (i58882max58956));
                                 
                                 //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                 i58957 = ((x10_int) ((i58957) + (((x10_int)1)))))
                            {
                                
                                //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_int i58958 = i58957;
                                
                                //#line 440 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::GrowableMemory<x10_int>* buf58951 =
                                  this->FMGL(mOutput)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>::__apply(
                                    ((x10_int) ((((x10_int) ((i58958) * (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                           FMGL(MAX_OUTPUT_NUMBER__get)())))) + (index))));
                                
                                //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_long src_len58952 = x10aux::nullCheck(buf58951)->org::scalegraph::util::GrowableMemory<x10_int>::size();
                                
                                //#line 442 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_long offset_58953 = offset;
                                
                                //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T)>(buf58951, outMem, offset_58953, src_len58952))));
                                
                                //#line 455 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                offset = ((x10_long) ((offset) + (src_len58952)));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc941) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc941);
                        {
                            
                            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc942) {
                if (true) {
                    x10::lang::CheckedThrowable* formal58968 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc942);
                    {
                        
                        //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable58967 = formal58968;
                    }
                } else
                throw;
            }
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable58967)))
            {
                
                //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable58967))
                {
                    
                    //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable58967));
                }
                
            }
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var63);
            }
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable58967)))
            {
                
                //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable58967)))
                {
                    
                    //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable58967));
                }
                
            }
            
        }
    }
    
    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return outMem;
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_939
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
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<x10_long> > UCCMessages =
          mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::messageBuffer(
            tid);
        
        //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offset =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(offsets);
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> id =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(vertexes);
        
        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i58733domain58903 = r;
        
        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58733min58904 = i58733domain58903->FMGL(min);
        
        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58733max58905 = i58733domain58903->FMGL(max);
        
        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i58906;
            for (
                 //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i58906 = i58733min58904; ((i58906) <= (i58733max58905));
                 
                 //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i58906 = ((x10_long) ((i58906) + (((x10_long)1ll)))))
            {
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid58907 = i58906;
                
                //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid_58902 = StoD->org::scalegraph::graph::id::OnedR__StoD::__apply(
                                       vid58907);
                
                //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i58717min58898 = offset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                            vid58907);
                
                //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i58717max58899 = ((x10_long) ((offset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                          ((x10_long) ((vid58907) + (((x10_long) (((x10_int)1)))))))) - (((x10_long) (((x10_int)1))))));
                
                //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                {
                    x10_long i58900;
                    for (
                         //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                         i58900 = i58717min58898; ((i58900) <= (i58717max58899));
                         
                         //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                         i58900 = ((x10_long) ((i58900) + (((x10_long)1ll)))))
                    {
                        
                        //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_long i58901 = i58900;
                        
                        //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::MessageBuffer<x10_long> mesBuf58897 =
                          UCCMessages->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<x10_long> >::__apply(
                            mesComm->FMGL(mDtoV)->org::scalegraph::graph::id::OnedR__DtoV::r(
                              id->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                i58901)));
                        
                        //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf58897->FMGL(messages))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          vid_58902);
                        
                        //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf58897->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          mesComm->FMGL(mDtoS)->org::scalegraph::graph::id::OnedR__DtoS::__apply(
                            id->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                              i58901)));
                    }
                }
                
            }
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
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::MessageCommunicator<x10_long>* that_mesComm = buf.read<org::scalegraph::xpregel::MessageCommunicator<x10_long>*>();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::graph::id::OnedR__StoD that_StoD = buf.read<org::scalegraph::graph::id::OnedR__StoD>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >(that_mesComm, that_saved_this, that_StoD);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__1(org::scalegraph::xpregel::MessageCommunicator<x10_long>* mesComm, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::graph::id::OnedR__StoD StoD) : mesComm(mesComm), saved_this(saved_this), StoD(StoD) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:117-132";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > > UCCMessages =
          mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::messageBuffer(
            tid);
        
        //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offset =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(offsets);
        
        //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> id =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(vertexes);
        
        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(E)> value =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(value);
        
        //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i58766domain58914 = r;
        
        //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58766min58915 = i58766domain58914->FMGL(min);
        
        //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58766max58916 = i58766domain58914->FMGL(max);
        
        //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i58917;
            for (
                 //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i58917 = i58766min58915; ((i58917) <= (i58766max58916));
                 
                 //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i58917 = ((x10_long) ((i58917) + (((x10_long)1ll)))))
            {
                
                //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid58918 = i58917;
                
                //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid_58913 = StoD->org::scalegraph::graph::id::OnedR__StoD::__apply(
                                       vid58918);
                
                //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i58750min58909 = offset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                            vid58918);
                
                //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i58750max58910 = ((x10_long) ((offset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                          ((x10_long) ((vid58918) + (((x10_long) (((x10_int)1)))))))) - (((x10_long) (((x10_int)1))))));
                
                //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                {
                    x10_long i58911;
                    for (
                         //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                         i58911 = i58750min58909; ((i58911) <= (i58750max58910));
                         
                         //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                         i58911 = ((x10_long) ((i58911) + (((x10_long)1ll)))))
                    {
                        
                        //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_long i58912 = i58911;
                        
                        //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > mesBuf58908 =
                          UCCMessages->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > >::__apply(
                            mesComm->FMGL(mDtoV)->org::scalegraph::graph::id::OnedR__DtoV::r(
                              id->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                i58912)));
                        
                        //#line 171 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf58908->FMGL(messages))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::add(
                          org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_make(vid_58913,
                                                                                          value->org::scalegraph::util::MemoryChunk<TPMGL(E)>::__apply(
                                                                                            i58912)));
                        
                        //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf58908->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          mesComm->FMGL(mDtoS)->org::scalegraph::graph::id::OnedR__DtoS::__apply(
                            id->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                              i58912)));
                    }
                }
                
            }
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
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* that_mesComm = buf.read<org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::graph::id::OnedR__StoD that_StoD = buf.read<org::scalegraph::graph::id::OnedR__StoD>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >(that_mesComm, that_saved_this, that_StoD);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__2(org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::graph::id::OnedR__StoD StoD) : mesComm(mesComm), saved_this(saved_this), StoD(StoD) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:160-176";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i58783domain58919 = r;
        
        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58783min58920 = i58783domain58919->FMGL(min);
        
        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i58783max58921 = i58783domain58919->FMGL(max);
        
        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i58922;
            for (
                 //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i58922 = i58783min58920; ((i58922) <= (i58783max58921));
                 
                 //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i58922 = ((x10_long) ((i58922) + (((x10_long)1ll))))) {
                
                //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i58923 = i58922;
                
                //#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                id->org::scalegraph::util::MemoryChunk<x10_long>::__set(i58923,
                                                                        mesComm->
                                                                          FMGL(mUCRMessages)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::__apply(
                                                                          i58923)->org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::get1());
                
                //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                value->org::scalegraph::util::MemoryChunk<TPMGL(E)>::__set(
                  i58923, mesComm->FMGL(mUCRMessages)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::__apply(
                            i58923)->org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::get2());
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> id;
    org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->id);
        buf.write(this->mesComm);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_id = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* that_mesComm = buf.read<org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_value = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >(that_id, that_mesComm, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__3(org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) : id(id), mesComm(mesComm), value(value) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:188-193";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_xpregel_WorkerPlaceGraph__closure__8 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_xpregel_WorkerPlaceGraph__closure__8> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r_word) {
        
        //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange r = x10::lang::LongRange::_make(((x10_long) ((r_word->
                                                                             FMGL(min)) * (((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                          FMGL(BitsPerWord__get)()))))),
                                                             ((x10_long) ((x10::lang::Math::min(
                                                                             numLocalVertexes,
                                                                             ((x10_long) ((((x10_long) ((r_word->
                                                                                                           FMGL(max)) + (((x10_long) (((x10_int)1))))))) * (((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                                                           FMGL(BitsPerWord__get)()))))))) - (((x10_long) (((x10_int)1)))))));
        
        //#line 285 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::__apply(x10aux::nullCheck(task), 
          tid, r);
    }
    
    // captured environment
    x10_long numLocalVertexes;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalVertexes);
        buf.write(this->task);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__8* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__8>();
        buf.record_reference(storage);
        x10_long that_numLocalVertexes = buf.read<x10_long>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* that_task = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__8* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__8(that_numLocalVertexes, that_task);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__8(x10_long numLocalVertexes, x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task) : numLocalVertexes(numLocalVertexes), task(task) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:282-286";
    }

};

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__8_CLOSURE

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c
 /* private static type XP = org.scalegraph.id.ProfilingID$XPregel; */ 

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           x10::util::Team* team,
                                           org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Empty_c
    ;
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::__fieldInitializers58489();
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int rank_r = x10aux::nullCheck(x10aux::nullCheck(team)->role())->x10::array::Array<x10_int>::__apply(
                       ((x10_int)0));
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mTeam) = org::scalegraph::util::Team2::_make(team);
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mIds) = ids;
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVtoD) = org::scalegraph::graph::id::OnedR__VtoD::_make(ids);
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDtoV) = org::scalegraph::graph::id::OnedR__DtoV::_make(ids);
    
    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDtoS) = org::scalegraph::graph::id::OnedR__DtoS::_make(ids);
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStoD) = org::scalegraph::graph::id::OnedR__StoD::_make(ids,
                                                                       rank_r);
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStoV) = org::scalegraph::graph::id::OnedR__StoV::_make(ids,
                                                                       rank_r);
    
    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numVertexes = this->FMGL(mIds)->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes();
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexValue) = org::scalegraph::util::MemoryChunk<TPMGL(V) >::_make(numVertexes, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexActive) = org::scalegraph::util::Bitmap::_make(numVertexes,
                                                                     true);
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexShouldBeActive) = org::scalegraph::util::Bitmap::_make(numVertexes,
                                                                             true);
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutEdge) = org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_make();
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInEdge) = org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_make();
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutput) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>* >::_make(((x10_long) (((x10_int) ((this->
                                                                                                                                                  FMGL(numThreads)) * (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                                                                                                                         FMGL(MAX_OUTPUT_NUMBER__get)()))))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_make(
                                           x10::util::Team* team,
                                           org::scalegraph::graph::id::IdStruct ids)
{
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>();
    this_->_constructor(team, ids);
    return this_;
}



//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           x10::util::Team* team,
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
      team, edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::ids());
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(offsets) =
      edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::__apply()->
        FMGL(offsets);
    
    //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(vertexes) =
      edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::__apply()->
        FMGL(vertexes);
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(value) =
      org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make(x10aux::nullCheck(this->
                                                                               FMGL(mOutEdge))->
                                                             FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_make(
                                           x10::util::Team* team,
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix)
{
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>();
    this_->_constructor(team, edgeIndexMatrix);
    return this_;
}



//#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdge(
  ) {
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("start to update in edge"));
    }
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageCommunicator<x10_long>* mesComm =
      org::scalegraph::xpregel::MessageCommunicator<x10_long>::_make(this->
                                                                       FMGL(mTeam),
                                                                     this->
                                                                       FMGL(mIds),
                                                                     numThreads);
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = this->FMGL(mIds)->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes();
    
    //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::OnedR__StoD StoD = org::scalegraph::graph::id::OnedR__StoD::_make(this->
                                                                                                    FMGL(mIds),
                                                                                                  x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                                                        FMGL(mTeam)->
                                                                                                                                        FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                                                                                                    ((x10_int)0)));
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("vertex processing start"));
    }
    
    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E)>(mesComm, this, StoD))));
    
    //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("vertex processing finished"));
    }
    
    //#line 136 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::preProcess();
    
    //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::process(
      x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*>(X10_NULL),
      true, false);
    
    //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::exchangeMessages(
      true, false);
    
    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(offsets) =
      mesComm->FMGL(mUCROffset);
    
    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(vertexes) =
      mesComm->FMGL(mUCRMessages);
    
    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCROffset) = org::scalegraph::util::MemoryChunk<void>::template make<x10_long >();
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCRMessages) = org::scalegraph::util::MemoryChunk<void>::template make<x10_long >();
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::del();
    
    //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished to update in edge"));
    }
    
}

//#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdgeWithValue(
  ) {
    
    //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm =
      org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::_make(this->
                                                                                                                        FMGL(mTeam),
                                                                                                                      this->
                                                                                                                        FMGL(mIds),
                                                                                                                      numThreads);
    
    //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = this->FMGL(mIds)->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes();
    
    //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::OnedR__StoD StoD = org::scalegraph::graph::id::OnedR__StoD::_make(this->
                                                                                                    FMGL(mIds),
                                                                                                  x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                                                        FMGL(mTeam)->
                                                                                                                                        FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                                                                                                    ((x10_int)0)));
    
    //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E)>(mesComm, this, StoD))));
    
    //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::preProcess();
    
    //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::process(
      x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >, org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>(X10_NULL),
      true, false);
    
    //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::exchangeMessages(
      true, false);
    
    //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = mesComm->FMGL(mUCRMessages)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::size();
    
    //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> id = org::scalegraph::util::MemoryChunk<x10_long >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> value = org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numEdges) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E)>(id, mesComm, value))));
    
    //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(offsets) =
      mesComm->FMGL(mUCROffset);
    
    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(vertexes) =
      id;
    
    //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(value) =
      value;
    
    //#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCROffset) = org::scalegraph::util::MemoryChunk<void>::template make<x10_long >();
    
    //#line 200 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::del();
}

//#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 289 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 420 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>
  org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::outBuffer(
  x10_long tid) {
    
    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return this->FMGL(mOutput)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>::subpart(
             ((x10_long) ((tid) * (((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                  FMGL(MAX_OUTPUT_NUMBER__get)()))))),
             ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                            FMGL(MAX_OUTPUT_NUMBER__get)())));
    
}

//#line 425 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::org__scalegraph__xpregel__WorkerPlaceGraph____this__org__scalegraph__xpregel__WorkerPlaceGraph(
  ) {
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::__fieldInitializers58489(
  ) {
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexValue) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInEdgesMask) = (x10aux::class_cast_unchecked<org::scalegraph::util::Bitmap*>(X10_NULL));
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numThreads) = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mLastAggVal) = (x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mLogLevel) = ((x10_int)0);
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mLogPrinter) = (x10aux::class_cast_unchecked<x10::io::Printer*>(X10_NULL));
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEnableStatistics) = true;
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
    
}

template<class TPMGL(A)> TPMGL(A) org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::computeAggregate(org::scalegraph::util::Team2 team,
                                                                                                           org::scalegraph::util::MemoryChunk<TPMGL(A)> src,
                                                                                                           org::scalegraph::util::MemoryChunk<TPMGL(A)> buffer,
                                                                                                           x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator)
{
    
    //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_boolean root = (x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(team->
                                                                                    FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                                                ((x10_int)0)),
                                              ((x10_int)0)));
    
    //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    src->org::scalegraph::util::MemoryChunk<TPMGL(A)>::__set(
      ((x10_int)0), x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
        src));
    
    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    team->template gather<TPMGL(A) >(((x10_int)0), src->org::scalegraph::util::MemoryChunk<TPMGL(A)>::subpart(
                                                     ((x10_long) (((x10_int)0))),
                                                     ((x10_long) (((x10_int)1)))),
                                     buffer);
    
    //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if (root) {
        
        //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        buffer->org::scalegraph::util::MemoryChunk<TPMGL(A)>::__set(
          ((x10_int)0), x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
            buffer));
    }
    
    //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    team->template bcast<TPMGL(A) >(((x10_int)0), root ? (buffer->org::scalegraph::util::MemoryChunk<TPMGL(A)>::subpart(
                                                            ((x10_long) (((x10_int)0))),
                                                            ((x10_long) (((x10_int)1)))))
                                      : (buffer), src->org::scalegraph::util::MemoryChunk<TPMGL(A)>::subpart(
                                                    ((x10_long) (((x10_int)0))),
                                                    ((x10_long) (((x10_int)1)))));
    
    //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return src->org::scalegraph::util::MemoryChunk<TPMGL(A)>::__apply(
             ((x10_int)0));
    
}
template<class TPMGL(M)> x10_boolean org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::gatherInformation(org::scalegraph::util::Team2 team,
                                                                                                               org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx,
                                                                                                               org::scalegraph::util::MemoryChunk<x10_long> stt,
                                                                                                               x10_boolean enableStatistics,
                                                                                                               x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner)
{
    
    //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvStt =
      stt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
        ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                       FMGL(STT_MAX__get)())), ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                              FMGL(STT_MAX__get)())));
    
    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id2271 = x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::preProcess();
    
    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numActive = x10aux::nullCheck(id2271)->x10::array::Array<x10_long>::__apply(
                           ((x10_int)0));
    
    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numRawMessages = x10aux::nullCheck(id2271)->x10::array::Array<x10_long>::__apply(
                                ((x10_int)1));
    
    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numVertexMessages = x10aux::nullCheck(id2271)->x10::array::Array<x10_long>::__apply(
                                   ((x10_int)2));
    
    //#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    stt->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
        FMGL(STT_ACTIVE_VERTEX__get)(), numActive);
    
    //#line 243 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    stt->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
        FMGL(STT_RAW_MESSAGE__get)(), numRawMessages);
    
    //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    stt->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
        FMGL(STT_VERTEX_MESSAGE__get)(), numVertexMessages);
    
    //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    team->template allreduce<x10_long >(stt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                          ((x10_long) (((x10_int)0))),
                                          ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                         FMGL(STT_PRE__get)()))),
                                        recvStt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                          ((x10_long) (((x10_int)0))),
                                          ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                         FMGL(STT_PRE__get)()))),
                                        x10::util::Team::
                                          FMGL(ADD__get)());
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if (((recvStt->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
            org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
              FMGL(STT_END_COUNT__get)())) > (((x10_long) (((x10_int)0))))))
    {
        
        //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    //#line 256 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(recvStt->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                 org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                   FMGL(STT_ACTIVE_VERTEX__get)()),
                               ((x10_long)0ll))) && (x10aux::struct_equals(recvStt->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                             org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                                               FMGL(STT_RAW_MESSAGE__get)()),
                                                                           ((x10_long)0ll))) &&
        (x10aux::struct_equals(recvStt->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                 org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                   FMGL(STT_VERTEX_MESSAGE__get)()),
                               ((x10_long)0ll)))) {
        
        //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    //#line 264 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id2272 = x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::process(
                                            combiner, ((recvStt->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                          org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                            FMGL(STT_RAW_MESSAGE__get)())) > (((x10_long) (((x10_int)0))))),
                                            ((recvStt->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                  FMGL(STT_VERTEX_MESSAGE__get)())) > (((x10_long) (((x10_int)0))))));
    
    //#line 264 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numCombinedMessages = x10aux::nullCheck(id2272)->x10::array::Array<x10_long>::__apply(
                                     ((x10_int)0));
    
    //#line 264 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numTransferedVertexMessages = x10aux::nullCheck(id2272)->x10::array::Array<x10_long>::__apply(
                                             ((x10_int)1));
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    stt->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
        FMGL(STT_COMBINED_MESSAGE__get)(), numCombinedMessages);
    
    //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    stt->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
        FMGL(STT_VERTEX_TRANSFERED_MESSAGE__get)(), numTransferedVertexMessages);
    
    //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if (enableStatistics) {
        
        //#line 274 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        team->template allreduce<x10_long >(stt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                              ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                             FMGL(STT_PRE__get)())),
                                              ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                             FMGL(STT_POST__get)()))),
                                            recvStt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                              ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                             FMGL(STT_PRE__get)())),
                                              ((x10_long) (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                                             FMGL(STT_POST__get)()))),
                                            x10::util::Team::
                                              FMGL(ADD__get)());
    }
    
    //#line 277 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return false;
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_NODEPS

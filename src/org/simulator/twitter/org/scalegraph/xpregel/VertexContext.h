#ifndef __ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H
#define __ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_NODEPS
#include <org/scalegraph/xpregel/MessageBuffer.h>
#undef ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageCommunicator;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class EdgeProvider;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__StoD;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__StoV;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__DtoV;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__VtoD;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__DtoS;
} } } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
class Bitmap;
} } } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
template <> class VertexContext<void, void, void, void>;
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*
      FMGL(mWorker);
    
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* FMGL(mCtx);
    
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* FMGL(mEdgeProvider);
    
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >
      FMGL(mUCCMessages);
    
    TPMGL(A) FMGL(mAggregatedValue);
    
    org::scalegraph::util::GrowableMemory<TPMGL(A)>* FMGL(mAggregateValue);
    
    x10_long FMGL(mSrcid);
    
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>
      FMGL(mOut);
    
    x10_long FMGL(mNumActiveVertexes);
    
    x10_long FMGL(mBCSInputCount);
    
    void _constructor(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
                      org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
                      x10_long tid);
    
    static org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* _make(
             org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
             org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
             x10_long tid);
    
    virtual x10_int superstep();
    virtual x10_long id();
    virtual x10_long realId();
    virtual x10_long placeBaseVertexId();
    virtual x10_long realId(x10_long id);
    virtual x10_long dstId(x10_long realId);
    virtual x10_long numberOfVertices();
    virtual TPMGL(V) value();
    virtual void setValue(TPMGL(V) value);
    virtual org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
      outEdges();
    virtual org::scalegraph::util::MemoryChunk<x10_long> outEdgesId(
      );
    virtual org::scalegraph::util::MemoryChunk<TPMGL(E)> outEdgesValue(
      );
    virtual org::scalegraph::util::MemoryChunk<x10_long> inEdgesId(
      );
    virtual org::scalegraph::util::MemoryChunk<TPMGL(E)> inEdgesValue(
      );
    virtual void setOutEdges(org::scalegraph::util::MemoryChunk<x10_long> id,
                             org::scalegraph::util::MemoryChunk<TPMGL(E)> value);
    virtual void clearOutEdges();
    virtual void addOutEdge(x10_long id, TPMGL(E) value);
    virtual void addOutEdges(org::scalegraph::util::MemoryChunk<x10_long> id,
                             org::scalegraph::util::MemoryChunk<TPMGL(E)> value);
    virtual TPMGL(A) aggregatedValue();
    virtual void aggregate(TPMGL(A) value);
    virtual void sendMessage(x10_long id, TPMGL(M) mes);
    virtual void sendMessage(org::scalegraph::util::MemoryChunk<x10_long> id,
                             org::scalegraph::util::MemoryChunk<TPMGL(M)> mes);
    virtual void sendMessageToAllNeighbors(TPMGL(M) mes);
    virtual void voteToHalt();
    virtual void revive();
    virtual void setVertexShouldBeActive(x10_boolean active);
    virtual x10_boolean isHalted();
    template<class TPMGL(T)> void output(TPMGL(T) value);
    template<class TPMGL(T)> void output(x10_int index, TPMGL(T) value);
    virtual org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*
      org__scalegraph__xpregel__VertexContext____this__org__scalegraph__xpregel__VertexContext(
      );
    virtual void __fieldInitializers40792();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::RuntimeType org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::rtt;
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::VertexContext<void, void, void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[4] = { x10aux::getRTT<TPMGL(V)>(), x10aux::getRTT<TPMGL(E)>(), x10aux::getRTT<TPMGL(M)>(), x10aux::getRTT<TPMGL(A)>()};
    x10aux::RuntimeType::Variance variances[4] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.VertexContext";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 4, params, variances);
}

template <> class VertexContext<void, void, void, void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
class VertexContext;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/xpregel/MessageBuffer.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>
#include <org/scalegraph/xpregel/MessageCommunicator.h>
#include <org/scalegraph/xpregel/EdgeProvider.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/graph/id/OnedR__StoD.h>
#include <org/scalegraph/graph/id/OnedR__StoV.h>
#include <org/scalegraph/graph/id/OnedR__DtoV.h>
#include <org/scalegraph/graph/id/OnedR__VtoD.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <org/scalegraph/graph/id/OnedR__DtoS.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/Bitmap.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_72
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_72
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> template<class TPMGL(T)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::output(
  TPMGL(T) value) {
    
    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    this->template output<TPMGL(T) >(((x10_int)0), value);
}
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_72
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_73
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_73
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
template<class TPMGL(T)> void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::output(
  x10_int index, TPMGL(T) value) {
    
    //#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((index) < (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::
                                          FMGL(MAX_OUTPUT_NUMBER__get)())));
    #endif//NO_ASSERTIONS
    
    //#line 243 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* outbuf =
      reinterpret_cast<org::scalegraph::util::GrowableMemory<TPMGL(T) >*>(this->
                                                                            FMGL(mOut)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>::__apply(
                                                                            index));
    
    //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(outbuf)->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
      value);
}
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_73
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/VertexContext.h>


//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_constructor(
                                                                           org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
                                                                           org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
                                                                           x10_long tid) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": polyglot.ast.Empty_c
    ;
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.AssignPropertyCall_c
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::__fieldInitializers40792();
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mWorker) = worker;
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mCtx) = ctx;
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeProvider) = org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_make(x10aux::nullCheck(worker)->
                                                                                          FMGL(mOutEdge),
                                                                                        x10aux::nullCheck(worker)->
                                                                                          FMGL(mInEdge));
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mUCCMessages) = x10aux::nullCheck(this->FMGL(mCtx))->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::messageBuffer(
                                 tid);
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOut) = x10aux::nullCheck(worker)->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::outBuffer(
                         tid);
}
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_make(
  org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
  org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
  x10_long tid) {
    org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)> >(), 0, sizeof(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>))) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>();
    this_->_constructor(worker, ctx, tid);
    return this_;
}



//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_int org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::superstep(
  ) {
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mSuperstep);
    
}

//#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::id(
  ) {
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mStoD)->org::scalegraph::graph::id::OnedR__StoD::__apply(
             this->FMGL(mSrcid));
    
}

//#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::realId(
  ) {
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mStoV)->org::scalegraph::graph::id::OnedR__StoV::__apply(
             this->FMGL(mSrcid));
    
}

//#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::placeBaseVertexId(
  ) {
    
    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mStoD)->org::scalegraph::graph::id::OnedR__StoD::__apply(
             ((x10_long)0ll));
    
}

//#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::realId(
  x10_long id) {
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mDtoV)->org::scalegraph::graph::id::OnedR__DtoV::__apply(
             id);
    
}

//#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::dstId(
  x10_long realId) {
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mVtoD)->org::scalegraph::graph::id::OnedR__VtoD::__apply(
             realId);
    
}

//#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::numberOfVertices(
  ) {
    
    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mIds)->org::scalegraph::graph::id::IdStruct::numberOfGlobalVertexes();
    
}

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
TPMGL(V) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::value(
  ) {
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mVertexValue)->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__apply(
             this->FMGL(mSrcid));
    
}

//#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::setValue(
  TPMGL(V) value) {
    
    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mVertexValue)->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__set(
      this->FMGL(mSrcid), value);
}

//#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
  org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdges(
  ) {
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->outEdges(
             this->FMGL(mSrcid));
    
}

//#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdgesId(
  ) {
    
    //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->outEdgesId(
             this->FMGL(mSrcid));
    
}

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<TPMGL(E)> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdgesValue(
  ) {
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->outEdgesValue(
             this->FMGL(mSrcid));
    
}

//#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::inEdgesId(
  ) {
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->inEdgesId(
             this->FMGL(mSrcid));
    
}

//#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<TPMGL(E)> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::inEdgesValue(
  ) {
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->inEdgesValue(
             this->FMGL(mSrcid));
    
}

//#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::setOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->setOutEdges(
      id, value);
}

//#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::clearOutEdges(
  ) {
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->clearOutEdges();
}

//#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::addOutEdge(
  x10_long id, TPMGL(E) value) {
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->addOutEdge(
      id, value);
}

//#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::addOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->addOutEdges(
      id, value);
}

//#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
TPMGL(A) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::aggregatedValue(
  ) {
    
    //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return this->FMGL(mAggregatedValue);
    
}

//#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::aggregate(
  TPMGL(A) value) {
    
    //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mAggregateValue))->org::scalegraph::util::GrowableMemory<TPMGL(A)>::add(
      value);
}

//#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessage(
  x10_long id, TPMGL(M) mes) {
    
    //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10_int dstPlace = x10aux::nullCheck(this->FMGL(mCtx))->
                         FMGL(mDtoV)->org::scalegraph::graph::id::OnedR__DtoV::r(
                         id);
    
    //#line 171 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10_long srcId = x10aux::nullCheck(this->FMGL(mCtx))->
                       FMGL(mDtoS)->org::scalegraph::graph::id::OnedR__DtoS::__apply(
                       id);
    
    //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> mesBuf =
      this->FMGL(mUCCMessages)->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >::__apply(
        dstPlace);
    
    //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(mesBuf->FMGL(messages))->org::scalegraph::util::GrowableMemory<TPMGL(M)>::add(
      mes);
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(mesBuf->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
      srcId);
}

//#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessage(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(M)> mes) {
    
    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i40824domain40845 = id->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10_long i40824min40846 = i40824domain40845->FMGL(min);
    
    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10_long i40824max40847 = i40824domain40845->FMGL(max);
    
    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": polyglot.ast.For_c
    {
        x10_long i40848;
        for (
             //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
             i40848 = i40824min40846; ((i40848) <= (i40824max40847));
             
             //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10LocalAssign_c
             i40848 = ((x10_long) ((i40848) + (((x10_long)1ll)))))
        {
            
            //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            x10_long i40849 = i40848;
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            x10_int dstPlace40842 = x10aux::nullCheck(this->
                                                        FMGL(mCtx))->
                                      FMGL(mDtoV)->org::scalegraph::graph::id::OnedR__DtoV::r(
                                      id->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i40849));
            
            //#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            x10_long srcId40843 = x10aux::nullCheck(this->
                                                      FMGL(mCtx))->
                                    FMGL(mDtoS)->org::scalegraph::graph::id::OnedR__DtoS::__apply(
                                    id->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i40849));
            
            //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> mesBuf40844 =
              this->FMGL(mUCCMessages)->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >::__apply(
                dstPlace40842);
            
            //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(mesBuf40844->FMGL(messages))->org::scalegraph::util::GrowableMemory<TPMGL(M)>::add(
              mes->org::scalegraph::util::MemoryChunk<TPMGL(M)>::__apply(
                i40849));
            
            //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(mesBuf40844->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
              srcId40843);
        }
    }
    
}

//#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessageToAllNeighbors(
  TPMGL(M) mes) {
    
    //#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* x40850 =
      this;
    
    //#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": polyglot.ast.Empty_c
    ;
    
    //#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x40850)->FMGL(mBCSInputCount) = ((x10_long) ((x10aux::nullCheck(x40850)->
                                                                      FMGL(mBCSInputCount)) + (((x10_long)1ll))));
    
    //#line 200 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mCtx))->
                        FMGL(mBCCHasMessage))->org::scalegraph::util::Bitmap::set(
      this->FMGL(mSrcid));
    
    //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mBCCMessages)->org::scalegraph::util::MemoryChunk<TPMGL(M)>::__set(
      this->FMGL(mSrcid), mes);
}

//#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::voteToHalt(
  ) {
    
    //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorker))->
                        FMGL(mVertexActive))->org::scalegraph::util::Bitmap::unset(
      this->FMGL(mSrcid));
}

//#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::revive(
  ) {
    
    //#line 215 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorker))->
                        FMGL(mVertexActive))->org::scalegraph::util::Bitmap::set(
      this->FMGL(mSrcid));
}

//#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::setVertexShouldBeActive(
  x10_boolean active) {
    
    //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorker))->
                        FMGL(mVertexShouldBeActive))->org::scalegraph::util::Bitmap::__set(
      this->FMGL(mSrcid), active);
}

//#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_boolean org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::isHalted(
  ) {
    
    //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorker))->
                               FMGL(mVertexActive))->org::scalegraph::util::Bitmap::__apply(
             this->FMGL(mSrcid));
    
}

//#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c

//#line 240 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*
  org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::org__scalegraph__xpregel__VertexContext____this__org__scalegraph__xpregel__VertexContext(
  ) {
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::__fieldInitializers40792(
  ) {
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mAggregatedValue) = x10aux::zeroValue<TPMGL(A) >();
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mAggregateValue) = org::scalegraph::util::GrowableMemory<TPMGL(A)>::_make();
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mSrcid) = ((x10_long)0ll);
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mNumActiveVertexes) = ((x10_long)0ll);
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mBCSInputCount) = ((x10_long)0ll);
}
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mWorker));
    buf.write(this->FMGL(mCtx));
    buf.write(this->FMGL(mEdgeProvider));
    buf.write(this->FMGL(mUCCMessages));
    buf.write(this->FMGL(mAggregatedValue));
    buf.write(this->FMGL(mAggregateValue));
    buf.write(this->FMGL(mSrcid));
    buf.write(this->FMGL(mOut));
    buf.write(this->FMGL(mNumActiveVertexes));
    buf.write(this->FMGL(mBCSInputCount));
    
}

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10::lang::Reference* org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)> >(), 0, sizeof(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>))) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mWorker) = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
    FMGL(mCtx) = buf.read<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>*>();
    FMGL(mEdgeProvider) = buf.read<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>();
    FMGL(mUCCMessages) = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> > >();
    FMGL(mAggregatedValue) = buf.read<TPMGL(A)>();
    FMGL(mAggregateValue) = buf.read<org::scalegraph::util::GrowableMemory<TPMGL(A)>*>();
    FMGL(mSrcid) = buf.read<x10_long>();
    FMGL(mOut) = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> >();
    FMGL(mNumActiveVertexes) = buf.read<x10_long>();
    FMGL(mBCSInputCount) = buf.read<x10_long>();
}

#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_NODEPS

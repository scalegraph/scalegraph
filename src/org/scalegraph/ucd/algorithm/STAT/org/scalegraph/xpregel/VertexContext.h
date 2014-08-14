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
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
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
namespace x10 { namespace lang { 
class Boolean;
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
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__DtoS;
} } } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace org { namespace scalegraph { namespace util { 
class Bitmap;
} } } 
namespace x10 { namespace lang { 
class ULong;
} } 
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
    
    void _constructor();
    
    static org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* _make(
             );
    
    void _constructor(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
                      org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
                      x10_long tid, org::scalegraph::util::MemoryChunk<x10_long> reqOff,
                      org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
                      x10_long startSrcid);
    
    static org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* _make(
             org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
             org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
             x10_long tid, org::scalegraph::util::MemoryChunk<x10_long> reqOff,
             org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
             x10_long startSrcid);
    
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
    virtual void removeOutEdge(x10_long id);
    virtual void removeOutEdges(org::scalegraph::util::MemoryChunk<x10_long> id);
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
    virtual void __fieldInitializers51698();
    
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
#include <org/scalegraph/util/MemoryChunkData.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <org/scalegraph/graph/id/OnedR__StoD.h>
#include <org/scalegraph/graph/id/OnedR__StoV.h>
#include <org/scalegraph/graph/id/OnedR__DtoV.h>
#include <org/scalegraph/graph/id/OnedR__VtoD.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/graph/id/OnedR__DtoS.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/Bitmap.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_78
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_78
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> template<class TPMGL(T)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::output(
  TPMGL(T) value) {
    
    //#line 280 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    this->template output<TPMGL(T) >(((x10_int)0), value);
}
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_78
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_79
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_79
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
template<class TPMGL(T)> void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::output(
  x10_int index, TPMGL(T) value) {
    
    //#line 289 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((index) < (((x10_int)8))));
    #endif//NO_ASSERTIONS
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* outbuf =
      reinterpret_cast<org::scalegraph::util::GrowableMemory<TPMGL(T) >*>((__extension__ ({
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> this80229 =
          this->FMGL(mOut);
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index80228 = index;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_int>* ret80230;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this80229->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index80228) < (((x10_int)0))) || ((((x10_long) (index80228))) >= (this80229->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80228), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret80230 = (this80229->FMGL(data))[index80228];
        ret80230;
    }))
    );
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(outbuf)->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
      value);
}
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_output_79
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_VERTEXCONTEXT_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/VertexContext.h>


//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10FieldDecl_c

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_constructor(
                                                                           ) {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.AssignPropertyCall_c
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::__fieldInitializers51698();
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mWorker) = (x10aux::class_cast_unchecked<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>(X10_NULL));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mCtx) = (x10aux::class_cast_unchecked<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>*>(X10_NULL));
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeProvider) = (x10aux::class_cast_unchecked<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>(X10_NULL));
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mUCCMessages) = (__extension__ ({
        (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> > alloc76849 =
               org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc76849->FMGL(data) = org::scalegraph::util::MCData_Impl<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc76849;
        }))
        ;
    }))
    ;
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOut) = (__extension__ ({
        (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> alloc76851 =
               org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc76851->FMGL(data) = org::scalegraph::util::MCData_Impl<org::scalegraph::util::GrowableMemory<x10_int>* >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc76851;
        }))
        ;
    }))
    ;
}
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_make(
  ) {
    org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)> >(), 0, sizeof(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>))) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>();
    this_->_constructor();
    return this_;
}



//#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_constructor(
  org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
  org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
  x10_long tid, org::scalegraph::util::MemoryChunk<x10_long> reqOff,
  org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
  x10_long startSrcid) {
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.AssignPropertyCall_c
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::__fieldInitializers51698();
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mWorker) = worker;
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mCtx) = ctx;
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeProvider) = (__extension__ ({
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* alloc51713 =
           ((new (memset(x10aux::alloc<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>))) org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>()))
        ;
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10ConstructorCall_c
        (alloc51713)->::org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_constructor(
          x10aux::nullCheck(worker)->FMGL(mOutEdge), x10aux::nullCheck(worker)->
                                                       FMGL(mInEdge),
          reqOff, req, startSrcid);
        alloc51713;
    }))
    ;
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mUCCMessages) = x10aux::nullCheck(this->FMGL(mCtx))->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::messageBuffer(
                                 tid);
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOut) = x10aux::nullCheck(worker)->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::outBuffer(
                         tid);
}
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_make(
  org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
  org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ctx,
  x10_long tid, org::scalegraph::util::MemoryChunk<x10_long> reqOff,
  org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
  x10_long startSrcid) {
    org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)> >(), 0, sizeof(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>))) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>();
    this_->_constructor(worker, ctx, tid, reqOff, req, startSrcid);
    return this_;
}



//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_int org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::superstep(
  ) {
    
    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mSuperstep);
    
}

//#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::id(
  ) {
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD this80170 =
          x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mStoD);
        
        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_long id80169 = this->FMGL(mSrcid);
        ((x10_long) ((id80169) | (this80170->FMGL(rshifted))));
    }))
    ;
    
}

//#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::realId(
  ) {
    
    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mStoV)->org::scalegraph::graph::id::OnedR__StoV::__apply(
             this->FMGL(mSrcid));
    
}

//#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::placeBaseVertexId(
  ) {
    
    //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD this80172 =
          x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mStoD);
        
        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": polyglot.ast.Empty_c
        ;
        ((x10_long) ((((x10_long)0ll)) | (this80172->FMGL(rshifted))));
    }))
    ;
    
}

//#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::realId(
  x10_long id) {
    
    //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mDtoV)->org::scalegraph::graph::id::OnedR__DtoV::__apply(
             id);
    
}

//#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::dstId(
  x10_long realId) {
    
    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mVtoD)->org::scalegraph::graph::id::OnedR__VtoD::__apply(
             realId);
    
}

//#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_long org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::numberOfVertices(
  ) {
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this80173 = x10aux::nullCheck(this->
                                                                             FMGL(mWorker))->
                                                           FMGL(mIds);
        this80173->FMGL(numberOfGlobalVertexes);
    }))
    ;
    
}

//#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
TPMGL(V) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::value(
  ) {
    
    //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(V)> this80175 =
          x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mVertexValue);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index80174 = this->FMGL(mSrcid);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(V) ret80176;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this80175->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index80174) < (((x10_long) (((x10_int)0))))) ||
                ((index80174) >= (this80175->FMGL(data)->
                                    FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80174), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret80176 = (this80175->FMGL(data))[index80174];
        ret80176;
    }))
    ;
    
}

//#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::setValue(
  TPMGL(V) value) {
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(V)> this80233 =
      x10aux::nullCheck(this->FMGL(mWorker))->FMGL(mVertexValue);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index80234 = this->FMGL(mSrcid);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(V) value80235 = value;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(V) ret80236;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((this80233->FMGL(data)).isValid())) {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index80234) < (((x10_long) (((x10_int)0))))) ||
            ((index80234) >= (this80233->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80234), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (this80233->FMGL(data)).set(index80234, value80235);
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret80236 = value80235;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret80236;
}

//#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
  org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdges(
  ) {
    
    //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->outEdges(
             this->FMGL(mSrcid));
    
}

//#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdgesId(
  ) {
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->outEdgesId(
             this->FMGL(mSrcid));
    
}

//#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<TPMGL(E)> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdgesValue(
  ) {
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->outEdgesValue(
             this->FMGL(mSrcid));
    
}

//#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::inEdgesId(
  ) {
    
    //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->inEdgesId(
             this->FMGL(mSrcid));
    
}

//#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::util::MemoryChunk<TPMGL(E)> org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::inEdgesValue(
  ) {
    
    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mEdgeProvider))->inEdgesValue(
             this->FMGL(mSrcid));
    
}

//#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::setOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->setOutEdges(
      this->FMGL(mSrcid), id, value);
}

//#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::clearOutEdges(
  ) {
    
    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->clearOutEdges(
      this->FMGL(mSrcid));
}

//#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::removeOutEdge(
  x10_long id) {
    
    //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->removeOutEdge(
      id);
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::removeOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id) {
    
    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->removeOutEdges(
      id);
}

//#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::addOutEdge(
  x10_long id, TPMGL(E) value) {
    
    //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->addOutEdge(
      id, value);
}

//#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::addOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeProvider))->addOutEdges(
      id, value);
}

//#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
TPMGL(A) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::aggregatedValue(
  ) {
    
    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return this->FMGL(mAggregatedValue);
    
}

//#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::aggregate(
  TPMGL(A) value) {
    
    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mAggregateValue))->org::scalegraph::util::GrowableMemory<TPMGL(A)>::add(
      value);
}

//#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessage(
  x10_long id, TPMGL(M) mes) {
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10_int dstPlace = (__extension__ ({
        
        //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoV this80184 =
          x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mDtoV);
        
        //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_long id80183 = id;
        ((x10_int) (((x10_long) ((id80183) >> (0x3f & (this80184->
                                                         FMGL(lgl)))))));
    }))
    ;
    
    //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10_long srcId = (__extension__ ({
        
        //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoS this80186 =
          x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mDtoS);
        
        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_long id80185 = id;
        ((x10_long) ((id80185) & (this80186->FMGL(lmask))));
    }))
    ;
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> mesBuf =
      (__extension__ ({
        
        //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> > this80188 =
          this->FMGL(mUCCMessages);
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index80187 = dstPlace;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> ret80189;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this80188->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index80187) < (((x10_int)0))) || ((((x10_long) (index80187))) >= (this80188->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80187), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret80189 = (this80188->FMGL(data))[index80187];
        ret80189;
    }))
    ;
    
    //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(mesBuf->FMGL(messages))->org::scalegraph::util::GrowableMemory<TPMGL(M)>::add(
      mes);
    
    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(mesBuf->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
      srcId);
}

//#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessage(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(M)> mes) {
    
    //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i51716domain80253 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((id->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    x10_long i51716max80254 = i51716domain80253->FMGL(max);
    
    //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": polyglot.ast.For_c
    {
        x10_long i80255;
        for (
             //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
             i80255 = ((x10_long)0ll); ((i80255) <= (i51716max80254));
             
             //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10LocalAssign_c
             i80255 = ((x10_long) ((i80255) + (((x10_long)1ll)))))
        {
            
            //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            x10_long i80256 = i80255;
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            x10_int dstPlace80237 = (__extension__ ({
                
                //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::OnedR__DtoV this80238 =
                  x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mDtoV);
                
                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                x10_long id80239 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index80240 = i80256;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret80241;
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
                        if (((index80240) < (((x10_long) (((x10_int)0))))) ||
                            ((index80240) >= (id->FMGL(data)->
                                                FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80240), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret80241 = (id->FMGL(data))[index80240];
                    ret80241;
                }))
                ;
                ((x10_int) (((x10_long) ((id80239) >> (0x3f & (this80238->
                                                                 FMGL(lgl)))))));
            }))
            ;
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            x10_long srcId80242 = (__extension__ ({
                
                //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::OnedR__DtoS this80243 =
                  x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mDtoS);
                
                //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                x10_long id80244 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index80245 = i80256;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret80246;
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
                        if (((index80245) < (((x10_long) (((x10_int)0))))) ||
                            ((index80245) >= (id->FMGL(data)->
                                                FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80245), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret80246 = (id->FMGL(data))[index80245];
                    ret80246;
                }))
                ;
                ((x10_long) ((id80244) & (this80243->FMGL(lmask))));
            }))
            ;
            
            //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> mesBuf80247 =
              (__extension__ ({
                
                //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> > this80248 =
                  this->FMGL(mUCCMessages);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index80249 = dstPlace80237;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> ret80250;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this80248->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index80249) < (((x10_int)0))) ||
                        ((((x10_long) (index80249))) >= (this80248->
                                                           FMGL(data)->
                                                           FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80249), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret80250 = (this80248->FMGL(data))[index80249];
                ret80250;
            }))
            ;
            
            //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(mesBuf80247->FMGL(messages))->org::scalegraph::util::GrowableMemory<TPMGL(M)>::add(
              (__extension__ ({
                  
                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  x10_long index80251 = i80256;
                  
                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  TPMGL(M) ret80252;
                  {
                      
                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (!((mes->FMGL(data)).isValid()))
                      {
                          
                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                          }
                          
                      }
                      
                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (((index80251) < (((x10_long) (((x10_int)0))))) ||
                          ((index80251) >= (mes->FMGL(data)->
                                              FMGL(size))))
                      {
                          
                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80251), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                          }
                          
                      }
                      
                  }
                  
                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                  ret80252 = (mes->FMGL(data))[index80251];
                  ret80252;
              }))
              );
            
            //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(mesBuf80247->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
              srcId80242);
        }
    }
    
}

//#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessageToAllNeighbors(
  TPMGL(M) mes) {
    
    //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* x80257 =
      this;
    
    //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x80257)->FMGL(mBCSInputCount) = ((x10_long) ((x10aux::nullCheck(x80257)->
                                                                      FMGL(mBCSInputCount)) + (((x10_long)1ll))));
    
    //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mCtx))->
                        FMGL(mBCCHasMessage))->org::scalegraph::util::Bitmap::set(
      this->FMGL(mSrcid));
    
    //#line 248 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(M)> this80258 =
      x10aux::nullCheck(this->FMGL(mCtx))->FMGL(mBCCMessages);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index80259 = this->FMGL(mSrcid);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(M) value80260 = mes;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(M) ret80261;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((this80258->FMGL(data)).isValid())) {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index80259) < (((x10_long) (((x10_int)0))))) ||
            ((index80259) >= (this80258->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index80259), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (this80258->FMGL(data)).set(index80259, value80260);
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret80261 = value80260;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret80261;
}

//#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::voteToHalt(
  ) {
    
    //#line 255 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorker))->
                        FMGL(mVertexActive))->org::scalegraph::util::Bitmap::unset(
      this->FMGL(mSrcid));
}

//#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::revive(
  ) {
    
    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorker))->
                        FMGL(mVertexActive))->org::scalegraph::util::Bitmap::set(
      this->FMGL(mSrcid));
}

//#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::setVertexShouldBeActive(
  x10_boolean active) {
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorker))->
                        FMGL(mVertexShouldBeActive))->org::scalegraph::util::Bitmap::__set(
      this->FMGL(mSrcid), active);
}

//#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10_boolean org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::isHalted(
  ) {
    
    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Bitmap* this80218 = x10aux::nullCheck(this->
                                                                       FMGL(mWorker))->
                                                     FMGL(mVertexActive);
        
        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long i80215 = this->FMGL(mSrcid);
        
        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_boolean ret80219;
        {
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
            if (((i80215) < (((x10_long) (((x10_int)0))))) ||
                ((i80215) > (x10aux::nullCheck(this80218)->
                               FMGL(size)))) {
                
                //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
                }
                
            }
            
        }
        
        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long wordOffset80262 = ((x10_long) ((i80215) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
        
        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong mask80263 = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i80215) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
        ret80219 = (!x10aux::struct_equals(((x10_ulong) (((x10aux::nullCheck(this80218)->
                                                             FMGL(mc)->
                                                             FMGL(data))[wordOffset80262]) & (mask80263))),
                                           ((x10_ulong)0ull)));
        ret80219;
    }))
    ;
    
}

//#line 280 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c

//#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*
  org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::org__scalegraph__xpregel__VertexContext____this__org__scalegraph__xpregel__VertexContext(
  ) {
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::__fieldInitializers51698(
  ) {
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mAggregatedValue) = x10aux::zeroValue<TPMGL(A) >();
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mAggregateValue) = (__extension__ ({
        
        //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(A)>* alloc51714 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(A)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(A)>))) org::scalegraph::util::GrowableMemory<TPMGL(A)>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc51714)->::org::scalegraph::util::GrowableMemory<TPMGL(A)>::_constructor(
          ((x10_long)0ll));
        alloc51714;
    }))
    ;
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mSrcid) = ((x10_long)0ll);
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mNumActiveVertexes) = ((x10_long)0ll);
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10FieldAssign_c
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

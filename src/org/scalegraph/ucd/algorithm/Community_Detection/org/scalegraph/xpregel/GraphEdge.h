#ifndef __ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H
#define __ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix;
} } } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(E)> class GraphEdge;
template <> class GraphEdge<void>;
template<class TPMGL(E)> class GraphEdge : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(offsets);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(vertexes);
    
    org::scalegraph::util::MemoryChunk<TPMGL(E)> FMGL(value);
    
    void _constructor();
    
    static org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* _make();
    
    virtual void set(org::scalegraph::blas::SparseMatrix<TPMGL(E)> m);
    virtual org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* org__scalegraph__xpregel__GraphEdge____this__org__scalegraph__xpregel__GraphEdge(
      );
    virtual void __fieldInitializers65554();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(E)> x10aux::RuntimeType org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::rtt;
template<class TPMGL(E)> void org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::GraphEdge<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(E)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.GraphEdge";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class GraphEdge<void> : public x10::lang::X10Class {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class GraphEdge;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_GENERICS
#endif // ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/GraphEdge.h>


//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10FieldDecl_c

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10FieldDecl_c

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10FieldDecl_c

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_constructor(
                           ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.AssignPropertyCall_c
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::__fieldInitializers65554();
}
template<class TPMGL(E)> org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_make(
                           ) {
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::GraphEdge<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>))) org::scalegraph::xpregel::GraphEdge<TPMGL(E)>();
    this_->_constructor();
    return this_;
}



//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::set(
  org::scalegraph::blas::SparseMatrix<TPMGL(E)> m) {
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offsets) = m->FMGL(offsets);
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexes) = m->FMGL(vertexes);
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(value) = m->FMGL(values);
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::xpregel::GraphEdge<TPMGL(E)>*
  org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::org__scalegraph__xpregel__GraphEdge____this__org__scalegraph__xpregel__GraphEdge(
  ) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::__fieldInitializers65554(
  ) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offsets) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexes) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(value) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
}
template<class TPMGL(E)> const x10aux::serialization_id_t org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(E)> void org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(offsets));
    buf.write(this->FMGL(vertexes));
    buf.write(this->FMGL(value));
    
}

template<class TPMGL(E)> x10::lang::Reference* org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::GraphEdge<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>))) org::scalegraph::xpregel::GraphEdge<TPMGL(E)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(E)> void org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(offsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(vertexes) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(value) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
}

#endif // ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_GRAPHEDGE_H_NODEPS

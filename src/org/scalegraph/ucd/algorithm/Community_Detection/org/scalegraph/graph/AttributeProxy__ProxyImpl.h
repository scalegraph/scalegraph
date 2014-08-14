#ifndef __ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H
#define __ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_NODEPS
#include <org/scalegraph/graph/AttributeProxy.h>
#undef ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_NODEPS
namespace org { namespace scalegraph { namespace graph { 
class Graph;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace graph { 

template<class TPMGL(T)> class AttributeProxy__ProxyImpl;
template <> class AttributeProxy__ProxyImpl<void>;
template<class TPMGL(T)> class AttributeProxy__ProxyImpl : public org::scalegraph::graph::AttributeProxy
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void setEdgeAttribute(org::scalegraph::graph::Graph* g,
                                  x10::lang::String* name, x10::lang::Any* values);
    virtual void setVertexAttribute(org::scalegraph::graph::Graph* g,
                                    x10::lang::String* name, x10::lang::Any* values);
    virtual void setVertexAttribute(org::scalegraph::graph::Graph* g,
                                    x10::lang::String* name, org::scalegraph::util::DistMemoryChunk<x10_long> ids,
                                    x10::lang::Any* values);
    virtual org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>*
      org__scalegraph__graph__AttributeProxy__ProxyImpl____this__org__scalegraph__graph__AttributeProxy__ProxyImpl(
      );
    void _constructor();
    
    static org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>* _make(
             );
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::graph::AttributeProxy__ProxyImpl<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::graph::AttributeProxy>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.graph.AttributeProxy.ProxyImpl";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class AttributeProxy__ProxyImpl<void> : public org::scalegraph::graph::AttributeProxy
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H

namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class AttributeProxy__ProxyImpl;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_NODEPS
#include <org/scalegraph/graph/AttributeProxy.h>
#include <org/scalegraph/graph/Graph.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/Long.h>
#ifndef ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_GENERICS
#ifndef ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_IMPLEMENTATION
#include <org/scalegraph/graph/AttributeProxy__ProxyImpl.h>


//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::setEdgeAttribute(
  org::scalegraph::graph::Graph* g, x10::lang::String* name, x10::lang::Any* values) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->template setEdgeAttribute<TPMGL(T) >(name,
                                                               x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(values));
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::setVertexAttribute(
  org::scalegraph::graph::Graph* g, x10::lang::String* name,
  x10::lang::Any* values) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->template setVertexAttribute<TPMGL(T) >(
      name, x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(values));
}

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::setVertexAttribute(
  org::scalegraph::graph::Graph* g, x10::lang::String* name,
  org::scalegraph::util::DistMemoryChunk<x10_long> ids, x10::lang::Any* values) {
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->template setVertexAttribute<TPMGL(T) >(
      name, ids, x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(values));
}

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>*
  org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::org__scalegraph__graph__AttributeProxy__ProxyImpl____this__org__scalegraph__graph__AttributeProxy__ProxyImpl(
  ) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::AttributeProxy* this134599 = this;
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.AssignPropertyCall_c
    
}
template<class TPMGL(T)> org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>* org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_make(
                           ) {
    org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>();
    this_->_constructor();
    return this_;
}


template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::graph::AttributeProxy::_serialize_body(buf);
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::graph::AttributeProxy__ProxyImpl<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::AttributeProxy::_deserialize_body(buf);
    
}

#endif // ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY__PROXYIMPL_H_NODEPS

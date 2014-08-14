#ifndef __ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H
#define __ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class Vertex;
} } } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(V), class TPMGL(E)> class XPregelGraph__VertexIterator;
template <> class XPregelGraph__VertexIterator<void, void>;
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph__VertexIterator : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static x10aux::itable_entry _itables[3];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >::template itable<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> > _itable_0;
    
    static x10::lang::Any::itable<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> > _itable_1;
    
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*
      FMGL(mWorker);
    
    x10_long FMGL(cur);
    
    void _constructor(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker);
    
    static org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>* _make(
             org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker);
    
    virtual x10_boolean hasNext();
    virtual org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>
      next();
    virtual org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>*
      org__scalegraph__xpregel__XPregelGraph__VertexIterator____this__org__scalegraph__xpregel__XPregelGraph__VertexIterator(
      );
    virtual void __fieldInitializers51177();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(V), class TPMGL(E)> x10aux::RuntimeType org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::rtt;
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::XPregelGraph__VertexIterator<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> > >()};
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(V)>(), x10aux::getRTT<TPMGL(E)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.XPregelGraph.VertexIterator";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class XPregelGraph__VertexIterator<void, void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph__VertexIterator;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#include <org/scalegraph/xpregel/Vertex.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_GENERICS
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/XPregelGraph__VertexIterator.h>

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >::template itable<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> >  org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_itable_0(&org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::equals, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::hasNext, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::hashCode, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::next, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::toString, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::typeName);
template<class TPMGL(V), class TPMGL(E)> x10::lang::Any::itable<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> >  org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_itable_1(&org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::equals, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::hashCode, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::toString, &org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> > >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> >())};

//#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10FieldDecl_c

//#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10FieldDecl_c

//#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_constructor(
                                           org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker) {
    
    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>* this76829 =
      this;
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this76829)->FMGL(cur) = ((x10_long)0ll);
    
    //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mWorker) = worker;
    
    //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(cur) = ((x10_long)0ll);
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_make(
                                           org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker)
{
    org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>();
    this_->_constructor(worker);
    return this_;
}



//#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_boolean org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::hasNext(
  ) {
    
    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return ((this->FMGL(cur)) < ((__extension__ ({
        
        //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this76322 = x10aux::nullCheck(this->
                                                                             FMGL(mWorker))->
                                                           FMGL(mIds);
        this76322->FMGL(numberOfLocalVertexes);
    }))
    ));
    
}

//#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>
  org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::next(
  ) {
    
    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> alloc51274 =
           org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_alloc();
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker76830 =
          this->FMGL(mWorker);
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        x10_long id76831 = ((x10_long) (((__extension__ ({
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>* x76832 =
              this;
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Empty_c
            ;
            x10aux::nullCheck(x76832)->FMGL(cur) = ((x10_long) ((x10aux::nullCheck(x76832)->
                                                                   FMGL(cur)) + (((x10_long)1ll))));
        }))
        ) - (((x10_long)1ll))));
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10FieldAssign_c
        alloc51274->FMGL(mWorker) = worker76830;
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10FieldAssign_c
        alloc51274->FMGL(mSrcid) = id76831;
        alloc51274;
    }))
    ;
    
}

//#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::org__scalegraph__xpregel__XPregelGraph__VertexIterator____this__org__scalegraph__xpregel__XPregelGraph__VertexIterator(
  ) {
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::__fieldInitializers51177(
  ) {
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(cur) = ((x10_long)0ll);
}
template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mWorker));
    buf.write(this->FMGL(cur));
    
}

template<class TPMGL(V), class TPMGL(E)> x10::lang::Reference* org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mWorker) = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
    FMGL(cur) = buf.read<x10_long>();
}

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__VERTEXITERATOR_H_NODEPS

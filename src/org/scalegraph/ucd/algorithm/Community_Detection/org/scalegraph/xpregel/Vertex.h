#ifndef __ORG_SCALEGRAPH_XPREGEL_VERTEX_H
#define __ORG_SCALEGRAPH_XPREGEL_VERTEX_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__StoD;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__StoV;
} } } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
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
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class GraphEdge;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(V), class TPMGL(E)> class Vertex   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> _alloc(){org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> t; return t; }
    
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* FMGL(mWorker);
    
    x10_long FMGL(mSrcid);
    
    void _constructor(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
                      x10_long id);
    
    static org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> _make(
             org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
             x10_long id);
    
    x10_long srcId();
    x10_long id();
    x10_long realId();
    TPMGL(V) value();
    void setValue(TPMGL(V) value);
    org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
      outEdges();
    org::scalegraph::util::MemoryChunk<x10_long> outEdgesId(
      );
    org::scalegraph::util::MemoryChunk<TPMGL(E)> outEdgesValue(
      );
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> other);
    org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> org__scalegraph__xpregel__Vertex____this__org__scalegraph__xpregel__Vertex(
      );
    
    static void _serialize(org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(V), class TPMGL(E)> x10aux::RuntimeType org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::rtt;
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::Vertex<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(V)>(), x10aux::getRTT<TPMGL(E)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.Vertex";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 2, params, variances);
}

template <> class Vertex<void, void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEX_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class Vertex;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEX_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_VERTEX_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>
#include <org/scalegraph/graph/id/OnedR__StoD.h>
#include <org/scalegraph/graph/id/OnedR__StoV.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <org/scalegraph/xpregel/GraphEdge.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEX_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_VERTEX_H_GENERICS
#endif // ORG_SCALEGRAPH_XPREGEL_VERTEX_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_VERTEX_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_VERTEX_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/Vertex.h>

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class Vertex_ibox0 : public x10::lang::IBox<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> > {
public:
    static x10::lang::Any::itable<Vertex_ibox0<TPMGL(V), TPMGL(E)> > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class TPMGL(V), class TPMGL(E)> x10::lang::Any::itable<Vertex_ibox0<TPMGL(V), TPMGL(E)> >  Vertex_ibox0<TPMGL(V), TPMGL(E)>::itable(&Vertex_ibox0<TPMGL(V), TPMGL(E)>::equals, &Vertex_ibox0<TPMGL(V), TPMGL(E)>::hashCode, &Vertex_ibox0<TPMGL(V), TPMGL(E)>::toString, &Vertex_ibox0<TPMGL(V), TPMGL(E)>::typeName);
} } } 
template<class TPMGL(V), class TPMGL(E)> x10::lang::Any::itable<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_itable_0(&org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::equals, &org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::hashCode, &org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::toString, &org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >())};
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::xpregel::Vertex_ibox0<TPMGL(V), TPMGL(E)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >())};

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10FieldDecl_c

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10FieldDecl_c

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_constructor(
                                           org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
                                           x10_long id) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.AssignPropertyCall_c
    
    //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(mWorker) = worker;
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(mSrcid) = id;
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_make(
                                           org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker,
                                           x10_long id) {
    org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> this_; 
    this_->_constructor(worker, id);
    return this_;
}



//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_long org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::srcId(
  ) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (*this)->FMGL(mSrcid);
    
}

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_long org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::id(
  ) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD this104147 =
          x10aux::nullCheck((*this)->FMGL(mWorker))->FMGL(mStoD);
        
        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_long id104146 = (*this)->FMGL(mSrcid);
        ((x10_long) ((id104146) | (this104147->FMGL(rshifted))));
    }))
    ;
    
}

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_long org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::realId(
  ) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(mWorker))->FMGL(mStoV)->org::scalegraph::graph::id::OnedR__StoV::__apply(
             (*this)->FMGL(mSrcid));
    
}

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> TPMGL(V) org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::value(
  ) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(V)> this104149 =
          x10aux::nullCheck((*this)->FMGL(mWorker))->FMGL(mVertexValue);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104148 = (*this)->FMGL(mSrcid);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(V) ret104150;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104149->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104148) < (((x10_long) (((x10_int)0))))) ||
                ((index104148) >= (this104149->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104148), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104150 = (this104149->FMGL(data))[index104148];
        ret104150;
    }))
    ;
    
}

//#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::setValue(
  TPMGL(V) value) {
    
    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(V)> this104184 =
      x10aux::nullCheck((*this)->FMGL(mWorker))->FMGL(mVertexValue);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index104185 = (*this)->FMGL(mSrcid);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(V) value104186 = value;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(V) ret104187;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((this104184->FMGL(data)).isValid())) {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index104185) < (((x10_long) (((x10_int)0))))) ||
            ((index104185) >= (this104184->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104185), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (this104184->FMGL(data)).set(index104185, value104186);
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret104187 = value104186;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret104187;
}

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::outEdges(
  ) {
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* edge =
      x10aux::nullCheck((*this)->FMGL(mWorker))->FMGL(mOutEdge);
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    x10_long offset = (__extension__ ({
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this104158 =
          x10aux::nullCheck(edge)->FMGL(offsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104157 = (*this)->FMGL(mSrcid);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104159;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104158->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104157) < (((x10_long) (((x10_int)0))))) ||
                ((index104157) >= (this104158->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104157), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104159 = (this104158->FMGL(data))[index104157];
        ret104159;
    }))
    ;
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) (((__extension__ ({
        
        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this104162 =
          x10aux::nullCheck(edge)->FMGL(offsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104161 = ((x10_long) (((*this)->FMGL(mSrcid)) + (((x10_long) (((x10_int)1))))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104163;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104162->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104161) < (((x10_long) (((x10_int)0))))) ||
                ((index104161) >= (this104162->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104161), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104163 = (this104162->FMGL(data))[index104161];
        ret104163;
    }))
    ) - (offset)));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> > alloc78551 =
           org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >::_alloc();
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> val104188 =
          x10aux::nullCheck(edge)->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
            offset, length);
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(E)> val104189 =
          x10aux::nullCheck(edge)->FMGL(value)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
            offset, length);
        
        //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc78551->FMGL(val1) = val104188;
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc78551->FMGL(val2) = val104189;
        alloc78551;
    }))
    ;
    
}

//#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::outEdgesId(
  ) {
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* edge =
      x10aux::nullCheck((*this)->FMGL(mWorker))->FMGL(mOutEdge);
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    x10_long offset = (__extension__ ({
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this104169 =
          x10aux::nullCheck(edge)->FMGL(offsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104168 = (*this)->FMGL(mSrcid);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104170;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104169->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104168) < (((x10_long) (((x10_int)0))))) ||
                ((index104168) >= (this104169->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104168), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104170 = (this104169->FMGL(data))[index104168];
        ret104170;
    }))
    ;
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) (((__extension__ ({
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this104173 =
          x10aux::nullCheck(edge)->FMGL(offsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104172 = ((x10_long) (((*this)->FMGL(mSrcid)) + (((x10_long) (((x10_int)1))))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104174;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104173->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104172) < (((x10_long) (((x10_int)0))))) ||
                ((index104172) >= (this104173->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104172), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104174 = (this104173->FMGL(data))[index104172];
        ret104174;
    }))
    ) - (offset)));
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(edge)->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             offset, length);
    
}

//#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<TPMGL(E)>
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::outEdgesValue(
  ) {
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* edge =
      x10aux::nullCheck((*this)->FMGL(mWorker))->FMGL(mOutEdge);
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    x10_long offset = (__extension__ ({
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this104177 =
          x10aux::nullCheck(edge)->FMGL(offsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104176 = (*this)->FMGL(mSrcid);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104178;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104177->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104176) < (((x10_long) (((x10_int)0))))) ||
                ((index104176) >= (this104177->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104176), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104178 = (this104177->FMGL(data))[index104176];
        ret104178;
    }))
    ;
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) (((__extension__ ({
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this104181 =
          x10aux::nullCheck(edge)->FMGL(offsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104180 = ((x10_long) (((*this)->FMGL(mSrcid)) + (((x10_long) (((x10_int)1))))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104182;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104181->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104180) < (((x10_long) (((x10_int)0))))) ||
                ((index104180) >= (this104181->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104180), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104182 = (this104181->FMGL(data))[index104180];
        ret104182;
    }))
    ) - (offset)));
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(edge)->FMGL(value)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
             offset, length);
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::lang::String*
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::lang::String*
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::toString(
  ) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.xpregel.Vertex:"), x10aux::makeStringLit(" mWorker=")), (*this)->
                                                                                                                                                                                                                          FMGL(mWorker)), x10aux::makeStringLit(" mSrcid=")), (*this)->
                                                                                                                                                                                                                                                                                FMGL(mSrcid));
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_int org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::hashCode(
  ) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(mWorker)))));
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(mSrcid)))));
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_boolean org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::equals(
  x10::lang::Any* other) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >(other)))
    {
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::equals(
             x10aux::class_cast<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >(other));
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_boolean org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::equals(
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> other) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(mWorker),
                                  other->FMGL(mWorker))) &&
    (x10aux::struct_equals((*this)->FMGL(mSrcid), other->
                                                    FMGL(mSrcid)));
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_boolean org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >(other)))
    {
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >(other));
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_boolean org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_struct_equals(
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> other) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(mWorker),
                                  other->FMGL(mWorker))) &&
    (x10aux::struct_equals((*this)->FMGL(mSrcid), other->
                                                    FMGL(mSrcid)));
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>
  org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::org__scalegraph__xpregel__Vertex____this__org__scalegraph__xpregel__Vertex(
  ) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_serialize(org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(mWorker));
    buf.write(this_->FMGL(mSrcid));
    
}

template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mWorker) = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
    FMGL(mSrcid) = buf.read<x10_long>();
}


#endif // ORG_SCALEGRAPH_XPREGEL_VERTEX_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_VERTEX_H_NODEPS

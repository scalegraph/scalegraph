#ifndef __ORG_SCALEGRAPH_GRAPH_EDGELIST_H
#define __ORG_SCALEGRAPH_GRAPH_EDGELIST_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/DistMemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/DistMemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace graph { 

template<class TPMGL(T)> class EdgeList   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::graph::EdgeList<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::graph::EdgeList<TPMGL(T)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::graph::EdgeList<TPMGL(T)> _alloc(){org::scalegraph::graph::EdgeList<TPMGL(T)> t; return t; }
    
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> FMGL(src);
    
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> FMGL(dst);
    
    void _constructor(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> src,
                      org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dst);
    
    static org::scalegraph::graph::EdgeList<TPMGL(T)> _make(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> src,
                                                            org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dst);
    
    void del();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::graph::EdgeList<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::graph::EdgeList<TPMGL(T)> other);
    org::scalegraph::graph::EdgeList<TPMGL(T)> org__scalegraph__graph__EdgeList____this__org__scalegraph__graph__EdgeList(
      );
    
    static void _serialize(org::scalegraph::graph::EdgeList<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::graph::EdgeList<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::graph::EdgeList<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::graph::EdgeList<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::graph::EdgeList<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::graph::EdgeList<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.graph.EdgeList";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class EdgeList<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_GRAPH_EDGELIST_H

namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class EdgeList;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_EDGELIST_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_EDGELIST_H_NODEPS
#include <x10/lang/Any.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_GRAPH_EDGELIST_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_EDGELIST_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_EDGELIST_H_GENERICS
#ifndef ORG_SCALEGRAPH_GRAPH_EDGELIST_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_GRAPH_EDGELIST_H_IMPLEMENTATION
#include <org/scalegraph/graph/EdgeList.h>

namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class EdgeList_ibox0 : public x10::lang::IBox<org::scalegraph::graph::EdgeList<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<EdgeList_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> x10::lang::Any::itable<EdgeList_ibox0<TPMGL(T)> >  EdgeList_ibox0<TPMGL(T)>::itable(&EdgeList_ibox0<TPMGL(T)>::equals, &EdgeList_ibox0<TPMGL(T)>::hashCode, &EdgeList_ibox0<TPMGL(T)>::toString, &EdgeList_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::graph::EdgeList<TPMGL(T)> >  org::scalegraph::graph::EdgeList<TPMGL(T)>::_itable_0(&org::scalegraph::graph::EdgeList<TPMGL(T)>::equals, &org::scalegraph::graph::EdgeList<TPMGL(T)>::hashCode, &org::scalegraph::graph::EdgeList<TPMGL(T)>::toString, &org::scalegraph::graph::EdgeList<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::graph::EdgeList<TPMGL(T)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::EdgeList<TPMGL(T)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::EdgeList<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::graph::EdgeList<TPMGL(T)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::EdgeList_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::EdgeList<TPMGL(T)> >())};

//#line 16 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10FieldDecl_c

//#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10FieldDecl_c

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::EdgeList<TPMGL(T)>::_constructor(
                           org::scalegraph::util::DistMemoryChunk<TPMGL(T)> src,
                           org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dst) {
    
    //#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": polyglot.ast.Empty_c
    ;
    
    //#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.AssignPropertyCall_c
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(src) = src;
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(dst) = dst;
}
template<class TPMGL(T)> org::scalegraph::graph::EdgeList<TPMGL(T)> org::scalegraph::graph::EdgeList<TPMGL(T)>::_make(
                           org::scalegraph::util::DistMemoryChunk<TPMGL(T)> src,
                           org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dst)
{
    org::scalegraph::graph::EdgeList<TPMGL(T)> this_; 
    this_->_constructor(src, dst);
    return this_;
}



//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::EdgeList<TPMGL(T)>::del(
  ) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10Call_c
    (*this)->FMGL(src)->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::del();
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10Call_c
    (*this)->FMGL(dst)->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::del();
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::graph::EdgeList<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::graph::EdgeList<TPMGL(T)>::toString(
  ) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.EdgeList:"), x10aux::makeStringLit(" src=")), (*this)->
                                                                                                                                                                                                                      FMGL(src)), x10aux::makeStringLit(" dst=")), (*this)->
                                                                                                                                                                                                                                                                     FMGL(dst));
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::graph::EdgeList<TPMGL(T)>::hashCode(
  ) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(src)->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::hashCode())));
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(dst)->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::hashCode())));
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::EdgeList<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::EdgeList<TPMGL(T)> >(other)))
    {
        
        //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::EdgeList<TPMGL(T)>::equals(
             x10aux::class_cast<org::scalegraph::graph::EdgeList<TPMGL(T)> >(other));
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::EdgeList<TPMGL(T)>::equals(
  org::scalegraph::graph::EdgeList<TPMGL(T)> other) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(src), other->
                                                        FMGL(src))) &&
    (x10aux::struct_equals((*this)->FMGL(dst), other->FMGL(dst)));
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::EdgeList<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::EdgeList<TPMGL(T)> >(other)))
    {
        
        //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::EdgeList<TPMGL(T)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::EdgeList<TPMGL(T)> >(other));
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::EdgeList<TPMGL(T)>::_struct_equals(
  org::scalegraph::graph::EdgeList<TPMGL(T)> other) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(src), other->
                                                        FMGL(src))) &&
    (x10aux::struct_equals((*this)->FMGL(dst), other->FMGL(dst)));
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::EdgeList<TPMGL(T)>
  org::scalegraph::graph::EdgeList<TPMGL(T)>::org__scalegraph__graph__EdgeList____this__org__scalegraph__graph__EdgeList(
  ) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::graph::EdgeList<TPMGL(T)>::_serialize(org::scalegraph::graph::EdgeList<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(src));
    buf.write(this_->FMGL(dst));
    
}

template<class TPMGL(T)> void org::scalegraph::graph::EdgeList<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(src) = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
    FMGL(dst) = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
}


#endif // ORG_SCALEGRAPH_GRAPH_EDGELIST_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_GRAPH_EDGELIST_H_NODEPS

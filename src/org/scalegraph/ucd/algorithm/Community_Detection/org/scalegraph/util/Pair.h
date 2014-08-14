#ifndef __ORG_SCALEGRAPH_UTIL_PAIR_H
#define __ORG_SCALEGRAPH_UTIL_PAIR_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
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
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T), class TPMGL(U)> class Pair   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> _alloc(){org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> t; return t; }
    
    TPMGL(T) FMGL(first);
    
    TPMGL(U) FMGL(second);
    
    void _constructor(TPMGL(T) first, TPMGL(U) second);
    
    static org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> _make(TPMGL(T) first,
                                                                 TPMGL(U) second);
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> other);
    org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> org__scalegraph__util__Pair____this__org__scalegraph__util__Pair(
      );
    
    static void _serialize(org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T), class TPMGL(U)> x10aux::RuntimeType org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::rtt;
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::Pair<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(T)>(), x10aux::getRTT<TPMGL(U)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.Pair";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 2, params, variances);
}

template <> class Pair<void, void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_PAIR_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_PAIR_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_PAIR_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_UTIL_PAIR_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_PAIR_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_PAIR_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_PAIR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_PAIR_H_IMPLEMENTATION
#include <org/scalegraph/util/Pair.h>

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair_ibox0 : public x10::lang::IBox<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> > {
public:
    static x10::lang::Any::itable<Pair_ibox0<TPMGL(T), TPMGL(U)> > itable;
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
template<class TPMGL(T), class TPMGL(U)> x10::lang::Any::itable<Pair_ibox0<TPMGL(T), TPMGL(U)> >  Pair_ibox0<TPMGL(T), TPMGL(U)>::itable(&Pair_ibox0<TPMGL(T), TPMGL(U)>::equals, &Pair_ibox0<TPMGL(T), TPMGL(U)>::hashCode, &Pair_ibox0<TPMGL(T), TPMGL(U)>::toString, &Pair_ibox0<TPMGL(T), TPMGL(U)>::typeName);
} } } 
template<class TPMGL(T), class TPMGL(U)> x10::lang::Any::itable<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> >  org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_itable_0(&org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::equals, &org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::hashCode, &org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::toString, &org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::typeName);
template<class TPMGL(T), class TPMGL(U)> x10aux::itable_entry org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> >())};
template<class TPMGL(T), class TPMGL(U)> x10aux::itable_entry org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Pair_ibox0<TPMGL(T), TPMGL(U)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> >())};

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_constructor(
                                           TPMGL(T) first, TPMGL(U) second) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(first) = first;
    
    //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(second) = second;
}
template<class TPMGL(T), class TPMGL(U)> org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_make(
                                           TPMGL(T) first,
                                           TPMGL(U) second)
{
    org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> this_; 
    this_->_constructor(first, second);
    return this_;
}



//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> x10::lang::String*
  org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> x10::lang::String*
  org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::toString(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.Pair:"), x10aux::makeStringLit(" first=")), (*this)->
                                                                                                                                                                                                                   FMGL(first)), x10aux::makeStringLit(" second=")), (*this)->
                                                                                                                                                                                                                                                                       FMGL(second));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> x10_int org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::hashCode(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(first)))));
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(second)))));
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> x10_boolean org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::equals(
  x10::lang::Any* other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> >(other)))
    {
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::equals(
             x10aux::class_cast<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> >(other));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> x10_boolean org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::equals(
  org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(first), other->
                                                          FMGL(first))) &&
    (x10aux::struct_equals((*this)->FMGL(second), other->
                                                    FMGL(second)));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> x10_boolean org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> >(other)))
    {
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> >(other));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> x10_boolean org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_struct_equals(
  org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(first), other->
                                                          FMGL(first))) &&
    (x10aux::struct_equals((*this)->FMGL(second), other->
                                                    FMGL(second)));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T), class TPMGL(U)> org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>
  org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::org__scalegraph__util__Pair____this__org__scalegraph__util__Pair(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_serialize(org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(first));
    buf.write(this_->FMGL(second));
    
}

template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Pair<TPMGL(T), TPMGL(U)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(first) = buf.read<TPMGL(T)>();
    FMGL(second) = buf.read<TPMGL(U)>();
}


#endif // ORG_SCALEGRAPH_UTIL_PAIR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_PAIR_H_NODEPS

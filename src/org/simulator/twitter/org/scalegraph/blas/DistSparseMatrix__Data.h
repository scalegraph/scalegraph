#ifndef __ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H
#define __ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#include <org/scalegraph/util/Dist2D.h>
#undef ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#include <org/scalegraph/util/Dist2D.h>
#undef ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#include <org/scalegraph/graph/id/IdStruct.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#include <org/scalegraph/graph/id/IdStruct.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS
#include <org/scalegraph/blas/SparseMatrix.h>
#undef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS
#include <org/scalegraph/blas/SparseMatrix.h>
#undef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS
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
namespace org { namespace scalegraph { namespace blas { 

template<class TPMGL(T)> class DistSparseMatrix__Data   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> _alloc(){org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> t; return t; }
    
    org::scalegraph::util::Dist2D FMGL(dist);
    
    org::scalegraph::graph::id::IdStruct FMGL(ids);
    
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> FMGL(matrix);
    
    void _constructor(org::scalegraph::util::Dist2D dist, org::scalegraph::graph::id::IdStruct ids,
                      org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix);
    
    static org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> _make(
             org::scalegraph::util::Dist2D dist, org::scalegraph::graph::id::IdStruct ids,
             org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix);
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> other);
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>
      org__scalegraph__blas__DistSparseMatrix__Data____this__org__scalegraph__blas__DistSparseMatrix__Data(
      );
    
    static void _serialize(org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::blas::DistSparseMatrix__Data<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.blas.DistSparseMatrix.Data";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class DistSparseMatrix__Data<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H

namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix__Data;
} } } 

#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_NODEPS
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_NODEPS
#include <x10/lang/Any.h>
#include <org/scalegraph/util/Dist2D.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_GENERICS
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_GENERICS
#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_GENERICS
#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_IMPLEMENTATION
#include <org/scalegraph/blas/DistSparseMatrix__Data.h>

namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix__Data_ibox0 : public x10::lang::IBox<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<DistSparseMatrix__Data_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> x10::lang::Any::itable<DistSparseMatrix__Data_ibox0<TPMGL(T)> >  DistSparseMatrix__Data_ibox0<TPMGL(T)>::itable(&DistSparseMatrix__Data_ibox0<TPMGL(T)>::equals, &DistSparseMatrix__Data_ibox0<TPMGL(T)>::hashCode, &DistSparseMatrix__Data_ibox0<TPMGL(T)>::toString, &DistSparseMatrix__Data_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >  org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_itable_0(&org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::equals, &org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::hashCode, &org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::toString, &org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::blas::DistSparseMatrix__Data_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >())};

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_constructor(
                           org::scalegraph::util::Dist2D dist, org::scalegraph::graph::id::IdStruct ids,
                           org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix) {
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Empty_c
    ;
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(dist) = dist;
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(ids) = ids;
    
    //#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(matrix) = matrix;
}
template<class TPMGL(T)> org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_make(
                           org::scalegraph::util::Dist2D dist,
                           org::scalegraph::graph::id::IdStruct ids,
                           org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix)
{
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> this_; 
    this_->_constructor(dist, ids, matrix);
    return this_;
}



//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::toString(
  ) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.blas.DistSparseMatrix.Data:"), x10aux::makeStringLit(" dist=")), (*this)->
                                                                                                                                                                                                                                                                                       FMGL(dist)), x10aux::makeStringLit(" ids=")), (*this)->
                                                                                                                                                                                                                                                                                                                                       FMGL(ids)), x10aux::makeStringLit(" matrix=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                         FMGL(matrix));
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::hashCode(
  ) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(dist)->org::scalegraph::util::Dist2D::hashCode())));
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(ids)->org::scalegraph::graph::id::IdStruct::hashCode())));
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(matrix)->org::scalegraph::blas::SparseMatrix<TPMGL(T)>::hashCode())));
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >(other)))
    {
        
        //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::equals(
             x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >(other));
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::equals(
  org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> other) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(dist), other->
                                                         FMGL(dist))) &&
    (x10aux::struct_equals((*this)->FMGL(ids), other->FMGL(ids))) &&
    (x10aux::struct_equals((*this)->FMGL(matrix), other->
                                                    FMGL(matrix)));
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >(other)))
    {
        
        //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >(other));
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_struct_equals(
  org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> other) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(dist), other->
                                                         FMGL(dist))) &&
    (x10aux::struct_equals((*this)->FMGL(ids), other->FMGL(ids))) &&
    (x10aux::struct_equals((*this)->FMGL(matrix), other->
                                                    FMGL(matrix)));
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>
  org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::org__scalegraph__blas__DistSparseMatrix__Data____this__org__scalegraph__blas__DistSparseMatrix__Data(
  ) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_serialize(org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(dist));
    buf.write(this_->FMGL(ids));
    buf.write(this_->FMGL(matrix));
    
}

template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(dist) = buf.read<org::scalegraph::util::Dist2D>();
    FMGL(ids) = buf.read<org::scalegraph::graph::id::IdStruct>();
    FMGL(matrix) = buf.read<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
}


#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_NODEPS

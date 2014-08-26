#ifndef __ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H
#define __ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
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
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__VtoS;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__VtoD;
} } } } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
class Algorithm;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace util { 
class Team2;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace blas { 

template<class TPMGL(T)> class SparseMatrix   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::blas::SparseMatrix<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::blas::SparseMatrix<TPMGL(T)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::blas::SparseMatrix<TPMGL(T)> _alloc(){org::scalegraph::blas::SparseMatrix<TPMGL(T)> t; return t; }
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(offsets);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(vertexes);
    
    org::scalegraph::util::MemoryChunk<TPMGL(T)> FMGL(values);
    
    org::scalegraph::util::MemoryChunk<x10_long> adjacency(x10_long localV);
    org::scalegraph::util::MemoryChunk<TPMGL(T)> attribute(x10_long localV);
    template<class TPMGL(T58238)> org::scalegraph::util::MemoryChunk<TPMGL(T58238)>
      attribute(org::scalegraph::util::MemoryChunk<TPMGL(T58238)> values,
                x10_long localV);
    x10::lang::LongRange vertexRange();
    void _constructor(org::scalegraph::util::MemoryChunk<x10_long> offsets,
                      org::scalegraph::util::MemoryChunk<x10_long> vertexes,
                      org::scalegraph::util::MemoryChunk<TPMGL(T)> values);
    
    static org::scalegraph::blas::SparseMatrix<TPMGL(T)> _make(org::scalegraph::util::MemoryChunk<x10_long> offsets,
                                                               org::scalegraph::util::MemoryChunk<x10_long> vertexes,
                                                               org::scalegraph::util::MemoryChunk<TPMGL(T)> values);
    
    void _constructor(org::scalegraph::util::MemoryChunk<x10_long> origin_,
                      org::scalegraph::util::MemoryChunk<x10_long> target_,
                      org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                      org::scalegraph::graph::id::IdStruct ids);
    
    static org::scalegraph::blas::SparseMatrix<TPMGL(T)> _make(
             org::scalegraph::util::MemoryChunk<x10_long> origin_,
             org::scalegraph::util::MemoryChunk<x10_long> target_,
             org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
             org::scalegraph::graph::id::IdStruct ids);
    
    void _constructor(org::scalegraph::util::MemoryChunk<x10_long> origin_,
                      org::scalegraph::util::MemoryChunk<x10_long> target_,
                      org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                      x10_int lgl, x10_boolean transpose);
    
    static org::scalegraph::blas::SparseMatrix<TPMGL(T)> _make(
             org::scalegraph::util::MemoryChunk<x10_long> origin_,
             org::scalegraph::util::MemoryChunk<x10_long> target_,
             org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
             x10_int lgl, x10_boolean transpose);
    
    void simplify(x10_boolean removeDuplicates, x10_boolean removeSelfloops,
                  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction);
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::blas::SparseMatrix<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::blas::SparseMatrix<TPMGL(T)> other);
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> org__scalegraph__blas__SparseMatrix____this__org__scalegraph__blas__SparseMatrix(
      );
    
    static void _serialize(org::scalegraph::blas::SparseMatrix<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::blas::SparseMatrix<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::blas::SparseMatrix<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::blas::SparseMatrix<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.blas.SparseMatrix";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class SparseMatrix<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*>
      makeReplica(org::scalegraph::blas::SparseMatrix<TPMGL(T)> sparseMatrix,
                  x10::util::Team* team);
    
    
};

} } } 
#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H

namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix;
} } } 

#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS
#include <x10/lang/Any.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/util/StopWatch.h>
#include <org/scalegraph/Config.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/graph/id/Twod__VtoS.h>
#include <org/scalegraph/graph/id/Twod__VtoD.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/Algorithm.h>
#include <x10/util/Team.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Cell.h>
#include <x10/array/Array.h>
#include <x10/lang/GlobalRef.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/util/Team2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_GENERICS
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_GENERICS
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_attribute_908
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_attribute_908
template<class TPMGL(T)> template<class TPMGL(T58238)> org::scalegraph::util::MemoryChunk<TPMGL(T58238)>
  org::scalegraph::blas::SparseMatrix<TPMGL(T)>::attribute(org::scalegraph::util::MemoryChunk<TPMGL(T58238)> values,
                                                           x10_long localV) {
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return values->org::scalegraph::util::MemoryChunk<TPMGL(T58238)>::subpart(
             (*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
               localV), ((x10_long) (((*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        ((x10_long) ((localV) + (((x10_long) (((x10_int)1)))))))) - ((*this)->
                                                                                                       FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                       localV)))));
    
}
#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_attribute_908
#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_GENERICS
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_IMPLEMENTATION
#include <org/scalegraph/blas/SparseMatrix.h>

#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_blas_SparseMatrix__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::Twod__VtoS VtoS = org::scalegraph::graph::id::Twod__VtoS::_make(ids);
        
        //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::Twod__VtoD VtoD = org::scalegraph::graph::id::Twod__VtoD::_make(ids);
        
        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i58240domain58306 = r;
        
        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long i58240min58307 = i58240domain58306->FMGL(min);
        
        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long i58240max58308 = i58240domain58306->FMGL(max);
        
        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
        {
            x10_long i58309;
            for (
                 //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 i58309 = i58240min58307; ((i58309) <= (i58240max58308));
                 
                 //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                 i58309 = ((x10_long) ((i58309) + (((x10_long)1ll))))) {
                
                //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10_long i58310 = i58309;
                
                //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
                origin->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i58310, VtoS->org::scalegraph::graph::id::Twod__VtoS::__apply(
                            origin->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                              i58310)));
                
                //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
                target->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i58310, VtoD->org::scalegraph::graph::id::Twod__VtoD::__apply(
                            target->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                              i58310)));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::graph::id::IdStruct ids;
    org::scalegraph::util::MemoryChunk<x10_long> origin;
    org::scalegraph::util::MemoryChunk<x10_long> target;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ids);
        buf.write(this->origin);
        buf.write(this->target);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::graph::id::IdStruct that_ids = buf.read<org::scalegraph::graph::id::IdStruct>();
        org::scalegraph::util::MemoryChunk<x10_long> that_origin = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_target = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >(that_ids, that_origin, that_target);
        return this_;
    }
    
    org_scalegraph_blas_SparseMatrix__closure__1(org::scalegraph::graph::id::IdStruct ids, org::scalegraph::util::MemoryChunk<x10_long> origin, org::scalegraph::util::MemoryChunk<x10_long> target) : ids(ids), origin(origin), target(target) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10:86-94";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) > >org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::__apply, &org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_blas_SparseMatrix__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i58257domain58313 = r;
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long i58257min58314 = i58257domain58313->FMGL(min);
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long i58257max58315 = i58257domain58313->FMGL(max);
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
        {
            x10_long i58316;
            for (
                 //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 i58316 = i58257min58314; ((i58316) <= (i58257max58315));
                 
                 //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                 i58316 = ((x10_long) ((i58316) + (((x10_long)1ll))))) {
                
                //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10_long i58317 = i58316;
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10_long off58311 = offsets_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i58317);
                
                //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10_long len58312 = ((x10_long) ((offsets_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                    ((x10_long) ((i58317) + (((x10_long) (((x10_int)1)))))))) - (off58311)));
                
                //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Algorithm::template sort<x10_long,
                TPMGL(T) >(target->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                             off58311, len58312), values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                                    off58311,
                                                    len58312));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> offsets_;
    org::scalegraph::util::MemoryChunk<x10_long> target;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> values_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets_);
        buf.write(this->target);
        buf.write(this->values_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_target = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_values_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >(that_offsets_, that_target, that_values_);
        return this_;
    }
    
    org_scalegraph_blas_SparseMatrix__closure__2(org::scalegraph::util::MemoryChunk<x10_long> offsets_, org::scalegraph::util::MemoryChunk<x10_long> target, org::scalegraph::util::MemoryChunk<TPMGL(T)> values_) : offsets_(offsets_), target(target), values_(values_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10:121-127";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) > >org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::__apply, &org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_blas_SparseMatrix__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i58274domain58320 = r;
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long i58274min58321 = i58274domain58320->FMGL(min);
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long i58274max58322 = i58274domain58320->FMGL(max);
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
        {
            x10_long i58323;
            for (
                 //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 i58323 = i58274min58321; ((i58323) <= (i58274max58322));
                 
                 //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                 i58323 = ((x10_long) ((i58323) + (((x10_long)1ll))))) {
                
                //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10_long i58324 = i58323;
                
                //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10_long off58318 = offsets_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i58324);
                
                //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10_long len58319 = ((x10_long) ((offsets_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                    ((x10_long) ((i58324) + (((x10_long) (((x10_int)1)))))))) - (off58318)));
                
                //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Algorithm::template sort<x10_long,
                TPMGL(T) >(target->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                             off58318, len58319), values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                                    off58318,
                                                    len58319));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> offsets_;
    org::scalegraph::util::MemoryChunk<x10_long> target;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> values_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets_);
        buf.write(this->target);
        buf.write(this->values_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_target = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_values_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >(that_offsets_, that_target, that_values_);
        return this_;
    }
    
    org_scalegraph_blas_SparseMatrix__closure__3(org::scalegraph::util::MemoryChunk<x10_long> offsets_, org::scalegraph::util::MemoryChunk<x10_long> target, org::scalegraph::util::MemoryChunk<TPMGL(T)> values_) : offsets_(offsets_), target(target), values_(values_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10:176-182";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) > >org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::__apply, &org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_SparseMatrix__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*>::template itable <org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* __apply() {
        
        //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = org::scalegraph::util::MemoryChunk<x10_long >::_make(numVerts, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> vertexes = org::scalegraph::util::MemoryChunk<x10_long >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> values = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 team2 = org::scalegraph::util::Team2::_make(team);
        
        //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::place((ref_matrix)->location),
                                   x10::lang::Place::_make(x10aux::here))))
        {
            
            //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::SparseMatrix<TPMGL(T)> m = x10aux::nullCheck(x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* >(ref_matrix))->x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::__apply();
            
            //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, m->FMGL(offsets),
                                               offsets);
            
            //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, m->FMGL(vertexes),
                                               vertexes);
            
            //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<TPMGL(T) >(root, m->FMGL(values),
                                               values);
        } else {
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >(),
                                               offsets);
            
            //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >(),
                                               vertexes);
            
            //#line 215 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<TPMGL(T) >(root, org::scalegraph::util::MemoryChunk<void>::template getNull<TPMGL(T) >(),
                                               values);
        }
        
        //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::_make(org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_make(offsets,
                                                                                                                                           vertexes,
                                                                                                                                           values));
        
    }
    
    // captured environment
    x10_long numVerts;
    x10_long numEdges;
    x10::util::Team* team;
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* > ref_matrix;
    x10_int root;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numVerts);
        buf.write(this->numEdges);
        buf.write(this->team);
        buf.write(this->ref_matrix);
        buf.write(this->root);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_numVerts = buf.read<x10_long>();
        x10_long that_numEdges = buf.read<x10_long>();
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* > that_ref_matrix = buf.read<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* > >();
        x10_int that_root = buf.read<x10_int>();
        org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >(that_numVerts, that_numEdges, that_team, that_ref_matrix, that_root);
        return this_;
    }
    
    org_scalegraph_blas_SparseMatrix__closure__4(x10_long numVerts, x10_long numEdges, x10::util::Team* team, x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* > ref_matrix, x10_int root) : numVerts(numVerts), numEdges(numEdges), team(team), ref_matrix(ref_matrix), root(root) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10:200-219";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*>::template itable <org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) > >org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >::__apply, &org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*> >, &org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__4_CLOSURE
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix_ibox0 : public x10::lang::IBox<org::scalegraph::blas::SparseMatrix<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<SparseMatrix_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> x10::lang::Any::itable<SparseMatrix_ibox0<TPMGL(T)> >  SparseMatrix_ibox0<TPMGL(T)>::itable(&SparseMatrix_ibox0<TPMGL(T)>::equals, &SparseMatrix_ibox0<TPMGL(T)>::hashCode, &SparseMatrix_ibox0<TPMGL(T)>::toString, &SparseMatrix_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >  org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_itable_0(&org::scalegraph::blas::SparseMatrix<TPMGL(T)>::equals, &org::scalegraph::blas::SparseMatrix<TPMGL(T)>::hashCode, &org::scalegraph::blas::SparseMatrix<TPMGL(T)>::toString, &org::scalegraph::blas::SparseMatrix<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::blas::SparseMatrix_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >())};

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::blas::SparseMatrix<TPMGL(T)>::adjacency(
  x10_long localV) {
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             (*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
               localV), ((x10_long) (((*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        ((x10_long) ((localV) + (((x10_long) (((x10_int)1)))))))) - ((*this)->
                                                                                                       FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                       localV)))));
    
}

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::blas::SparseMatrix<TPMGL(T)>::attribute(
  x10_long localV) {
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
             (*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
               localV), ((x10_long) (((*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        ((x10_long) ((localV) + (((x10_long) (((x10_int)1)))))))) - ((*this)->
                                                                                                       FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                       localV)))));
    
}

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::LongRange org::scalegraph::blas::SparseMatrix<TPMGL(T)>::vertexRange(
  ) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) (((*this)->
                                                                                    FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)2)))))));
    
}

//#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MemoryChunk<x10_long> offsets,
                           org::scalegraph::util::MemoryChunk<x10_long> vertexes,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values) {
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.Empty_c
    ;
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(offsets) = offsets;
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexes) = vertexes;
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(values) = values;
}
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_make(
                           org::scalegraph::util::MemoryChunk<x10_long> offsets,
                           org::scalegraph::util::MemoryChunk<x10_long> vertexes,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values)
{
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> this_; 
    this_->_constructor(offsets, vertexes, values);
    return this_;
}



//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MemoryChunk<x10_long> origin_,
                           org::scalegraph::util::MemoryChunk<x10_long> target_,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                           org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.Empty_c
    ;
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(origin_->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                               ((x10_long)0ll)))) {
        
        //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(offsets) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(vertexes) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(values) = org::scalegraph::util::MemoryChunk<void>::template getNull<TPMGL(T) >();
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> origin;
    
    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> target;
    
    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(ids->FMGL(transpose))) {
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        origin = origin_;
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        target = target_;
    } else {
        
        //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        origin = target_;
        
        //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        target = origin_;
    }
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(origin->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T)>(ids, origin, target))));
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished converting edge format"));
    }
    
    //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long offsetLength = ((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) ((ids->
                                                                                      FMGL(lgl)) + (ids->
                                                                                                      FMGL(lgc))))))));
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets_ =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((offsetLength) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(origin->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> v1_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(origin->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> v2_tmp =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(origin->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("start first step sorting"));
    }
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template sort<x10_long,
    TPMGL(T) >(((x10_int) ((ids->FMGL(lgl)) + (ids->FMGL(lgc)))),
               origin, target, values_, key_tmp, v1_tmp, v2_tmp);
    
    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished first step sorting"));
    }
    
    //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::del();
    
    //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    v1_tmp->org::scalegraph::util::MemoryChunk<x10_long>::del();
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    v2_tmp->org::scalegraph::util::MemoryChunk<TPMGL(T)>::del();
    
    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::makeOffset(origin, offsets_);
    
    //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    origin->org::scalegraph::util::MemoryChunk<x10_long>::del();
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished making offsets"));
    }
    
    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((offsetLength) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T)>(offsets_, target, values_))));
    
    //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished second step sorting"));
    }
    
    //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(offsets) = offsets_;
    
    //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexes) = target;
    
    //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(values) = values_;
}
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_make(
                           org::scalegraph::util::MemoryChunk<x10_long> origin_,
                           org::scalegraph::util::MemoryChunk<x10_long> target_,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                           org::scalegraph::graph::id::IdStruct ids)
{
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> this_; 
    this_->_constructor(origin_, target_, values_, ids);
    return this_;
}



//#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MemoryChunk<x10_long> origin_,
                           org::scalegraph::util::MemoryChunk<x10_long> target_,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                           x10_int lgl, x10_boolean transpose) {
    
    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.Empty_c
    ;
    
    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(origin_->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                               ((x10_long)0ll)))) {
        
        //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(offsets) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(vertexes) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(values) = org::scalegraph::util::MemoryChunk<void>::template getNull<TPMGL(T) >();
        
        //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> origin;
    
    //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> target;
    
    //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(transpose)) {
        
        //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        origin = origin_;
        
        //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        target = target_;
    } else {
        
        //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        origin = target_;
        
        //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        target = origin_;
    }
    
    //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long offsetLength = ((x10_long) ((((x10_long)1ll)) << (0x3f & (lgl))));
    
    //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets_ =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((offsetLength) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(origin->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> v1_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(origin->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> v2_tmp =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(origin->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template sort<x10_long,
    TPMGL(T) >(lgl, origin, target, values_, key_tmp, v1_tmp,
               v2_tmp);
    
    //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::del();
    
    //#line 171 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    v1_tmp->org::scalegraph::util::MemoryChunk<x10_long>::del();
    
    //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    v2_tmp->org::scalegraph::util::MemoryChunk<TPMGL(T)>::del();
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::makeOffset(origin, offsets_);
    
    //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long)1ll), ((x10_long) ((offsetLength) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T)>(offsets_, target, values_))));
    
    //#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(offsets) = offsets_;
    
    //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexes) = target;
    
    //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(values) = values_;
}
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_make(
                           org::scalegraph::util::MemoryChunk<x10_long> origin_,
                           org::scalegraph::util::MemoryChunk<x10_long> target_,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                           x10_int lgl, x10_boolean transpose)
{
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> this_; 
    this_->_constructor(origin_, target_, values_, lgl, transpose);
    return this_;
}



//#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c

//#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::simplify(
  x10_boolean removeDuplicates, x10_boolean removeSelfloops,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction) {
    
    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(removeDuplicates) && !(removeSelfloops)) {
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long dstIdx = ((x10_long)0ll);
    
    //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long cachedOffset = (*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                              ((x10_int)0));
    
    //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long i58291min58331 = ((x10_long)1ll);
    
    //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long i58291max58332 = ((x10_long) (((*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)2))))));
    
    //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
    {
        x10_long i58333;
        for (
             //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
             i58333 = i58291min58331; ((i58333) <= (i58291max58332));
             
             //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
             i58333 = ((x10_long) ((i58333) + (((x10_long)1ll)))))
        {
            
            //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i58334 = i58333;
            
            //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long off58325 = cachedOffset;
            
            //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long next58326 = (*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                   ((x10_long) ((i58334) + (((x10_long) (((x10_int)1)))))));
            
            //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long prev58327 = ((x10_long)-1ll);
            
            //#line 232 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long prev_idx58328 = ((x10_long)-1ll);
            
            //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long ei58329;
                for (
                     //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                     ei58329 = off58325; ((ei58329) < (next58326));
                     ) {
                    
                    //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long v58330 = (*this)->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        ei58329);
                    
                    //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
                    if (removeSelfloops && (x10aux::struct_equals(v58330,
                                                                  i58334)))
                    {
                        
                        //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        ei58329 = ((x10_long) ((ei58329) + (((x10_long)1ll))));
                    } else 
                    //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
                    if (removeDuplicates && (x10aux::struct_equals(v58330,
                                                                   prev58327)))
                    {
                        
                        //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
                        {
                            for (
                                 //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                 ei58329 = ((x10_long) ((ei58329) + (((x10_long)1ll))));
                                 ((ei58329) < (next58326));
                                 
                                 //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                 ei58329 = ((x10_long) ((ei58329) + (((x10_long)1ll)))))
                            {
                                
                                //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
                                if ((!x10aux::struct_equals((*this)->
                                                              FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                              ei58329),
                                                            prev58327)))
                                {
                                    
                                    //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.Branch_c
                                    break;
                                }
                                
                            }
                        }
                        
                        //#line 240 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
                        (*this)->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                          ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1)))))),
                          x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                            (*this)->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                              prev_idx58328, ((x10_long) ((ei58329) - (prev_idx58328))))));
                        
                        //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.Branch_c
                        continue;
                    } else {
                        
                        //#line 243 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        prev58327 = v58330;
                        
                        //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        prev_idx58328 = ei58329;
                        
                        //#line 245 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
                        (*this)->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                          dstIdx, v58330);
                        
                        //#line 246 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
                        (*this)->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                          dstIdx, (*this)->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                    ei58329));
                        
                        //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                        
                        //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        ei58329 = ((x10_long) ((ei58329) + (((x10_long)1ll))));
                    }
                    
                }
            }
            
            //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
            cachedOffset = next58326;
            
            //#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            (*this)->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              ((x10_long) ((i58334) + (((x10_long) (((x10_int)1)))))),
              dstIdx);
        }
    }
    
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::SparseMatrix<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::SparseMatrix<TPMGL(T)>::toString(
  ) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.blas.SparseMatrix:"), x10aux::makeStringLit(" offsets=")), (*this)->
                                                                                                                                                                                                                                                                                 FMGL(offsets)), x10aux::makeStringLit(" vertexes=")), (*this)->
                                                                                                                                                                                                                                                                                                                                         FMGL(vertexes)), x10aux::makeStringLit(" values=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                FMGL(values));
    
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::blas::SparseMatrix<TPMGL(T)>::hashCode(
  ) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::hashCode())));
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::SparseMatrix<TPMGL(T)>::equals(
             x10aux::class_cast<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other));
    
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::equals(
  org::scalegraph::blas::SparseMatrix<TPMGL(T)> other) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(offsets),
                                  other->FMGL(offsets))) &&
    (x10aux::struct_equals((*this)->FMGL(vertexes), other->
                                                      FMGL(vertexes))) &&
    (x10aux::struct_equals((*this)->FMGL(values), other->
                                                    FMGL(values)));
    
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other));
    
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_struct_equals(
  org::scalegraph::blas::SparseMatrix<TPMGL(T)> other) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(offsets),
                                  other->FMGL(offsets))) &&
    (x10aux::struct_equals((*this)->FMGL(vertexes), other->
                                                      FMGL(vertexes))) &&
    (x10aux::struct_equals((*this)->FMGL(values), other->
                                                    FMGL(values)));
    
}

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>
  org::scalegraph::blas::SparseMatrix<TPMGL(T)>::org__scalegraph__blas__SparseMatrix____this__org__scalegraph__blas__SparseMatrix(
  ) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_serialize(org::scalegraph::blas::SparseMatrix<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(offsets));
    buf.write(this_->FMGL(vertexes));
    buf.write(this_->FMGL(values));
    
}

template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(offsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(vertexes) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(values) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
}


template<class TPMGL(T)> x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*>
  org::scalegraph::blas::SparseMatrix<void>::makeReplica(org::scalegraph::blas::SparseMatrix<TPMGL(T)> sparseMatrix,
                                                         x10::util::Team* team)
{
    
    //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int root = x10aux::nullCheck(x10aux::nullCheck(team)->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long numVerts = sparseMatrix->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::size();
    
    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = sparseMatrix->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::size();
    
    //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* > ref_matrix =
      x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* >::_make(x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::_make(sparseMatrix));
    
    //#line 200 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::PlaceLocalHandle<void>::template make<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* >(
             x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*> >(sizeof(org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T)>(numVerts, numEdges, team, ref_matrix, root))));
    
}
#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS

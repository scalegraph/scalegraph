#ifndef __ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H
#define __ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_NODEPS
#include <org/scalegraph/blas/DistSparseMatrix__Data.h>
#undef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__DATA_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace org { namespace scalegraph { namespace util { 
class Dist2D;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__StoV;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__DtoV;
} } } } 
namespace x10 { namespace lang { 
class Long;
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

template<class TPMGL(T)> class DistSparseMatrix   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> _alloc(){org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> t; return t; }
    
    x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>
      FMGL(data);
    
    void _constructor(org::scalegraph::util::Dist2D dist, x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* init);
    
    static org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> _make(
             org::scalegraph::util::Dist2D dist, x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* init);
    
    org::scalegraph::util::Dist2D dist();
    org::scalegraph::graph::id::IdStruct ids();
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> __apply();
    void del();
    void simplify(x10_boolean removeDuplicates, x10_boolean removeSelfloops,
                  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction);
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other);
    org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> org__scalegraph__blas__DistSparseMatrix____this__org__scalegraph__blas__DistSparseMatrix(
      );
    
    static void _serialize(org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::blas::DistSparseMatrix<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.blas.DistSparseMatrix";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class DistSparseMatrix<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static void makeReplica(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> attribute,
                                                     x10::array::Array<x10::util::Team*>* teamArray);
    
    
};

} } } 
#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H

namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 

#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_NODEPS
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/blas/DistSparseMatrix__Data.h>
#include <x10/lang/Cell.h>
#include <org/scalegraph/util/Dist2D.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <x10/util/Team.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Int.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/array/Array.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/Zero.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/graph/id/Twod__StoV.h>
#include <org/scalegraph/graph/id/Twod__DtoV.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_GENERICS
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_GENERICS
#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_GENERICS
#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_IMPLEMENTATION
#include <org/scalegraph/blas/DistSparseMatrix.h>

#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_DistSparseMatrix__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::template itable <org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* __apply() {
        
        //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > r =
          x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >::__apply(x10aux::nullCheck(init));
        
        //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::_make(org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_make(dist,
                                                                                                                                                               r->org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::get1(),
                                                                                                                                                               r->org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::get2()));
        
    }
    
    // captured environment
    x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* init;
    org::scalegraph::util::Dist2D dist;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->init);
        buf.write(this->dist);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* that_init = buf.read<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >*>();
        org::scalegraph::util::Dist2D that_dist = buf.read<org::scalegraph::util::Dist2D>();
        org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >(that_init, that_dist);
        return this_;
    }
    
    org_scalegraph_blas_DistSparseMatrix__closure__1(x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* init, org::scalegraph::util::Dist2D dist) : init(init), dist(dist) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:47-50";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::template itable <org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) > >org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >::__apply, &org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >, &org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_DistSparseMatrix__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >::template itable <org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > __apply() {
        
        //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::_make(x10aux::nullCheck(data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
                                                                                                                                                   FMGL(ids),
                                                                                                                                                 x10aux::nullCheck(data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
                                                                                                                                                   FMGL(matrix));
        
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> data_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->data_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> that_data_ = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >();
        org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >(that_data_);
        return this_;
    }
    
    org_scalegraph_blas_DistSparseMatrix__closure__3(x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> data_) : data_(data_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:62";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >::template itable <org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) > >org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >::__apply, &org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >, &org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_DistSparseMatrix__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_int z = ((x10_int) ((x10aux::nullCheck(x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::parentTeam())->role())->x10::array::Array<x10_int>::__apply(
                                   ((x10_int)0))) / x10aux::zeroCheck(x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::allTeam())->size())));
        
        //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
        if (((z) > (((x10_int)0)))) {
            
            //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::Place copy_from = dist->org::scalegraph::util::Dist2D::getCongruentPlace(
                                           ((x10_int)0));
            
            //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > r =
              x10::lang::Runtime::template evalAt<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >(
                copy_from, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >(sizeof(org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T)>)))org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T)>(data_))),
                x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
            
            //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__set(
              org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_make(dist,
                                                                             r->org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::get1(),
                                                                             r->org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::get2()));
        }
        
    }
    
    // captured environment
    org::scalegraph::util::Dist2D dist;
    x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> data_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->dist);
        buf.write(this->data_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::Dist2D that_dist = buf.read<org::scalegraph::util::Dist2D>();
        x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> that_data_ = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >();
        org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >(that_dist, that_data_);
        return this_;
    }
    
    org_scalegraph_blas_DistSparseMatrix__closure__2(org::scalegraph::util::Dist2D dist, x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> data_) : dist(dist), data_(data_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:58-65";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) > >org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >::__apply, &org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_DistSparseMatrix__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D dist = x10aux::nullCheck(saved_this->
                                                                 FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
                                               FMGL(dist);
        
        //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> m = x10aux::nullCheck(saved_this->
                                                                              FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
                                                            FMGL(matrix);
        
        //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> values_ =
          m->FMGL(values);
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids = x10aux::nullCheck(saved_this->
                                                                       FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
                                                     FMGL(ids);
        
        //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::Twod__StoV StoV = org::scalegraph::graph::id::Twod__StoV::_make(ids,
                                                                                                    dist->org::scalegraph::util::Dist2D::c());
        
        //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::Twod__DtoV DtoV = org::scalegraph::graph::id::Twod__DtoV::_make(ids,
                                                                                                    dist->org::scalegraph::util::Dist2D::r());
        
        //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long dstIdx = ((x10_long)0ll);
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long cachedOffset = m->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  ((x10_int)0));
        
        //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
        if (!(ids->FMGL(transpose))) {
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i50393min50430 = ((x10_long)0ll);
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i50393max50431 = ((x10_long) ((m->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)2))))));
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i50432;
                for (
                     //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i50432 = i50393min50430; ((i50432) <= (i50393max50431));
                     
                     //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i50432 = ((x10_long) ((i50432) + (((x10_long)1ll)))))
                {
                    
                    //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i50433 = i50432;
                    
                    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off50424 = cachedOffset;
                    
                    //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next50425 = m->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           ((x10_long) ((i50433) + (((x10_long) (((x10_int)1)))))));
                    
                    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev50426 = ((x10_long)-1ll);
                    
                    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx50427 = ((x10_long)-1ll);
                    
                    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei50428;
                        for (
                             //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei50428 = off50424; ((ei50428) < (next50425));
                             ) {
                            
                            //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v50429 = m->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                ei50428);
                            
                            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            v50429),
                                                                          StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            i50433))))
                            {
                                
                                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei50428 = ((x10_long) ((ei50428) + (((x10_long)1ll))));
                            } else 
                            //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v50429,
                                                                           prev50426)))
                            {
                                
                                //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei50428 = ((x10_long) ((ei50428) + (((x10_long)1ll))));
                                         ((ei50428) < (next50425));
                                         
                                         //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei50428 = ((x10_long) ((ei50428) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals(m->
                                                                      FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                      ei50428),
                                                                    prev50426)))
                                        {
                                            
                                            //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                                m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                                  ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1)))))),
                                  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                    m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                      prev_idx50427, ((x10_long) ((ei50428) - (prev_idx50427))))));
                                
                                //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev50426 = v50429;
                                
                                //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx50427 = ei50428;
                                
                                //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                                m->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                                  dstIdx, v50429);
                                
                                //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                                values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                                  dstIdx, values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                            ei50428));
                                
                                //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei50428 = ((x10_long) ((ei50428) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next50425;
                    
                    //#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                    m->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((i50433) + (((x10_long) (((x10_int)1)))))),
                      dstIdx);
                }
            }
            
        } else {
            
            //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i50409min50440 = ((x10_long)0ll);
            
            //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i50409max50441 = ((x10_long) ((m->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)2))))));
            
            //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i50442;
                for (
                     //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i50442 = i50409min50440; ((i50442) <= (i50409max50441));
                     
                     //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i50442 = ((x10_long) ((i50442) + (((x10_long)1ll)))))
                {
                    
                    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i50443 = i50442;
                    
                    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off50434 = cachedOffset;
                    
                    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next50435 = m->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           ((x10_long) ((i50443) + (((x10_long) (((x10_int)1)))))));
                    
                    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev50436 = ((x10_long)-1ll);
                    
                    //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx50437 = ((x10_long)-1ll);
                    
                    //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei50438;
                        for (
                             //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei50438 = off50434; ((ei50438) < (next50435));
                             ) {
                            
                            //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v50439 = m->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                ei50438);
                            
                            //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            v50439),
                                                                          DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            i50443))))
                            {
                                
                                //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei50438 = ((x10_long) ((ei50438) + (((x10_long)1ll))));
                            } else 
                            //#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v50439,
                                                                           prev50436)))
                            {
                                
                                //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei50438 = ((x10_long) ((ei50438) + (((x10_long)1ll))));
                                         ((ei50438) < (next50435));
                                         
                                         //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei50438 = ((x10_long) ((ei50438) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals(m->
                                                                      FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                      ei50438),
                                                                    prev50436)))
                                        {
                                            
                                            //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                                m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                                  ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1)))))),
                                  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                    m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                      prev_idx50437, ((x10_long) ((ei50438) - (prev_idx50437))))));
                                
                                //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev50436 = v50439;
                                
                                //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx50437 = ei50438;
                                
                                //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                                m->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                                  dstIdx, v50439);
                                
                                //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                                values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                                  dstIdx, values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                            ei50438));
                                
                                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei50438 = ((x10_long) ((ei50438) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next50435;
                    
                    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
                    m->FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((i50443) + (((x10_long) (((x10_int)1)))))),
                      dstIdx);
                }
            }
            
        }
        
    }
    
    // captured environment
    org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> saved_this;
    x10_boolean removeSelfloops;
    x10_boolean removeDuplicates;
    x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->removeSelfloops);
        buf.write(this->removeDuplicates);
        buf.write(this->reduction);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> that_saved_this = buf.read<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >();
        x10_boolean that_removeSelfloops = buf.read<x10_boolean>();
        x10_boolean that_removeDuplicates = buf.read<x10_boolean>();
        x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* that_reduction = buf.read<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>*>();
        org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >(that_saved_this, that_removeSelfloops, that_removeDuplicates, that_reduction);
        return this_;
    }
    
    org_scalegraph_blas_DistSparseMatrix__closure__4(org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> saved_this, x10_boolean removeSelfloops, x10_boolean removeDuplicates, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction) : saved_this(saved_this), removeSelfloops(removeSelfloops), removeDuplicates(removeDuplicates), reduction(reduction) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:98-169";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) > >org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >::__apply, &org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX__CLOSURE__4_CLOSURE
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix_ibox0 : public x10::lang::IBox<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<DistSparseMatrix_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> x10::lang::Any::itable<DistSparseMatrix_ibox0<TPMGL(T)> >  DistSparseMatrix_ibox0<TPMGL(T)>::itable(&DistSparseMatrix_ibox0<TPMGL(T)>::equals, &DistSparseMatrix_ibox0<TPMGL(T)>::hashCode, &DistSparseMatrix_ibox0<TPMGL(T)>::toString, &DistSparseMatrix_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_itable_0(&org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::equals, &org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::hashCode, &org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::toString, &org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::blas::DistSparseMatrix_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >())};

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::Dist2D dist, x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* init) {
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Empty_c
    ;
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> data_ =
      x10::lang::PlaceLocalHandle<void>::template make<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* >(
        x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::allTeam())->placeGroup(),
        reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >(sizeof(org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T)>)))org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T)>(init, dist))));
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(data) = data_;
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int cycles = ((x10_int) ((x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::parentTeam())->size()) / x10aux::zeroCheck(x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::allTeam())->size())));
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(cycles, ((x10_int)0)))) {
        
        //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::allTeam())->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T)>)))org_scalegraph_blas_DistSparseMatrix__closure__2<TPMGL(T)>(dist, data_))));
}
template<class TPMGL(T)> org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_make(
                           org::scalegraph::util::Dist2D dist,
                           x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* init)
{
    org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this_; 
    this_->_constructor(dist, init);
    return this_;
}



//#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::Dist2D org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::dist(
  ) {
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
             FMGL(dist);
    
}

//#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::id::IdStruct
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::ids(
  ) {
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
             FMGL(ids);
    
}

//#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::__apply(
  ) {
    
    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
             FMGL(matrix);
    
}

//#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::del(
  ) {
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> cache =
      x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply();
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__set(
      org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_make(cache->
                                                                       FMGL(dist),
                                                                     cache->
                                                                       FMGL(ids),
                                                                     x10aux::zeroValue<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >()));
}

//#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c

//#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::simplify(
  x10_boolean removeDuplicates, x10_boolean removeSelfloops,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction) {
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(removeDuplicates) && !(removeSelfloops)) {
        
        //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                            FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply())->x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >::__apply()->
                                          FMGL(dist)->org::scalegraph::util::Dist2D::allTeam())->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T)>)))org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T)>((*this), removeSelfloops, removeDuplicates, reduction))));
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::toString(
  ) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.blas.DistSparseMatrix:"), x10aux::makeStringLit(" data=")), (*this)->
                                                                                                                                                                          FMGL(data));
    
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::hashCode(
  ) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::hashCode())));
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::equals(
             x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other));
    
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::equals(
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                         FMGL(data)));
    
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other));
    
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_struct_equals(
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                         FMGL(data)));
    
}

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::org__scalegraph__blas__DistSparseMatrix____this__org__scalegraph__blas__DistSparseMatrix(
  ) {
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_serialize(org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(data));
    
}

template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(data) = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >();
}


template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<void>::makeReplica(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> attribute,
                                                                                         x10::array::Array<x10::util::Team*>* teamArray)
{
 
}
#endif // ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_BLAS_DISTSPARSEMATRIX_H_NODEPS

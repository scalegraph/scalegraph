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
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace array { 
class Region;
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
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Boolean.h>
#include <x10/array/Region.h>
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
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
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
        
        //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > r =
          x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >::__apply(x10aux::nullCheck(init));
        
        //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* alloc63950 =
               ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >()))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124447 =
              (__extension__ ({
                
                //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc124448 =
                   org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D dist124444 =
                  dist;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct ids124445 =
                  (__extension__ ({
                    r->FMGL(val1);
                }))
                ;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix124446 =
                  (__extension__ ({
                    r->FMGL(val2);
                }))
                ;
                
                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124448->FMGL(dist) = dist124444;
                
                //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124448->FMGL(ids) = ids124445;
                
                //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124448->FMGL(matrix) = matrix124446;
                alloc124448;
            }))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            alloc63950->FMGL(value) = x124447;
            alloc63950;
        }))
        ;
        
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:47-50";
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
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > alloc63951 =
               org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::_alloc();
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::id::IdStruct val124449 = (__extension__ ({
                                                                 
                                                                 //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                 x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124450 =
                                                                   data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                                 x10aux::nullCheck(this124450)->
                                                                   FMGL(value);
                                                             }))
                                                             ->
                                                               FMGL(ids);
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::SparseMatrix<TPMGL(T)> val124451 =
              (__extension__ ({
                  
                  //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124452 =
                    data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                  x10aux::nullCheck(this124452)->FMGL(value);
              }))
              ->FMGL(matrix);
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc63951->FMGL(val1) = val124449;
            
            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc63951->FMGL(val2) = val124451;
            alloc63951;
        }))
        ;
        
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:62";
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
        
        //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_int z = ((x10_int) (((__extension__ ({
            
            //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this122786 = x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::parentTeam())->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret122787;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret122788; __ret122788: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this122786)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122787 = (x10aux::nullCheck(this122786)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret122788_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this122786)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122787 = (x10aux::nullCheck(this122786)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this122786)->
                                                                                                                    FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret122788_end_;
                }
                
            }goto __ret122788_end_; __ret122788_end_: ;
            }
            ret122787;
            }))
            ) / x10aux::zeroCheck(x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::allTeam())->size())));
            
        
        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
        if (((z) > (((x10_int)0)))) {
            
            //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::Place copy_from = dist->org::scalegraph::util::Dist2D::getCongruentPlace(
                                           ((x10_int)0));
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > r =
              x10::lang::Runtime::template evalAt<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >(
                copy_from, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >(sizeof(org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T)>)))org_scalegraph_blas_DistSparseMatrix__closure__3<TPMGL(T)>(data_))),
                x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
            
            //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124458 =
              data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124459 =
              (__extension__ ({
                
                //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc124460 =
                   org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D dist124453 =
                  dist;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct ids124454 =
                  (__extension__ ({
                    r->FMGL(val1);
                }))
                ;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix124455 =
                  (__extension__ ({
                    r->FMGL(val2);
                }))
                ;
                
                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124460->FMGL(dist) = dist124453;
                
                //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124460->FMGL(ids) = ids124454;
                
                //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124460->FMGL(matrix) = matrix124455;
                alloc124460;
            }))
            ;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124456 =
              x124459;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> ret124457;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this124458)->FMGL(value) = x124456;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret124457 = x124456;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret124457;
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
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:58-65";
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
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D dist = (__extension__ ({
                                                 
                                                 //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                 x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122821 =
                                                   saved_this->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                 x10aux::nullCheck(this122821)->
                                                   FMGL(value);
                                             }))
                                             ->FMGL(dist);
        
        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> m = (__extension__ ({
                                                              
                                                              //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122822 =
                                                                saved_this->
                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                              x10aux::nullCheck(this122822)->
                                                                FMGL(value);
                                                          }))
                                                          ->
                                                            FMGL(matrix);
        
        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> values_ =
          m->FMGL(values);
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids = (__extension__ ({
                                                       
                                                       //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                       x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122823 =
                                                         saved_this->
                                                           FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                       x10aux::nullCheck(this122823)->
                                                         FMGL(value);
                                                   }))
                                                   ->FMGL(ids);
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::Twod__StoV StoV =  org::scalegraph::graph::id::Twod__StoV::_alloc();
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10ConstructorCall_c
        (StoV)->::org::scalegraph::graph::id::Twod__StoV::_constructor(
          ids, dist->org::scalegraph::util::Dist2D::c());
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::Twod__DtoV DtoV =  org::scalegraph::graph::id::Twod__DtoV::_alloc();
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10ConstructorCall_c
        (DtoV)->::org::scalegraph::graph::id::Twod__DtoV::_constructor(
          ids, dist->org::scalegraph::util::Dist2D::r());
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long dstIdx = ((x10_long)0ll);
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10_long cachedOffset = (__extension__ ({
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this124367 =
              m->FMGL(offsets);
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
            ;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret124368;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this124367->FMGL(data)).isValid()))
                {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (this124367->
                                                                                              FMGL(data)->
                                                                                              FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret124368 = (this124367->FMGL(data))[((x10_int)0)];
            ret124368;
        }))
        ;
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
        if (!(ids->FMGL(transpose))) {
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i63955max124501 = ((x10_long) (((__extension__ ({
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this124502 =
                  m->FMGL(offsets);
                this124502->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)2))))));
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i124503;
                for (
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i124503 = ((x10_long)0ll); ((i124503) <= (i63955max124501));
                     
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i124503 = ((x10_long) ((i124503) + (((x10_long)1ll)))))
                {
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i124504 = i124503;
                    
                    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off124486 = cachedOffset;
                    
                    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next124487 = (__extension__ ({
                        
                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this124488 =
                          m->FMGL(offsets);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index124489 = ((x10_long) ((i124504) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret124490;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this124488->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index124489) < (((x10_long) (((x10_int)0))))) ||
                                ((index124489) >= (this124488->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124489), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret124490 = (this124488->FMGL(data))[index124489];
                        ret124490;
                    }))
                    ;
                    
                    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev124491 = ((x10_long)-1ll);
                    
                    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx124492 = ((x10_long)-1ll);
                    
                    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei124493;
                        for (
                             //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei124493 = off124486; ((ei124493) < (next124487));
                             ) {
                            
                            //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v124494 = (__extension__ ({
                                
                                //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124495 =
                                  m->FMGL(vertexes);
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124496 = ei124493;
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124497;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124495->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124496) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124496) >= (this124495->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124496), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124497 = (this124495->
                                               FMGL(data))[index124496];
                                ret124497;
                            }))
                            ;
                            
                            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            v124494),
                                                                          StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            i124504))))
                            {
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124493 = ((x10_long) ((ei124493) + (((x10_long)1ll))));
                            } else 
                            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v124494,
                                                                           prev124491)))
                            {
                                
                                //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124493 = ((x10_long) ((ei124493) + (((x10_long)1ll))));
                                         ((ei124493) < (next124487));
                                         
                                         //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124493 = ((x10_long) ((ei124493) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals((__extension__ ({
                                                                        
                                                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                        org::scalegraph::util::MemoryChunk<x10_long> this124498 =
                                                                          m->
                                                                            FMGL(vertexes);
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long index124499 =
                                                                          ei124493;
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long ret124500;
                                                                        {
                                                                            
                                                                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (!((this124498->
                                                                                     FMGL(data)).isValid()))
                                                                            {
                                                                                
                                                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (((index124499) < (((x10_long) (((x10_int)0))))) ||
                                                                                ((index124499) >= (this124498->
                                                                                                     FMGL(data)->
                                                                                                     FMGL(size))))
                                                                            {
                                                                                
                                                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124499), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                        }
                                                                        
                                                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret124500 =
                                                                          (this124498->
                                                                             FMGL(data))[index124499];
                                                                        ret124500;
                                                                    }))
                                                                    ,
                                                                    prev124491)))
                                        {
                                            
                                            //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<TPMGL(T)> this124469 =
                                  m->FMGL(values);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124470 = ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124471 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                  m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                    prev_idx124492, ((x10_long) ((ei124493) - (prev_idx124492)))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124472;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124469->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124470) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124470) >= (this124469->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124470), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124469->FMGL(data)).set(index124470, value124471);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124472 = value124471;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124472;
                                
                                //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev124491 = v124494;
                                
                                //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx124492 = ei124493;
                                
                                //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124473 =
                                  m->FMGL(vertexes);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124474 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long value124475 = v124494;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124476;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124473->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124474) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124474) >= (this124473->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124474), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124473->FMGL(data)).set(index124474, value124475);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124476 = value124475;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124476;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124477 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124478 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index124479 =
                                      ei124493;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    TPMGL(T) ret124480;
                                    {
                                        
                                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((values_->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index124479) < (((x10_long) (((x10_int)0))))) ||
                                            ((index124479) >= (values_->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124479), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret124480 = (values_->
                                                   FMGL(data))[index124479];
                                    ret124480;
                                }))
                                ;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124481;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((values_->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124477) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124477) >= (values_->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124477), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (values_->FMGL(data)).set(index124477, value124478);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124481 = value124478;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124481;
                                
                                //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124493 = ((x10_long) ((ei124493) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next124487;
                    
                    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this124482 =
                      m->FMGL(offsets);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index124483 = ((x10_long) ((i124504) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value124484 = dstIdx;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret124485;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this124482->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index124483) < (((x10_long) (((x10_int)0))))) ||
                            ((index124483) >= (this124482->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124483), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this124482->FMGL(data)).set(index124483, value124484);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret124485 = value124484;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret124485;
                }
            }
            
        } else {
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i63973max124537 = ((x10_long) (((__extension__ ({
                
                //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this124538 =
                  m->FMGL(offsets);
                this124538->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)2))))));
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i124539;
                for (
                     //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i124539 = ((x10_long)0ll); ((i124539) <= (i63973max124537));
                     
                     //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i124539 = ((x10_long) ((i124539) + (((x10_long)1ll)))))
                {
                    
                    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i124540 = i124539;
                    
                    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off124522 = cachedOffset;
                    
                    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next124523 = (__extension__ ({
                        
                        //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this124524 =
                          m->FMGL(offsets);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index124525 = ((x10_long) ((i124540) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret124526;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this124524->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index124525) < (((x10_long) (((x10_int)0))))) ||
                                ((index124525) >= (this124524->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124525), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret124526 = (this124524->FMGL(data))[index124525];
                        ret124526;
                    }))
                    ;
                    
                    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev124527 = ((x10_long)-1ll);
                    
                    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx124528 = ((x10_long)-1ll);
                    
                    //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei124529;
                        for (
                             //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei124529 = off124522; ((ei124529) < (next124523));
                             ) {
                            
                            //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v124530 = (__extension__ ({
                                
                                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124531 =
                                  m->FMGL(vertexes);
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124532 = ei124529;
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124533;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124531->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124532) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124532) >= (this124531->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124532), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124533 = (this124531->
                                               FMGL(data))[index124532];
                                ret124533;
                            }))
                            ;
                            
                            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            v124530),
                                                                          DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            i124540))))
                            {
                                
                                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124529 = ((x10_long) ((ei124529) + (((x10_long)1ll))));
                            } else 
                            //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v124530,
                                                                           prev124527)))
                            {
                                
                                //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124529 = ((x10_long) ((ei124529) + (((x10_long)1ll))));
                                         ((ei124529) < (next124523));
                                         
                                         //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124529 = ((x10_long) ((ei124529) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals((__extension__ ({
                                                                        
                                                                        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                        org::scalegraph::util::MemoryChunk<x10_long> this124534 =
                                                                          m->
                                                                            FMGL(vertexes);
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long index124535 =
                                                                          ei124529;
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long ret124536;
                                                                        {
                                                                            
                                                                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (!((this124534->
                                                                                     FMGL(data)).isValid()))
                                                                            {
                                                                                
                                                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (((index124535) < (((x10_long) (((x10_int)0))))) ||
                                                                                ((index124535) >= (this124534->
                                                                                                     FMGL(data)->
                                                                                                     FMGL(size))))
                                                                            {
                                                                                
                                                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124535), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                        }
                                                                        
                                                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret124536 =
                                                                          (this124534->
                                                                             FMGL(data))[index124535];
                                                                        ret124536;
                                                                    }))
                                                                    ,
                                                                    prev124527)))
                                        {
                                            
                                            //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<TPMGL(T)> this124505 =
                                  m->FMGL(values);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124506 = ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124507 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                  m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                    prev_idx124528, ((x10_long) ((ei124529) - (prev_idx124528)))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124508;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124505->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124506) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124506) >= (this124505->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124506), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124505->FMGL(data)).set(index124506, value124507);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124508 = value124507;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124508;
                                
                                //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev124527 = v124530;
                                
                                //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx124528 = ei124529;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124509 =
                                  m->FMGL(vertexes);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124510 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long value124511 = v124530;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124512;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124509->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124510) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124510) >= (this124509->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124510), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124509->FMGL(data)).set(index124510, value124511);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124512 = value124511;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124512;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124513 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124514 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index124515 =
                                      ei124529;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    TPMGL(T) ret124516;
                                    {
                                        
                                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((values_->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index124515) < (((x10_long) (((x10_int)0))))) ||
                                            ((index124515) >= (values_->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124515), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret124516 = (values_->
                                                   FMGL(data))[index124515];
                                    ret124516;
                                }))
                                ;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124517;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((values_->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124513) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124513) >= (values_->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124513), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (values_->FMGL(data)).set(index124513, value124514);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124517 = value124514;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124517;
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124529 = ((x10_long) ((ei124529) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next124523;
                    
                    //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this124518 =
                      m->FMGL(offsets);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index124519 = ((x10_long) ((i124540) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value124520 = dstIdx;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret124521;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this124518->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index124519) < (((x10_long) (((x10_int)0))))) ||
                            ((index124519) >= (this124518->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124519), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this124518->FMGL(data)).set(index124519, value124520);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret124521 = value124520;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret124521;
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10:98-169";
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

//#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::Dist2D dist, x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >* init) {
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> data_ =
      x10::lang::PlaceLocalHandle<void>::template make<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* >(
        x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::allTeam())->placeGroup(),
        reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*> >(sizeof(org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T)>)))org_scalegraph_blas_DistSparseMatrix__closure__1<TPMGL(T)>(init, dist))));
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(data) = data_;
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int cycles = ((x10_int) ((x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::parentTeam())->size()) / x10aux::zeroCheck(x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::allTeam())->size())));
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(cycles, ((x10_int)0)))) {
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
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



//#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::Dist2D org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::dist(
  ) {
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (__extension__ ({
               
               //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122805 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this122805)->FMGL(value);
           }))
           ->FMGL(dist);
    
}

//#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::id::IdStruct
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::ids(
  ) {
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (__extension__ ({
               
               //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122806 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this122806)->FMGL(value);
           }))
           ->FMGL(ids);
    
}

//#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::__apply(
  ) {
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (__extension__ ({
               
               //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122807 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this122807)->FMGL(value);
           }))
           ->FMGL(matrix);
    
}

//#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::del(
  ) {
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> cache =
      (__extension__ ({
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122808 =
          (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
        x10aux::nullCheck(this122808)->FMGL(value);
    }))
    ;
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124466 =
      (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
    
    //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124467 =
      (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc124468 =
           org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D dist124461 = cache->
                                                     FMGL(dist);
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids124462 = cache->
                                                           FMGL(ids);
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix124463 =
          x10aux::zeroValue<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc124468->FMGL(dist) = dist124461;
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc124468->FMGL(ids) = ids124462;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc124468->FMGL(matrix) = matrix124463;
        alloc124468;
    }))
    ;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124464 =
      x124467;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> ret124465;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this124466)->FMGL(value) = x124464;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
    ret124465 = x124464;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
    ret124465;
}

//#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c

//#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::simplify(
  x10_boolean removeDuplicates, x10_boolean removeSelfloops,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction) {
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(removeDuplicates) && !(removeSelfloops)) {
        
        //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck((__extension__ ({
                                            
                                            //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122820 =
                                              (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                            x10aux::nullCheck(this122820)->
                                              FMGL(value);
                                        }))
                                        ->FMGL(dist)->org::scalegraph::util::Dist2D::allTeam())->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T)>)))org_scalegraph_blas_DistSparseMatrix__closure__4<TPMGL(T)>((*this), removeSelfloops, removeDuplicates, reduction))));
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::toString(
  ) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.blas.DistSparseMatrix:"), x10aux::makeStringLit(" data=")), (*this)->
                                                                                                                                                                          FMGL(data));
    
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::hashCode(
  ) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::hashCode())));
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this124441 =
          (*this);
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other124440 =
          x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other);
        (x10aux::struct_equals(this124441->FMGL(data), other124440->
                                                         FMGL(data)));
    }))
    ;
    
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::equals(
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                         FMGL(data)));
    
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this124443 =
          (*this);
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other124442 =
          x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other);
        (x10aux::struct_equals(this124443->FMGL(data), other124442->
                                                         FMGL(data)));
    }))
    ;
    
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_struct_equals(
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                         FMGL(data)));
    
}

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::org__scalegraph__blas__DistSparseMatrix____this__org__scalegraph__blas__DistSparseMatrix(
  ) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10Return_c
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

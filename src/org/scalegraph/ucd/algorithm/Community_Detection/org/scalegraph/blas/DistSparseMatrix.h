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
            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* alloc65502 =
               ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >()))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124467 =
              (__extension__ ({
                
                //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc124468 =
                   org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D dist124464 =
                  dist;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct ids124465 =
                  (__extension__ ({
                    r->FMGL(val1);
                }))
                ;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix124466 =
                  (__extension__ ({
                    r->FMGL(val2);
                }))
                ;
                
                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124468->FMGL(dist) = dist124464;
                
                //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124468->FMGL(ids) = ids124465;
                
                //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124468->FMGL(matrix) = matrix124466;
                alloc124468;
            }))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            alloc65502->FMGL(value) = x124467;
            alloc65502;
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
            org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > alloc65503 =
               org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::_alloc();
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::id::IdStruct val124469 = (__extension__ ({
                                                                 
                                                                 //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                 x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124470 =
                                                                   data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                                 x10aux::nullCheck(this124470)->
                                                                   FMGL(value);
                                                             }))
                                                             ->
                                                               FMGL(ids);
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::SparseMatrix<TPMGL(T)> val124471 =
              (__extension__ ({
                  
                  //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124472 =
                    data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                  x10aux::nullCheck(this124472)->FMGL(value);
              }))
              ->FMGL(matrix);
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc65503->FMGL(val1) = val124469;
            
            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc65503->FMGL(val2) = val124471;
            alloc65503;
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
            x10::array::Array<x10_int>* this122806 = x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::parentTeam())->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret122807;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret122808; __ret122808: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this122806)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122807 = (x10aux::nullCheck(this122806)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret122808_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this122806)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122807 = (x10aux::nullCheck(this122806)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this122806)->
                                                                                                                    FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret122808_end_;
                }
                
            }goto __ret122808_end_; __ret122808_end_: ;
            }
            ret122807;
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
            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124478 =
              data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124479 =
              (__extension__ ({
                
                //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc124480 =
                   org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D dist124473 =
                  dist;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct ids124474 =
                  (__extension__ ({
                    r->FMGL(val1);
                }))
                ;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix124475 =
                  (__extension__ ({
                    r->FMGL(val2);
                }))
                ;
                
                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124480->FMGL(dist) = dist124473;
                
                //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124480->FMGL(ids) = ids124474;
                
                //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc124480->FMGL(matrix) = matrix124475;
                alloc124480;
            }))
            ;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124476 =
              x124479;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> ret124477;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this124478)->FMGL(value) = x124476;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret124477 = x124476;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret124477;
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
                                                 x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122841 =
                                                   saved_this->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                 x10aux::nullCheck(this122841)->
                                                   FMGL(value);
                                             }))
                                             ->FMGL(dist);
        
        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> m = (__extension__ ({
                                                              
                                                              //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122842 =
                                                                saved_this->
                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                              x10aux::nullCheck(this122842)->
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
                                                       x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122843 =
                                                         saved_this->
                                                           FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                       x10aux::nullCheck(this122843)->
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
            org::scalegraph::util::MemoryChunk<x10_long> this124387 =
              m->FMGL(offsets);
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
            ;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret124388;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this124387->FMGL(data)).isValid()))
                {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (this124387->
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
            ret124388 = (this124387->FMGL(data))[((x10_int)0)];
            ret124388;
        }))
        ;
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
        if (!(ids->FMGL(transpose))) {
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i65507max124521 = ((x10_long) (((__extension__ ({
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this124522 =
                  m->FMGL(offsets);
                this124522->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)2))))));
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i124523;
                for (
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i124523 = ((x10_long)0ll); ((i124523) <= (i65507max124521));
                     
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i124523 = ((x10_long) ((i124523) + (((x10_long)1ll)))))
                {
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i124524 = i124523;
                    
                    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off124506 = cachedOffset;
                    
                    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next124507 = (__extension__ ({
                        
                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this124508 =
                          m->FMGL(offsets);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index124509 = ((x10_long) ((i124524) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret124510;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this124508->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index124509) < (((x10_long) (((x10_int)0))))) ||
                                ((index124509) >= (this124508->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124509), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret124510 = (this124508->FMGL(data))[index124509];
                        ret124510;
                    }))
                    ;
                    
                    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev124511 = ((x10_long)-1ll);
                    
                    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx124512 = ((x10_long)-1ll);
                    
                    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei124513;
                        for (
                             //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei124513 = off124506; ((ei124513) < (next124507));
                             ) {
                            
                            //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v124514 = (__extension__ ({
                                
                                //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124515 =
                                  m->FMGL(vertexes);
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124516 = ei124513;
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124517;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124515->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124516) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124516) >= (this124515->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124516), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124517 = (this124515->
                                               FMGL(data))[index124516];
                                ret124517;
                            }))
                            ;
                            
                            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            v124514),
                                                                          StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            i124524))))
                            {
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124513 = ((x10_long) ((ei124513) + (((x10_long)1ll))));
                            } else 
                            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v124514,
                                                                           prev124511)))
                            {
                                
                                //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124513 = ((x10_long) ((ei124513) + (((x10_long)1ll))));
                                         ((ei124513) < (next124507));
                                         
                                         //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124513 = ((x10_long) ((ei124513) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals((__extension__ ({
                                                                        
                                                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                        org::scalegraph::util::MemoryChunk<x10_long> this124518 =
                                                                          m->
                                                                            FMGL(vertexes);
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long index124519 =
                                                                          ei124513;
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long ret124520;
                                                                        {
                                                                            
                                                                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (!((this124518->
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
                                                                            if (((index124519) < (((x10_long) (((x10_int)0))))) ||
                                                                                ((index124519) >= (this124518->
                                                                                                     FMGL(data)->
                                                                                                     FMGL(size))))
                                                                            {
                                                                                
                                                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124519), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                        }
                                                                        
                                                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret124520 =
                                                                          (this124518->
                                                                             FMGL(data))[index124519];
                                                                        ret124520;
                                                                    }))
                                                                    ,
                                                                    prev124511)))
                                        {
                                            
                                            //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<TPMGL(T)> this124489 =
                                  m->FMGL(values);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124490 = ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124491 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                  m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                    prev_idx124512, ((x10_long) ((ei124513) - (prev_idx124512)))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124492;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124489->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124490) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124490) >= (this124489->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124490), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124489->FMGL(data)).set(index124490, value124491);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124492 = value124491;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124492;
                                
                                //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev124511 = v124514;
                                
                                //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx124512 = ei124513;
                                
                                //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124493 =
                                  m->FMGL(vertexes);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124494 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long value124495 = v124514;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124496;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124493->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124494) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124494) >= (this124493->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124494), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124493->FMGL(data)).set(index124494, value124495);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124496 = value124495;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124496;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124497 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124498 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index124499 =
                                      ei124513;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    TPMGL(T) ret124500;
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
                                        if (((index124499) < (((x10_long) (((x10_int)0))))) ||
                                            ((index124499) >= (values_->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124499), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret124500 = (values_->
                                                   FMGL(data))[index124499];
                                    ret124500;
                                }))
                                ;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124501;
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
                                    if (((index124497) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124497) >= (values_->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124497), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (values_->FMGL(data)).set(index124497, value124498);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124501 = value124498;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124501;
                                
                                //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124513 = ((x10_long) ((ei124513) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next124507;
                    
                    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this124502 =
                      m->FMGL(offsets);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index124503 = ((x10_long) ((i124524) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value124504 = dstIdx;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret124505;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this124502->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index124503) < (((x10_long) (((x10_int)0))))) ||
                            ((index124503) >= (this124502->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124503), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this124502->FMGL(data)).set(index124503, value124504);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret124505 = value124504;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret124505;
                }
            }
            
        } else {
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i65525max124557 = ((x10_long) (((__extension__ ({
                
                //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this124558 =
                  m->FMGL(offsets);
                this124558->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)2))))));
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i124559;
                for (
                     //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i124559 = ((x10_long)0ll); ((i124559) <= (i65525max124557));
                     
                     //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i124559 = ((x10_long) ((i124559) + (((x10_long)1ll)))))
                {
                    
                    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i124560 = i124559;
                    
                    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off124542 = cachedOffset;
                    
                    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next124543 = (__extension__ ({
                        
                        //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this124544 =
                          m->FMGL(offsets);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index124545 = ((x10_long) ((i124560) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret124546;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this124544->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index124545) < (((x10_long) (((x10_int)0))))) ||
                                ((index124545) >= (this124544->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124545), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret124546 = (this124544->FMGL(data))[index124545];
                        ret124546;
                    }))
                    ;
                    
                    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev124547 = ((x10_long)-1ll);
                    
                    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx124548 = ((x10_long)-1ll);
                    
                    //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei124549;
                        for (
                             //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei124549 = off124542; ((ei124549) < (next124543));
                             ) {
                            
                            //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v124550 = (__extension__ ({
                                
                                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124551 =
                                  m->FMGL(vertexes);
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124552 = ei124549;
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124553;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124551->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124552) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124552) >= (this124551->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124552), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124553 = (this124551->
                                               FMGL(data))[index124552];
                                ret124553;
                            }))
                            ;
                            
                            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            v124550),
                                                                          DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            i124560))))
                            {
                                
                                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124549 = ((x10_long) ((ei124549) + (((x10_long)1ll))));
                            } else 
                            //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v124550,
                                                                           prev124547)))
                            {
                                
                                //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124549 = ((x10_long) ((ei124549) + (((x10_long)1ll))));
                                         ((ei124549) < (next124543));
                                         
                                         //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei124549 = ((x10_long) ((ei124549) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals((__extension__ ({
                                                                        
                                                                        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                        org::scalegraph::util::MemoryChunk<x10_long> this124554 =
                                                                          m->
                                                                            FMGL(vertexes);
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long index124555 =
                                                                          ei124549;
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long ret124556;
                                                                        {
                                                                            
                                                                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (!((this124554->
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
                                                                            if (((index124555) < (((x10_long) (((x10_int)0))))) ||
                                                                                ((index124555) >= (this124554->
                                                                                                     FMGL(data)->
                                                                                                     FMGL(size))))
                                                                            {
                                                                                
                                                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124555), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                        }
                                                                        
                                                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret124556 =
                                                                          (this124554->
                                                                             FMGL(data))[index124555];
                                                                        ret124556;
                                                                    }))
                                                                    ,
                                                                    prev124547)))
                                        {
                                            
                                            //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<TPMGL(T)> this124525 =
                                  m->FMGL(values);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124526 = ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124527 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                  m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                    prev_idx124548, ((x10_long) ((ei124549) - (prev_idx124548)))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124528;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124525->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124526) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124526) >= (this124525->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124526), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124525->FMGL(data)).set(index124526, value124527);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124528 = value124527;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124528;
                                
                                //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev124547 = v124550;
                                
                                //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx124548 = ei124549;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this124529 =
                                  m->FMGL(vertexes);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124530 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long value124531 = v124550;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret124532;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this124529->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index124530) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124530) >= (this124529->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124530), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this124529->FMGL(data)).set(index124530, value124531);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124532 = value124531;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124532;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index124533 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value124534 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index124535 =
                                      ei124549;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    TPMGL(T) ret124536;
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
                                        if (((index124535) < (((x10_long) (((x10_int)0))))) ||
                                            ((index124535) >= (values_->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124535), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret124536 = (values_->
                                                   FMGL(data))[index124535];
                                    ret124536;
                                }))
                                ;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret124537;
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
                                    if (((index124533) < (((x10_long) (((x10_int)0))))) ||
                                        ((index124533) >= (values_->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124533), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (values_->FMGL(data)).set(index124533, value124534);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret124537 = value124534;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret124537;
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei124549 = ((x10_long) ((ei124549) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next124543;
                    
                    //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this124538 =
                      m->FMGL(offsets);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index124539 = ((x10_long) ((i124560) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value124540 = dstIdx;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret124541;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this124538->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index124539) < (((x10_long) (((x10_int)0))))) ||
                            ((index124539) >= (this124538->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124539), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this124538->FMGL(data)).set(index124539, value124540);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret124541 = value124540;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret124541;
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
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122825 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this122825)->FMGL(value);
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
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122826 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this122826)->FMGL(value);
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
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122827 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this122827)->FMGL(value);
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
        x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122828 =
          (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
        x10aux::nullCheck(this122828)->FMGL(value);
    }))
    ;
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this124486 =
      (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
    
    //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124487 =
      (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc124488 =
           org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D dist124481 = cache->
                                                     FMGL(dist);
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids124482 = cache->
                                                           FMGL(ids);
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix124483 =
          x10aux::zeroValue<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc124488->FMGL(dist) = dist124481;
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc124488->FMGL(ids) = ids124482;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc124488->FMGL(matrix) = matrix124483;
        alloc124488;
    }))
    ;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x124484 =
      x124487;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> ret124485;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this124486)->FMGL(value) = x124484;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
    ret124485 = x124484;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
    ret124485;
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
                                            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this122840 =
                                              (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                            x10aux::nullCheck(this122840)->
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
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this124461 =
          (*this);
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other124460 =
          x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other);
        (x10aux::struct_equals(this124461->FMGL(data), other124460->
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
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this124463 =
          (*this);
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other124462 =
          x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other);
        (x10aux::struct_equals(this124463->FMGL(data), other124462->
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

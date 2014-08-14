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
            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* alloc62359 =
               ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >()))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x123163 =
              (__extension__ ({
                
                //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc123164 =
                   org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D dist123160 =
                  dist;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct ids123161 =
                  (__extension__ ({
                    r->FMGL(val1);
                }))
                ;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix123162 =
                  (__extension__ ({
                    r->FMGL(val2);
                }))
                ;
                
                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123164->FMGL(dist) = dist123160;
                
                //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123164->FMGL(ids) = ids123161;
                
                //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123164->FMGL(matrix) = matrix123162;
                alloc123164;
            }))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            alloc62359->FMGL(value) = x123163;
            alloc62359;
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
            org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > alloc62360 =
               org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::_alloc();
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::id::IdStruct val123165 = (__extension__ ({
                                                                 
                                                                 //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                 x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this123166 =
                                                                   data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                                 x10aux::nullCheck(this123166)->
                                                                   FMGL(value);
                                                             }))
                                                             ->
                                                               FMGL(ids);
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::SparseMatrix<TPMGL(T)> val123167 =
              (__extension__ ({
                  
                  //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this123168 =
                    data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                  x10aux::nullCheck(this123168)->FMGL(value);
              }))
              ->FMGL(matrix);
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc62360->FMGL(val1) = val123165;
            
            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc62360->FMGL(val2) = val123167;
            alloc62360;
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
            x10::array::Array<x10_int>* this121502 = x10aux::nullCheck(dist->org::scalegraph::util::Dist2D::parentTeam())->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret121503;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret121504; __ret121504: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this121502)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret121503 = (x10aux::nullCheck(this121502)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret121504_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this121502)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret121503 = (x10aux::nullCheck(this121502)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this121502)->
                                                                                                                    FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret121504_end_;
                }
                
            }goto __ret121504_end_; __ret121504_end_: ;
            }
            ret121503;
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
            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this123174 =
              data_->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x123175 =
              (__extension__ ({
                
                //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc123176 =
                   org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D dist123169 =
                  dist;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct ids123170 =
                  (__extension__ ({
                    r->FMGL(val1);
                }))
                ;
                
                //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix123171 =
                  (__extension__ ({
                    r->FMGL(val2);
                }))
                ;
                
                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123176->FMGL(dist) = dist123169;
                
                //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123176->FMGL(ids) = ids123170;
                
                //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123176->FMGL(matrix) = matrix123171;
                alloc123176;
            }))
            ;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x123172 =
              x123175;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> ret123173;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this123174)->FMGL(value) = x123172;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret123173 = x123172;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret123173;
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
                                                 x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121537 =
                                                   saved_this->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                 x10aux::nullCheck(this121537)->
                                                   FMGL(value);
                                             }))
                                             ->FMGL(dist);
        
        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> m = (__extension__ ({
                                                              
                                                              //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121538 =
                                                                saved_this->
                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                              x10aux::nullCheck(this121538)->
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
                                                       x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121539 =
                                                         saved_this->
                                                           FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                                       x10aux::nullCheck(this121539)->
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
            org::scalegraph::util::MemoryChunk<x10_long> this123083 =
              m->FMGL(offsets);
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
            ;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret123084;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this123083->FMGL(data)).isValid()))
                {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (this123083->
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
            ret123084 = (this123083->FMGL(data))[((x10_int)0)];
            ret123084;
        }))
        ;
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
        if (!(ids->FMGL(transpose))) {
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i62364max123217 = ((x10_long) (((__extension__ ({
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this123218 =
                  m->FMGL(offsets);
                this123218->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)2))))));
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i123219;
                for (
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i123219 = ((x10_long)0ll); ((i123219) <= (i62364max123217));
                     
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i123219 = ((x10_long) ((i123219) + (((x10_long)1ll)))))
                {
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i123220 = i123219;
                    
                    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off123202 = cachedOffset;
                    
                    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next123203 = (__extension__ ({
                        
                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this123204 =
                          m->FMGL(offsets);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123205 = ((x10_long) ((i123220) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123206;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123204->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123205) < (((x10_long) (((x10_int)0))))) ||
                                ((index123205) >= (this123204->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123205), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123206 = (this123204->FMGL(data))[index123205];
                        ret123206;
                    }))
                    ;
                    
                    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev123207 = ((x10_long)-1ll);
                    
                    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx123208 = ((x10_long)-1ll);
                    
                    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei123209;
                        for (
                             //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei123209 = off123202; ((ei123209) < (next123203));
                             ) {
                            
                            //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v123210 = (__extension__ ({
                                
                                //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this123211 =
                                  m->FMGL(vertexes);
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123212 = ei123209;
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret123213;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this123211->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index123212) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123212) >= (this123211->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123212), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123213 = (this123211->
                                               FMGL(data))[index123212];
                                ret123213;
                            }))
                            ;
                            
                            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            v123210),
                                                                          StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            i123220))))
                            {
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei123209 = ((x10_long) ((ei123209) + (((x10_long)1ll))));
                            } else 
                            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v123210,
                                                                           prev123207)))
                            {
                                
                                //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei123209 = ((x10_long) ((ei123209) + (((x10_long)1ll))));
                                         ((ei123209) < (next123203));
                                         
                                         //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei123209 = ((x10_long) ((ei123209) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals((__extension__ ({
                                                                        
                                                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                        org::scalegraph::util::MemoryChunk<x10_long> this123214 =
                                                                          m->
                                                                            FMGL(vertexes);
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long index123215 =
                                                                          ei123209;
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long ret123216;
                                                                        {
                                                                            
                                                                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (!((this123214->
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
                                                                            if (((index123215) < (((x10_long) (((x10_int)0))))) ||
                                                                                ((index123215) >= (this123214->
                                                                                                     FMGL(data)->
                                                                                                     FMGL(size))))
                                                                            {
                                                                                
                                                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123215), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                        }
                                                                        
                                                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret123216 =
                                                                          (this123214->
                                                                             FMGL(data))[index123215];
                                                                        ret123216;
                                                                    }))
                                                                    ,
                                                                    prev123207)))
                                        {
                                            
                                            //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<TPMGL(T)> this123185 =
                                  m->FMGL(values);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123186 = ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value123187 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                  m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                    prev_idx123208, ((x10_long) ((ei123209) - (prev_idx123208)))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret123188;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this123185->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index123186) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123186) >= (this123185->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123186), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this123185->FMGL(data)).set(index123186, value123187);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123188 = value123187;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret123188;
                                
                                //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev123207 = v123210;
                                
                                //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx123208 = ei123209;
                                
                                //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this123189 =
                                  m->FMGL(vertexes);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123190 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long value123191 = v123210;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret123192;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this123189->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index123190) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123190) >= (this123189->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123190), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this123189->FMGL(data)).set(index123190, value123191);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123192 = value123191;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret123192;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123193 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value123194 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index123195 =
                                      ei123209;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    TPMGL(T) ret123196;
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
                                        if (((index123195) < (((x10_long) (((x10_int)0))))) ||
                                            ((index123195) >= (values_->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123195), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret123196 = (values_->
                                                   FMGL(data))[index123195];
                                    ret123196;
                                }))
                                ;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret123197;
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
                                    if (((index123193) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123193) >= (values_->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123193), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (values_->FMGL(data)).set(index123193, value123194);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123197 = value123194;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret123197;
                                
                                //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei123209 = ((x10_long) ((ei123209) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next123203;
                    
                    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this123198 =
                      m->FMGL(offsets);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index123199 = ((x10_long) ((i123220) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value123200 = dstIdx;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret123201;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this123198->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index123199) < (((x10_long) (((x10_int)0))))) ||
                            ((index123199) >= (this123198->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123199), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this123198->FMGL(data)).set(index123199, value123200);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret123201 = value123200;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret123201;
                }
            }
            
        } else {
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i62382max123253 = ((x10_long) (((__extension__ ({
                
                //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this123254 =
                  m->FMGL(offsets);
                this123254->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)2))))));
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i123255;
                for (
                     //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i123255 = ((x10_long)0ll); ((i123255) <= (i62382max123253));
                     
                     //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i123255 = ((x10_long) ((i123255) + (((x10_long)1ll)))))
                {
                    
                    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i123256 = i123255;
                    
                    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off123238 = cachedOffset;
                    
                    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long next123239 = (__extension__ ({
                        
                        //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this123240 =
                          m->FMGL(offsets);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123241 = ((x10_long) ((i123256) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123242;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123240->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123241) < (((x10_long) (((x10_int)0))))) ||
                                ((index123241) >= (this123240->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123241), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123242 = (this123240->FMGL(data))[index123241];
                        ret123242;
                    }))
                    ;
                    
                    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev123243 = ((x10_long)-1ll);
                    
                    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long prev_idx123244 = ((x10_long)-1ll);
                    
                    //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                    {
                        x10_long ei123245;
                        for (
                             //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                             ei123245 = off123238; ((ei123245) < (next123239));
                             ) {
                            
                            //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                            x10_long v123246 = (__extension__ ({
                                
                                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this123247 =
                                  m->FMGL(vertexes);
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123248 = ei123245;
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret123249;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this123247->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index123248) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123248) >= (this123247->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123248), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123249 = (this123247->
                                               FMGL(data))[index123248];
                                ret123249;
                            }))
                            ;
                            
                            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeSelfloops && (x10aux::struct_equals(StoV->org::scalegraph::graph::id::Twod__StoV::__apply(
                                                                            v123246),
                                                                          DtoV->org::scalegraph::graph::id::Twod__DtoV::__apply(
                                                                            i123256))))
                            {
                                
                                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei123245 = ((x10_long) ((ei123245) + (((x10_long)1ll))));
                            } else 
                            //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                            if (removeDuplicates && (x10aux::struct_equals(v123246,
                                                                           prev123243)))
                            {
                                
                                //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.For_c
                                {
                                    for (
                                         //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei123245 = ((x10_long) ((ei123245) + (((x10_long)1ll))));
                                         ((ei123245) < (next123239));
                                         
                                         //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                         ei123245 = ((x10_long) ((ei123245) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10If_c
                                        if ((!x10aux::struct_equals((__extension__ ({
                                                                        
                                                                        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                        org::scalegraph::util::MemoryChunk<x10_long> this123250 =
                                                                          m->
                                                                            FMGL(vertexes);
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long index123251 =
                                                                          ei123245;
                                                                        
                                                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                        x10_long ret123252;
                                                                        {
                                                                            
                                                                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                            if (!((this123250->
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
                                                                            if (((index123251) < (((x10_long) (((x10_int)0))))) ||
                                                                                ((index123251) >= (this123250->
                                                                                                     FMGL(data)->
                                                                                                     FMGL(size))))
                                                                            {
                                                                                
                                                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                if (true)
                                                                                {
                                                                                    
                                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123251), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                        }
                                                                        
                                                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret123252 =
                                                                          (this123250->
                                                                             FMGL(data))[index123251];
                                                                        ret123252;
                                                                    }))
                                                                    ,
                                                                    prev123243)))
                                        {
                                            
                                            //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                            break;
                                        }
                                        
                                    }
                                }
                                
                                //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<TPMGL(T)> this123221 =
                                  m->FMGL(values);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123222 = ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value123223 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                                  m->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                    prev_idx123244, ((x10_long) ((ei123245) - (prev_idx123244)))));
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret123224;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this123221->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index123222) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123222) >= (this123221->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123222), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this123221->FMGL(data)).set(index123222, value123223);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123224 = value123223;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret123224;
                                
                                //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": polyglot.ast.Branch_c
                                continue;
                            } else {
                                
                                //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev123243 = v123246;
                                
                                //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                prev_idx123244 = ei123245;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_long> this123225 =
                                  m->FMGL(vertexes);
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123226 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long value123227 = v123246;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long ret123228;
                                {
                                    
                                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((this123225->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index123226) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123226) >= (this123225->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123226), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (this123225->FMGL(data)).set(index123226, value123227);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123228 = value123227;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret123228;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index123229 = dstIdx;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) value123230 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index123231 =
                                      ei123245;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    TPMGL(T) ret123232;
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
                                        if (((index123231) < (((x10_long) (((x10_int)0))))) ||
                                            ((index123231) >= (values_->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123231), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret123232 = (values_->
                                                   FMGL(data))[index123231];
                                    ret123232;
                                }))
                                ;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                TPMGL(T) ret123233;
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
                                    if (((index123229) < (((x10_long) (((x10_int)0))))) ||
                                        ((index123229) >= (values_->
                                                             FMGL(data)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123229), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (values_->FMGL(data)).set(index123229, value123230);
                                
                                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret123233 = value123230;
                                
                                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret123233;
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                ei123245 = ((x10_long) ((ei123245) + (((x10_long)1ll))));
                            }
                            
                        }
                    }
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                    cachedOffset = next123239;
                    
                    //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this123234 =
                      m->FMGL(offsets);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index123235 = ((x10_long) ((i123256) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value123236 = dstIdx;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret123237;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this123234->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index123235) < (((x10_long) (((x10_int)0))))) ||
                            ((index123235) >= (this123234->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123235), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this123234->FMGL(data)).set(index123235, value123236);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret123237 = value123236;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret123237;
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
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121521 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this121521)->FMGL(value);
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
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121522 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this121522)->FMGL(value);
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
               x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121523 =
                 (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
               x10aux::nullCheck(this121523)->FMGL(value);
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
        x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121524 =
          (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
        x10aux::nullCheck(this121524)->FMGL(value);
    }))
    ;
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this123182 =
      (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
    
    //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x123183 =
      (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> alloc123184 =
           org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)>::_alloc();
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D dist123177 = cache->
                                                     FMGL(dist);
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids123178 = cache->
                                                           FMGL(ids);
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> matrix123179 =
          x10aux::zeroValue<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc123184->FMGL(dist) = dist123177;
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc123184->FMGL(ids) = ids123178;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        alloc123184->FMGL(matrix) = matrix123179;
        alloc123184;
    }))
    ;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> x123180 =
      x123183;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> ret123181;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this123182)->FMGL(value) = x123180;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
    ret123181 = x123180;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
    ret123181;
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
                                            x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >* this121536 =
                                              (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::blas::DistSparseMatrix__Data<TPMGL(T)> >*>::__apply();
                                            x10aux::nullCheck(this121536)->
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
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this123157 =
          (*this);
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other123156 =
          x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other);
        (x10aux::struct_equals(this123157->FMGL(data), other123156->
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
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> this123159 =
          (*this);
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/DistSparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> other123158 =
          x10aux::class_cast<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >(other);
        (x10aux::struct_equals(this123159->FMGL(data), other123158->
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

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
class Int;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__VtoS;
} } } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__VtoD;
} } } } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace org { namespace scalegraph { namespace test { 
class STest;
} } } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
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
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace array { 
class Region;
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
    template<class TPMGL(T95192)> org::scalegraph::util::MemoryChunk<TPMGL(T95192)>
      attribute(org::scalegraph::util::MemoryChunk<TPMGL(T95192)> values,
                x10_long localV);
    x10::lang::LongRange vertexRange();
    void _constructor(org::scalegraph::util::MemoryChunk<x10_long> offsets,
                      org::scalegraph::util::MemoryChunk<x10_long> vertexes,
                      org::scalegraph::util::MemoryChunk<TPMGL(T)> values);
    
    static org::scalegraph::blas::SparseMatrix<TPMGL(T)> _make(org::scalegraph::util::MemoryChunk<x10_long> offsets,
                                                               org::scalegraph::util::MemoryChunk<x10_long> vertexes,
                                                               org::scalegraph::util::MemoryChunk<TPMGL(T)> values);
    
    void _constructor(org::scalegraph::util::MemoryChunk<x10_long> origin,
                      org::scalegraph::util::MemoryChunk<x10_long> target,
                      org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                      org::scalegraph::graph::id::IdStruct ids);
    
    static org::scalegraph::blas::SparseMatrix<TPMGL(T)> _make(
             org::scalegraph::util::MemoryChunk<x10_long> origin,
             org::scalegraph::util::MemoryChunk<x10_long> target,
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
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/util/StopWatch.h>
#include <org/scalegraph/Config.h>
#include <x10/lang/Int.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <org/scalegraph/graph/id/Twod__VtoS.h>
#include <org/scalegraph/graph/id/Twod__VtoD.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/lang/Place.h>
#include <org/scalegraph/test/STest.h>
#include <x10/compiler/Ifdef.h>
#include <org/scalegraph/util/Parallel.h>
#include <org/scalegraph/util/Algorithm.h>
#include <x10/util/Team.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Cell.h>
#include <x10/array/Array.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/array/Region.h>
#include <x10/lang/GlobalRef.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/util/Team2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_GENERICS
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_GENERICS
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_attribute_1289
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_attribute_1289
template<class TPMGL(T)> template<class TPMGL(T95192)> org::scalegraph::util::MemoryChunk<TPMGL(T95192)>
  org::scalegraph::blas::SparseMatrix<TPMGL(T)>::attribute(org::scalegraph::util::MemoryChunk<TPMGL(T95192)> values,
                                                           x10_long localV) {
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return values->org::scalegraph::util::MemoryChunk<TPMGL(T95192)>::subpart(
             (__extension__ ({
                 
                 //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123441 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123440 = localV;
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123442;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123441->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123440) < (((x10_long) (((x10_int)0))))) ||
                         ((index123440) >= (this123441->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123440), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123442 = (this123441->FMGL(data))[index123440];
                 ret123442;
             }))
             , ((x10_long) (((__extension__ ({
                 
                 //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123445 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123444 = ((x10_long) ((localV) + (((x10_long) (((x10_int)1))))));
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123446;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123445->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123444) < (((x10_long) (((x10_int)0))))) ||
                         ((index123444) >= (this123445->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123444), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123446 = (this123445->FMGL(data))[index123444];
                 ret123446;
             }))
             ) - ((__extension__ ({
                 
                 //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123449 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123448 = localV;
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123450;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123449->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123448) < (((x10_long) (((x10_int)0))))) ||
                         ((index123448) >= (this123449->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123448), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123450 = (this123449->FMGL(data))[index123448];
                 ret123450;
             }))
             ))));
    
}
#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_attribute_1289
#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_GENERICS
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_IMPLEMENTATION
#include <org/scalegraph/blas/SparseMatrix.h>

#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_SparseMatrix__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long tid123701 = ((x10_long) (idx123703));
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r123702 = i_range123707;
            
            //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::id::Twod__VtoS VtoS123699 =  org::scalegraph::graph::id::Twod__VtoS::_alloc();
            
            //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorCall_c
            (VtoS123699)->::org::scalegraph::graph::id::Twod__VtoS::_constructor(
              ids);
            
            //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::id::Twod__VtoD VtoD123700 =  org::scalegraph::graph::id::Twod__VtoD::_alloc();
            
            //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorCall_c
            (VtoD123700)->::org::scalegraph::graph::id::Twod__VtoD::_constructor(
              ids);
            
            //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i95197domain123694 = r123702;
            
            //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i95197min123695 = i95197domain123694->
                                         FMGL(min);
            
            //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i95197max123696 = i95197domain123694->
                                         FMGL(max);
            
            //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i123697;
                for (
                     //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i123697 = i95197min123695; ((i123697) <= (i95197max123696));
                     
                     //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i123697 = ((x10_long) ((i123697) + (((x10_long)1ll)))))
                {
                    
                    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i123698 = i123697;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index123684 = i123698;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value123685 = VtoS123699->org::scalegraph::graph::id::Twod__VtoS::__apply(
                                             (__extension__ ({
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long index123686 =
                                                   i123698;
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long ret123687;
                                                 {
                                                     
                                                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (!((origin->
                                                              FMGL(data)).isValid()))
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (((index123686) < (((x10_long) (((x10_int)0))))) ||
                                                         ((index123686) >= (origin->
                                                                              FMGL(data)->
                                                                              FMGL(size))))
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123686), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret123687 =
                                                   (origin->
                                                      FMGL(data))[index123686];
                                                 ret123687;
                                             }))
                                             );
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret123688;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((origin->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index123684) < (((x10_long) (((x10_int)0))))) ||
                            ((index123684) >= (origin->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123684), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (origin->FMGL(data)).set(index123684, value123685);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret123688 = value123685;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret123688;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index123689 = i123698;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value123690 = VtoD123700->org::scalegraph::graph::id::Twod__VtoD::__apply(
                                             (__extension__ ({
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long index123691 =
                                                   i123698;
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long ret123692;
                                                 {
                                                     
                                                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (!((target->
                                                              FMGL(data)).isValid()))
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (((index123691) < (((x10_long) (((x10_int)0))))) ||
                                                         ((index123691) >= (target->
                                                                              FMGL(data)->
                                                                              FMGL(size))))
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123691), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret123692 =
                                                   (target->
                                                      FMGL(data))[index123691];
                                                 ret123692;
                                             }))
                                             );
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret123693;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((target->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index123689) < (((x10_long) (((x10_int)0))))) ||
                            ((index123689) >= (target->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123689), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (target->FMGL(data)).set(index123689, value123690);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret123693 = value123690;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret123693;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1291) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1291)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1291);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1291);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx123703;
    x10::lang::LongRange i_range123707;
    org::scalegraph::graph::id::IdStruct ids;
    org::scalegraph::util::MemoryChunk<x10_long> origin;
    org::scalegraph::util::MemoryChunk<x10_long> target;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx123703);
        buf.write(this->i_range123707);
        buf.write(this->ids);
        buf.write(this->origin);
        buf.write(this->target);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx123703 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range123707 = buf.read<x10::lang::LongRange>();
        org::scalegraph::graph::id::IdStruct that_ids = buf.read<org::scalegraph::graph::id::IdStruct>();
        org::scalegraph::util::MemoryChunk<x10_long> that_origin = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_target = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >(that_idx123703, that_i_range123707, that_ids, that_origin, that_target);
        return this_;
    }
    
    org_scalegraph_blas_SparseMatrix__closure__1(x10_int idx123703, x10::lang::LongRange i_range123707, org::scalegraph::graph::id::IdStruct ids, org::scalegraph::util::MemoryChunk<x10_long> origin, org::scalegraph::util::MemoryChunk<x10_long> target) : idx123703(idx123703), i_range123707(i_range123707), ids(ids), origin(origin), target(target) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) > >org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::__apply, &org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_SparseMatrix__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long tid123730 = ((x10_long) (idx123732));
            
            //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r123731 = i_range123736;
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i95216domain123725 = r123731;
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i95216min123726 = i95216domain123725->FMGL(min);
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i95216max123727 = i95216domain123725->FMGL(max);
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i123728;
                for (
                     //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i123728 = i95216min123726; ((i123728) <= (i95216max123727));
                     
                     //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i123728 = ((x10_long) ((i123728) + (((x10_long)1ll)))))
                {
                    
                    //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i123729 = i123728;
                    
                    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off123719 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123720 = i123729;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123721;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((offsets_->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123720) < (((x10_long) (((x10_int)0))))) ||
                                ((index123720) >= (offsets_->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123720), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123721 = (offsets_->FMGL(data))[index123720];
                        ret123721;
                    }))
                    ;
                    
                    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long len123722 = ((x10_long) (((__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123723 = ((x10_long) ((i123729) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123724;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((offsets_->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123723) < (((x10_long) (((x10_int)0))))) ||
                                ((index123723) >= (offsets_->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123723), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123724 = (offsets_->FMGL(data))[index123723];
                        ret123724;
                    }))
                    ) - (off123719)));
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> index123717 =
                      target->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                        off123719, len123722);
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<TPMGL(T)> value123718 =
                      values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                        off123719, len123722);
                    
                    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::sort2((index123717)->pointer(), (value123718)->pointer(), (index123717)->size());
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1294) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1294)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1294);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1294);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx123732;
    x10::lang::LongRange i_range123736;
    org::scalegraph::util::MemoryChunk<x10_long> offsets_;
    org::scalegraph::util::MemoryChunk<x10_long> target;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> values_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx123732);
        buf.write(this->i_range123736);
        buf.write(this->offsets_);
        buf.write(this->target);
        buf.write(this->values_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx123732 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range123736 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_target = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_values_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >(that_idx123732, that_i_range123736, that_offsets_, that_target, that_values_);
        return this_;
    }
    
    org_scalegraph_blas_SparseMatrix__closure__2(x10_int idx123732, x10::lang::LongRange i_range123736, org::scalegraph::util::MemoryChunk<x10_long> offsets_, org::scalegraph::util::MemoryChunk<x10_long> target, org::scalegraph::util::MemoryChunk<TPMGL(T)> values_) : idx123732(idx123732), i_range123736(i_range123736), offsets_(offsets_), target(target), values_(values_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) > >org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::__apply, &org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_BLAS_SPARSEMATRIX__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_blas_SparseMatrix__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long tid123761 = ((x10_long) (idx123763));
            
            //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r123762 = i_range123767;
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i95235domain123756 = r123762;
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i95235min123757 = i95235domain123756->FMGL(min);
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i95235max123758 = i95235domain123756->FMGL(max);
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long i123759;
                for (
                     //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                     i123759 = i95235min123757; ((i123759) <= (i95235max123758));
                     
                     //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                     i123759 = ((x10_long) ((i123759) + (((x10_long)1ll)))))
                {
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long i123760 = i123759;
                    
                    //#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long off123750 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123751 = i123760;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123752;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((offsets_->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123751) < (((x10_long) (((x10_int)0))))) ||
                                ((index123751) >= (offsets_->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123751), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123752 = (offsets_->FMGL(data))[index123751];
                        ret123752;
                    }))
                    ;
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long len123753 = ((x10_long) (((__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123754 = ((x10_long) ((i123760) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123755;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((offsets_->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123754) < (((x10_long) (((x10_int)0))))) ||
                                ((index123754) >= (offsets_->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123754), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123755 = (offsets_->FMGL(data))[index123754];
                        ret123755;
                    }))
                    ) - (off123750)));
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> index123748 =
                      target->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                        off123750, len123753);
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<TPMGL(T)> value123749 =
                      values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                        off123750, len123753);
                    
                    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::sort2((index123748)->pointer(), (value123749)->pointer(), (index123748)->size());
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1297) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1297)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1297);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1297);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx123763;
    x10::lang::LongRange i_range123767;
    org::scalegraph::util::MemoryChunk<x10_long> offsets_;
    org::scalegraph::util::MemoryChunk<x10_long> target;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> values_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx123763);
        buf.write(this->i_range123767);
        buf.write(this->offsets_);
        buf.write(this->target);
        buf.write(this->values_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx123763 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range123767 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_target = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_values_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >(that_idx123763, that_i_range123767, that_offsets_, that_target, that_values_);
        return this_;
    }
    
    org_scalegraph_blas_SparseMatrix__closure__3(x10_int idx123763, x10::lang::LongRange i_range123767, org::scalegraph::util::MemoryChunk<x10_long> offsets_, org::scalegraph::util::MemoryChunk<x10_long> target, org::scalegraph::util::MemoryChunk<TPMGL(T)> values_) : idx123763(idx123763), i_range123767(i_range123767), offsets_(offsets_), target(target), values_(values_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) > >org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::__apply, &org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

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
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = org::scalegraph::util::MemoryChunk<x10_long >::_make(numVerts, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> vertexes = org::scalegraph::util::MemoryChunk<x10_long >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> values = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 team2 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam123784 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        team2->FMGL(base) = baseTeam123784;
        
        //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::place((ref_matrix)->location),
                                   x10::lang::Place::_make(x10aux::here))))
        {
            
            //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::SparseMatrix<TPMGL(T)> m = (__extension__ ({
                
                //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* this123636 =
                  x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* >(ref_matrix);
                x10aux::nullCheck(this123636)->FMGL(value);
            }))
            ;
            
            //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, m->FMGL(offsets),
                                               offsets);
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, m->FMGL(vertexes),
                                               vertexes);
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<TPMGL(T) >(root, m->FMGL(values),
                                               values);
        } else {
            
            //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >(),
                                               offsets);
            
            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<x10_long >(root, org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >(),
                                               vertexes);
            
            //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
            team2->template scatter<TPMGL(T) >(root, org::scalegraph::util::MemoryChunk<void>::template getNull<TPMGL(T) >(),
                                               values);
        }
        
        //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* alloc95195 =
               ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >()))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::SparseMatrix<TPMGL(T)> x123782 =
              (__extension__ ({
                
                //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<TPMGL(T)> alloc123783 =
                   org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_alloc();
                
                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> offsets123779 =
                  offsets;
                
                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> vertexes123780 =
                  vertexes;
                
                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> values123781 =
                  values;
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123783->FMGL(offsets) = offsets123779;
                
                //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123783->FMGL(vertexes) = vertexes123780;
                
                //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
                alloc123783->FMGL(values) = values123781;
                alloc123783;
            }))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            alloc95195->FMGL(value) = x123782;
            alloc95195;
        }))
        ;
        
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10:191-210";
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

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10FieldDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::blas::SparseMatrix<TPMGL(T)>::adjacency(
  x10_long localV) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             (__extension__ ({
                 
                 //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123417 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123416 = localV;
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123418;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123417->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123416) < (((x10_long) (((x10_int)0))))) ||
                         ((index123416) >= (this123417->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123416), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123418 = (this123417->FMGL(data))[index123416];
                 ret123418;
             }))
             , ((x10_long) (((__extension__ ({
                 
                 //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123421 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123420 = ((x10_long) ((localV) + (((x10_long) (((x10_int)1))))));
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123422;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123421->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123420) < (((x10_long) (((x10_int)0))))) ||
                         ((index123420) >= (this123421->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123420), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123422 = (this123421->FMGL(data))[index123420];
                 ret123422;
             }))
             ) - ((__extension__ ({
                 
                 //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123425 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123424 = localV;
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123426;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123425->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123424) < (((x10_long) (((x10_int)0))))) ||
                         ((index123424) >= (this123425->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123424), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123426 = (this123425->FMGL(data))[index123424];
                 ret123426;
             }))
             ))));
    
}

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::blas::SparseMatrix<TPMGL(T)>::attribute(
  x10_long localV) {
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
             (__extension__ ({
                 
                 //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123429 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123428 = localV;
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123430;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123429->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123428) < (((x10_long) (((x10_int)0))))) ||
                         ((index123428) >= (this123429->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123428), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123430 = (this123429->FMGL(data))[index123428];
                 ret123430;
             }))
             , ((x10_long) (((__extension__ ({
                 
                 //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123433 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123432 = ((x10_long) ((localV) + (((x10_long) (((x10_int)1))))));
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123434;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123433->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123432) < (((x10_long) (((x10_int)0))))) ||
                         ((index123432) >= (this123433->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123432), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123434 = (this123433->FMGL(data))[index123432];
                 ret123434;
             }))
             ) - ((__extension__ ({
                 
                 //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::MemoryChunk<x10_long> this123437 =
                   (*this)->FMGL(offsets);
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long index123436 = localV;
                 
                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                 x10_long ret123438;
                 {
                     
                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (!((this123437->FMGL(data)).isValid()))
                     {
                         
                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                         }
                         
                     }
                     
                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                     if (((index123436) < (((x10_long) (((x10_int)0))))) ||
                         ((index123436) >= (this123437->FMGL(data)->
                                              FMGL(size))))
                     {
                         
                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                         if (true) {
                             
                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123436), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                         }
                         
                     }
                     
                 }
                 
                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                 ret123438 = (this123437->FMGL(data))[index123436];
                 ret123438;
             }))
             ))));
    
}

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::LongRange org::scalegraph::blas::SparseMatrix<TPMGL(T)>::vertexRange(
  ) {
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) (((__extension__ ({
        
        //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this123452 =
          (*this)->FMGL(offsets);
        this123452->FMGL(data)->FMGL(size);
    }))
    ) - (((x10_long) (((x10_int)2)))))));
    
}

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MemoryChunk<x10_long> offsets,
                           org::scalegraph::util::MemoryChunk<x10_long> vertexes,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values) {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(offsets) = offsets;
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexes) = vertexes;
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
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



//#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MemoryChunk<x10_long> origin,
                           org::scalegraph::util::MemoryChunk<x10_long> target,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                           org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals((__extension__ ({
                                   origin->FMGL(data)->FMGL(size);
                               }))
                               , ((x10_long)0ll)))) {
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(offsets) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(vertexes) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(values) = org::scalegraph::util::MemoryChunk<void>::template getNull<TPMGL(T) >();
        
        //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range123746 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((origin->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size123713 = ((x10_long) ((((x10_long) ((range123746->
                                                        FMGL(max)) - (range123746->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads123714 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size123715 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a123716 = ((x10_long) ((((x10_long) ((((x10_long) ((size123713) + (((x10_long) (nthreads123714)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads123714)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a123716) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a123716);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var139 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable123835 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max123710 = ((x10_int) ((nthreads123714) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i123711;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i123711 = ((x10_int)0); ((i123711) <= (i72665max123710));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i123711 = ((x10_int) ((i123711) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i123712 = i123711;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx123703 = i123712;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start123704 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a123705 = ((x10_long) ((range123746->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b123706 = ((x10_long) ((range123746->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i123712))) * (chunk_size123715))))));
                                    ((a123705) < (b123706))
                                      ? (a123705) : (b123706);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range123707 =
                                  x10::lang::LongRange::_make(i_start123704, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a123708 = range123746->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b123709 = ((x10_long) ((((x10_long) ((i_start123704) + (chunk_size123715)))) - (((x10_long) (((x10_int)1))))));
                                    ((a123708) < (b123709))
                                      ? (a123708) : (b123709);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__1<TPMGL(T)>(idx123703, i_range123707, ids, origin, target))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1292) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1292);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1293) {
                if (true) {
                    x10::lang::CheckedThrowable* formal123836 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1293);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable123835 = formal123836;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable123835)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable123835))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable123835));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var139);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable123835)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable123835)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable123835));
                }
                
            }
            
        }
    }
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished converting edge format"));
    }
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long offsetLength = ((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) ((ids->
                                                                                      FMGL(lgl)) + (ids->
                                                                                                      FMGL(lgc))))))));
    
    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets_ =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((offsetLength) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        origin->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> v1_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        origin->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> v2_tmp =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make((__extension__ ({
        origin->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::test::STest::bufferedPrintln(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("$ MEM-CONS-MAX: place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                  FMGL(id)), x10aux::makeStringLit(": TotalMem: ")), org::scalegraph::util::MemoryChunk<void>::getMemSize()), x10aux::makeStringLit(": GCMem: ")), org::scalegraph::util::get_gc_heap_size()), x10aux::makeStringLit(": ExpMem: ")), org::scalegraph::util::ExpMemState.totalSize)));
    }
    
    //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("start first step sorting"));
    }
    
    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template sort<x10_long,
    TPMGL(T) >(((x10_int) ((ids->FMGL(lgl)) + (ids->FMGL(lgc)))),
               origin, target, values_, key_tmp, v1_tmp, v2_tmp);
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished first step sorting"));
    }
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (key_tmp->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (v1_tmp->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (v2_tmp->FMGL(data)).del();
    
    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::makeOffset(origin, offsets_);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (origin->FMGL(data)).del();
    
    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished making offsets"));
    }
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range123747 = x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((offsetLength) - (((x10_long) (((x10_int)1)))))));
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size123742 = ((x10_long) ((((x10_long) ((range123747->
                                                        FMGL(max)) - (range123747->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads123743 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size123744 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a123745 = ((x10_long) ((((x10_long) ((((x10_long) ((size123742) + (((x10_long) (nthreads123743)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads123743)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a123745) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a123745);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var140 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable123838 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max123739 = ((x10_int) ((nthreads123743) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i123740;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i123740 = ((x10_int)0); ((i123740) <= (i72665max123739));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i123740 = ((x10_int) ((i123740) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i123741 = i123740;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx123732 = i123741;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start123733 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a123734 = ((x10_long) ((range123747->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b123735 = ((x10_long) ((range123747->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i123741))) * (chunk_size123744))))));
                                    ((a123734) < (b123735))
                                      ? (a123734) : (b123735);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range123736 =
                                  x10::lang::LongRange::_make(i_start123733, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a123737 = range123747->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b123738 = ((x10_long) ((((x10_long) ((i_start123733) + (chunk_size123744)))) - (((x10_long) (((x10_int)1))))));
                                    ((a123737) < (b123738))
                                      ? (a123737) : (b123738);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__2<TPMGL(T)>(idx123732, i_range123736, offsets_, target, values_))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1295) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1295);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1296) {
                if (true) {
                    x10::lang::CheckedThrowable* formal123839 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1296);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable123838 = formal123839;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable123838)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable123838))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable123838));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var140);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable123838)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable123838)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable123838));
                }
                
            }
            
        }
    }
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished second step sorting"));
    }
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(offsets) = offsets_;
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexes) = target;
    
    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(values) = values_;
    {
        
        //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::test::STest::bufferedPrintln(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("$ MEM-CONS-FIN: place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                  FMGL(id)), x10aux::makeStringLit(": TotalMem: ")), org::scalegraph::util::MemoryChunk<void>::getMemSize()), x10aux::makeStringLit(": GCMem: ")), org::scalegraph::util::get_gc_heap_size()), x10aux::makeStringLit(": ExpMem: ")), org::scalegraph::util::ExpMemState.totalSize)));
    }
}
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_make(
                           org::scalegraph::util::MemoryChunk<x10_long> origin,
                           org::scalegraph::util::MemoryChunk<x10_long> target,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                           org::scalegraph::graph::id::IdStruct ids)
{
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> this_; 
    this_->_constructor(origin, target, values_, ids);
    return this_;
}



//#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MemoryChunk<x10_long> origin_,
                           org::scalegraph::util::MemoryChunk<x10_long> target_,
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> values_,
                           x10_int lgl, x10_boolean transpose) {
    
    //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.AssignPropertyCall_c
    
    //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals((__extension__ ({
                                   origin_->FMGL(data)->FMGL(size);
                               }))
                               , ((x10_long)0ll)))) {
        
        //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(offsets) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(vertexes) = org::scalegraph::util::MemoryChunk<void>::template getNull<x10_long >();
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(values) = org::scalegraph::util::MemoryChunk<void>::template getNull<TPMGL(T) >();
        
        //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> origin;
    
    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> target;
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(transpose)) {
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        origin = origin_;
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        target = target_;
    } else {
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        origin = target_;
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
        target = origin_;
    }
    
    //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long offsetLength = ((x10_long) ((((x10_long)1ll)) << (0x3f & (lgl))));
    
    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets_ =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((offsetLength) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        origin->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> v1_tmp =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        origin->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> v2_tmp =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make((__extension__ ({
        origin->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template sort<x10_long,
    TPMGL(T) >(lgl, origin, target, values_, key_tmp, v1_tmp,
               v2_tmp);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (key_tmp->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (v1_tmp->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (v2_tmp->FMGL(data)).del();
    
    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::makeOffset(origin, offsets_);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range123777 = x10::lang::LongRange::_make(((x10_long)1ll), ((x10_long) ((offsetLength) - (((x10_long) (((x10_int)1)))))));
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size123773 = ((x10_long) ((((x10_long) ((range123777->
                                                        FMGL(max)) - (range123777->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads123774 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size123775 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a123776 = ((x10_long) ((((x10_long) ((((x10_long) ((size123773) + (((x10_long) (nthreads123774)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads123774)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a123776) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a123776);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var141 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable123841 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max123770 = ((x10_int) ((nthreads123774) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i123771;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i123771 = ((x10_int)0); ((i123771) <= (i72665max123770));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i123771 = ((x10_int) ((i123771) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i123772 = i123771;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx123763 = i123772;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start123764 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a123765 = ((x10_long) ((range123777->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b123766 = ((x10_long) ((range123777->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i123772))) * (chunk_size123775))))));
                                    ((a123765) < (b123766))
                                      ? (a123765) : (b123766);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range123767 =
                                  x10::lang::LongRange::_make(i_start123764, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a123768 = range123777->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b123769 = ((x10_long) ((((x10_long) ((i_start123764) + (chunk_size123775)))) - (((x10_long) (((x10_int)1))))));
                                    ((a123768) < (b123769))
                                      ? (a123768) : (b123769);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__3<TPMGL(T)>(idx123763, i_range123767, offsets_, target, values_))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1298) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1298);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1299) {
                if (true) {
                    x10::lang::CheckedThrowable* formal123842 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1299);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable123841 = formal123842;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable123841)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable123841))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable123841));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var141);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable123841)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable123841)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable123841));
                }
                
            }
            
        }
    }
    
    //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(offsets) = offsets_;
    
    //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexes) = target;
    
    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10FieldAssign_c
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



//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c

//#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::blas::SparseMatrix<TPMGL(T)>::simplify(
  x10_boolean removeDuplicates, x10_boolean removeSelfloops,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>* reduction) {
    
    //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(removeDuplicates) && !(removeSelfloops)) {
        
        //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long dstIdx = ((x10_long)0ll);
    
    //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long cachedOffset = (__extension__ ({
        
        //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this123644 =
          (*this)->FMGL(offsets);
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret123645;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this123644->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (this123644->
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
        ret123645 = (this123644->FMGL(data))[((x10_int)0)];
        ret123645;
    }))
    ;
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long i95254max123819 = ((x10_long) (((__extension__ ({
        
        //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this123820 =
          (*this)->FMGL(offsets);
        this123820->FMGL(data)->FMGL(size);
    }))
    ) - (((x10_long) (((x10_int)2))))));
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
    {
        x10_long i123821;
        for (
             //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
             i123821 = ((x10_long)1ll); ((i123821) <= (i95254max123819));
             
             //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
             i123821 = ((x10_long) ((i123821) + (((x10_long)1ll)))))
        {
            
            //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long i123822 = i123821;
            
            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long off123804 = cachedOffset;
            
            //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long next123805 = (__extension__ ({
                
                //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this123806 =
                  (*this)->FMGL(offsets);
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index123807 = ((x10_long) ((i123822) + (((x10_long) (((x10_int)1))))));
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret123808;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this123806->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index123807) < (((x10_long) (((x10_int)0))))) ||
                        ((index123807) >= (this123806->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123807), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret123808 = (this123806->FMGL(data))[index123807];
                ret123808;
            }))
            ;
            
            //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long prev123809 = ((x10_long)-1ll);
            
            //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            x10_long prev_idx123810 = ((x10_long)-1ll);
            
            //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
            {
                x10_long ei123811;
                for (
                     //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                     ei123811 = off123804; ((ei123811) < (next123805));
                     ) {
                    
                    //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                    x10_long v123812 = (__extension__ ({
                        
                        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this123813 =
                          (*this)->FMGL(vertexes);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123814 = ei123811;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123815;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123813->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123814) < (((x10_long) (((x10_int)0))))) ||
                                ((index123814) >= (this123813->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123814), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123815 = (this123813->FMGL(data))[index123814];
                        ret123815;
                    }))
                    ;
                    
                    //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
                    if (removeSelfloops && (x10aux::struct_equals(v123812,
                                                                  i123822)))
                    {
                        
                        //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        ei123811 = ((x10_long) ((ei123811) + (((x10_long)1ll))));
                    } else 
                    //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
                    if (removeDuplicates && (x10aux::struct_equals(v123812,
                                                                   prev123809)))
                    {
                        
                        //#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.For_c
                        {
                            for (
                                 //#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                 ei123811 = ((x10_long) ((ei123811) + (((x10_long)1ll))));
                                 ((ei123811) < (next123805));
                                 
                                 //#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                                 ei123811 = ((x10_long) ((ei123811) + (((x10_long)1ll)))))
                            {
                                
                                //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
                                if ((!x10aux::struct_equals((__extension__ ({
                                                                
                                                                //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                org::scalegraph::util::MemoryChunk<x10_long> this123816 =
                                                                  (*this)->
                                                                    FMGL(vertexes);
                                                                
                                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                x10_long index123817 =
                                                                  ei123811;
                                                                
                                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                x10_long ret123818;
                                                                {
                                                                    
                                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                    if (!((this123816->
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
                                                                    if (((index123817) < (((x10_long) (((x10_int)0))))) ||
                                                                        ((index123817) >= (this123816->
                                                                                             FMGL(data)->
                                                                                             FMGL(size))))
                                                                    {
                                                                        
                                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                        if (true)
                                                                        {
                                                                            
                                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123817), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                ret123818 =
                                                                  (this123816->
                                                                     FMGL(data))[index123817];
                                                                ret123818;
                                                            }))
                                                            ,
                                                            prev123809)))
                                {
                                    
                                    //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.Branch_c
                                    break;
                                }
                                
                            }
                        }
                        
                        //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<TPMGL(T)> this123785 =
                          (*this)->FMGL(values);
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123786 = ((x10_long) ((dstIdx) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) value123787 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(T)>, TPMGL(T)>::__apply(x10aux::nullCheck(reduction), 
                          (*this)->FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                            prev_idx123810, ((x10_long) ((ei123811) - (prev_idx123810)))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret123788;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123785->FMGL(data)).isValid()))
                            {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123786) < (((x10_long) (((x10_int)0))))) ||
                                ((index123786) >= (this123785->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123786), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (this123785->FMGL(data)).set(index123786, value123787);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123788 = value123787;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret123788;
                        
                        //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": polyglot.ast.Branch_c
                        continue;
                    } else {
                        
                        //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        prev123809 = v123812;
                        
                        //#line 235 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        prev_idx123810 = ei123811;
                        
                        //#line 236 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this123789 =
                          (*this)->FMGL(vertexes);
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123790 = dstIdx;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value123791 = v123812;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret123792;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123789->FMGL(data)).isValid()))
                            {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123790) < (((x10_long) (((x10_int)0))))) ||
                                ((index123790) >= (this123789->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123790), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (this123789->FMGL(data)).set(index123790, value123791);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123792 = value123791;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret123792;
                        
                        //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<TPMGL(T)> this123793 =
                          (*this)->FMGL(values);
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index123794 = dstIdx;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) value123795 = (__extension__ ({
                            
                            //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<TPMGL(T)> this123796 =
                              (*this)->FMGL(values);
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index123797 = ei123811;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            TPMGL(T) ret123798;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this123796->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index123797) < (((x10_long) (((x10_int)0))))) ||
                                    ((index123797) >= (this123796->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123797), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret123798 = (this123796->FMGL(data))[index123797];
                            ret123798;
                        }))
                        ;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret123799;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123793->FMGL(data)).isValid()))
                            {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123794) < (((x10_long) (((x10_int)0))))) ||
                                ((index123794) >= (this123793->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123794), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (this123793->FMGL(data)).set(index123794, value123795);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123799 = value123795;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret123799;
                        
                        //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        dstIdx = ((x10_long) ((dstIdx) + (((x10_long)1ll))));
                        
                        //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
                        ei123811 = ((x10_long) ((ei123811) + (((x10_long)1ll))));
                    }
                    
                }
            }
            
            //#line 241 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
            cachedOffset = next123805;
            
            //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this123800 =
              (*this)->FMGL(offsets);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index123801 = ((x10_long) ((i123822) + (((x10_long) (((x10_int)1))))));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value123802 = dstIdx;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret123803;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this123800->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index123801) < (((x10_long) (((x10_int)0))))) ||
                    ((index123801) >= (this123800->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123801), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this123800->FMGL(data)).set(index123801, value123802);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret123803 = value123802;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret123803;
        }
    }
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::SparseMatrix<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::blas::SparseMatrix<TPMGL(T)>::toString(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.blas.SparseMatrix:"), x10aux::makeStringLit(" offsets=")), (*this)->
                                                                                                                                                                                                                                                                                 FMGL(offsets)), x10aux::makeStringLit(" vertexes=")), (*this)->
                                                                                                                                                                                                                                                                                                                                         FMGL(vertexes)), x10aux::makeStringLit(" values=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                FMGL(values));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::blas::SparseMatrix<TPMGL(T)>::hashCode(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(offsets)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(values)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::hashCode())));
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::SparseMatrix<TPMGL(T)>::equals(
             x10aux::class_cast<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::equals(
  org::scalegraph::blas::SparseMatrix<TPMGL(T)> other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(offsets),
                                  other->FMGL(offsets))) &&
    (x10aux::struct_equals((*this)->FMGL(vertexes), other->
                                                      FMGL(vertexes))) &&
    (x10aux::struct_equals((*this)->FMGL(values), other->
                                                    FMGL(values)));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other)))
    {
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >(other));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_struct_equals(
  org::scalegraph::blas::SparseMatrix<TPMGL(T)> other) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(offsets),
                                  other->FMGL(offsets))) &&
    (x10aux::struct_equals((*this)->FMGL(vertexes), other->
                                                      FMGL(vertexes))) &&
    (x10aux::struct_equals((*this)->FMGL(values), other->
                                                    FMGL(values)));
    
}

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::blas::SparseMatrix<TPMGL(T)>
  org::scalegraph::blas::SparseMatrix<TPMGL(T)>::org__scalegraph__blas__SparseMatrix____this__org__scalegraph__blas__SparseMatrix(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
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
    
    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_int root = (__extension__ ({
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this123627 = x10aux::nullCheck(team)->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret123628;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret123629; __ret123629: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this123627)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret123628 = (x10aux::nullCheck(this123627)->
                               FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret123629_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this123627)->
                                FMGL(region)->contains(((x10_int)0))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret123628 = (x10aux::nullCheck(this123627)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this123627)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret123629_end_;
            }
            
        }goto __ret123629_end_; __ret123629_end_: ;
        }
        ret123628;
        }))
        ;
        
    
    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long numVerts = (__extension__ ({
        
        //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this123630 =
          sparseMatrix->FMGL(offsets);
        this123630->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = (__extension__ ({
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this123631 =
          sparseMatrix->FMGL(vertexes);
        this123631->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* > ref_matrix =
      x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* >::_make((__extension__ ({
                                                                                                         
                                                                                                         //#line 189 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10LocalDecl_c
                                                                                                         x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* alloc95193 =
                                                                                                           
                                                                                                         ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >()))
                                                                                                         ;
                                                                                                         
                                                                                                         //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                                                                                                         org::scalegraph::blas::SparseMatrix<TPMGL(T)> x123778 =
                                                                                                           sparseMatrix;
                                                                                                         
                                                                                                         //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                                         alloc95193->
                                                                                                           FMGL(value) =
                                                                                                           x123778;
                                                                                                         alloc95193;
                                                                                                     }))
                                                                                                     );
    
    //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/blas/SparseMatrix.x10": x10.ast.X10Return_c
    return x10::lang::PlaceLocalHandle<void>::template make<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >* >(
             x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >*> >(sizeof(org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T)>)))org_scalegraph_blas_SparseMatrix__closure__4<TPMGL(T)>(numVerts, numEdges, team, ref_matrix, root))));
    }
#endif // ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_BLAS_SPARSEMATRIX_H_NODEPS

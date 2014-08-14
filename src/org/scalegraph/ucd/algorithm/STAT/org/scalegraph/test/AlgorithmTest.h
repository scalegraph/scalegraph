#ifndef __ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H
#define __ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_TEST_STEST_H_NODEPS
#include <org/scalegraph/test/STest.h>
#undef ORG_SCALEGRAPH_TEST_STEST_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace graph { 
class Graph;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class LongRange;
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
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
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
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace util { namespace random { 
class Random;
} } } } 
namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class EdgeList;
} } } 
namespace org { namespace scalegraph { namespace graph { 
class GraphGenerator;
} } } 
namespace org { namespace scalegraph { namespace io { 
class NamedDistData;
} } } 
namespace org { namespace scalegraph { namespace io { 
class CSV;
} } } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Ordered;
} } 
namespace org { namespace scalegraph { namespace id { 
class Type;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace org { namespace scalegraph { namespace util { 
class DistScatterGather;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Remote;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Dist2D;
} } } 
namespace org { namespace scalegraph { namespace test { 

class AlgorithmTest : public org::scalegraph::test::STest   {
    public:
    RTT_H_DECLS_CLASS
    
    using org::scalegraph::test::STest::run;
    
    virtual x10_boolean run(x10::array::Array<x10::lang::String*>* args, org::scalegraph::graph::Graph* graph) = 0;
    static org::scalegraph::util::DistMemoryChunk<x10_double> genConstanceValueEdges(
      x10::lang::Fun_0_0<x10_long>* getSize, x10_double value);
    static org::scalegraph::graph::Graph* loadGraph(x10::array::Array<x10::lang::String*>* args);
    static x10::array::Array<x10::array::Array<x10::lang::String*>*>*
      splitArgs(x10::array::Array<x10::lang::String*>* args);
    virtual x10_boolean run(x10::array::Array<x10::lang::String*>* args);
    template<class TPMGL(T)> void printError(x10_int teamSize, x10_int teamRole,
                                             x10_long local, TPMGL(T) result,
                                             TPMGL(T) reference);
    template<class TPMGL(T)> x10_boolean checkResult(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> result,
                                                     x10::lang::String* reference,
                                                     TPMGL(T) threshold);
    template<class TPMGL(T)> x10_boolean internalCheckResult(
      org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> result,
      org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> ref,
      x10_boolean withValue, TPMGL(T) threshold);
    template<class TPMGL(T)> x10_boolean checkResult(org::scalegraph::util::DistMemoryChunk<x10_long> source,
                                                     org::scalegraph::util::DistMemoryChunk<x10_long> target,
                                                     org::scalegraph::util::DistMemoryChunk<TPMGL(T)> value,
                                                     x10::lang::String* reference,
                                                     TPMGL(T) threshold);
    virtual x10_boolean checkResult(org::scalegraph::util::DistMemoryChunk<x10_long> source,
                                    org::scalegraph::util::DistMemoryChunk<x10_long> target,
                                    x10::lang::String* reference);
    virtual org::scalegraph::test::AlgorithmTest* org__scalegraph__test__AlgorithmTest____this__org__scalegraph__test__AlgorithmTest(
      );
    void _constructor();
    
    
    // Serialization
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H

namespace org { namespace scalegraph { namespace test { 
class AlgorithmTest;
} } } 

#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS
#include <org/scalegraph/test/STest.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
#include <org/scalegraph/graph/Graph.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/util/Team.h>
#include <org/scalegraph/Config.h>
#include <x10/array/PlaceGroup.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Int.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/array/Region.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/random/Random.h>
#include <org/scalegraph/util/StopWatch.h>
#include <org/scalegraph/graph/EdgeList.h>
#include <org/scalegraph/graph/GraphGenerator.h>
#include <org/scalegraph/io/NamedDistData.h>
#include <org/scalegraph/io/CSV.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Point.h>
#include <x10/array/RectRegion1D.h>
#include <x10/lang/Place.h>
#include <x10/lang/Arithmetic.h>
#include <x10/util/Ordered.h>
#include <org/scalegraph/id/Type.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Cell.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/Fun_0_2.h>
#include <org/scalegraph/util/MathAppend.h>
#include <org/scalegraph/util/DistScatterGather.h>
#include <org/scalegraph/util/Remote.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <org/scalegraph/util/Dist2D.h>
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i57247domain89563 = r;
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57247min89564 = i57247domain89563->FMGL(min);
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57247max89565 = i57247domain89563->FMGL(max);
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i89566;
            for (
                 //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i89566 = i57247min89564; ((i89566) <= (i57247max89565));
                 
                 //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i89566 = ((x10_long) ((i89566) + (((x10_long)1ll))))) {
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i89567 = i89566;
                
                //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index89552 = i89567;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret89553;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((index_->FMGL(data)).isValid()))
                                                    {
                                                        
                                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                        }
                                                        
                                                    }
                                                    
                                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (((index89552) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index89552) >= (index_->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89552), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret89553 =
                                                  (index_->
                                                     FMGL(data))[index89552];
                                                ret89553;
                                            }))
                                            , ((x10_long) ((((x10_long) ((i89567) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRole))))))))
                {
                    
                    //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                    return ((x10_int)2);
                    
                }
                
                //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff89554 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index89555 =
                                             i89567;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret89556;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((result_->
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
                                               if (((index89555) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index89555) >= (result_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89555), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret89556 = (result_->
                                                         FMGL(data))[index89555];
                                           ret89556;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index89557 =
                                             i89567;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret89558;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((refval_->
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
                                               if (((index89557) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index89557) >= (refval_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89557), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret89558 = (refval_->
                                                         FMGL(data))[index89557];
                                           ret89558;
                                       }))
                                       ));
                
                //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff89554, threshold))
                {
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    saved_this->printError<TPMGL(T) >(teamSize,
                                                      teamRole,
                                                      i89567,
                                                      (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index89559 =
                                                            i89567;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret89560;
                                                          {
                                                              
                                                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                              if (!((result_->
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
                                                              if (((index89559) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index89559) >= (result_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89559), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret89560 =
                                                            (result_->
                                                               FMGL(data))[index89559];
                                                          ret89560;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index89561 =
                                                            i89567;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret89562;
                                                          {
                                                              
                                                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                              if (!((refval_->
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
                                                              if (((index89561) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index89561) >= (refval_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89561), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret89562 =
                                                            (refval_->
                                                               FMGL(data))[index89561];
                                                          ret89562;
                                                      }))
                                                      );
                    
                    //#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                    return ((x10_int)1);
                    
                }
                
            }
        }
        
        //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return ((x10_int)0);
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> index_;
    x10_int teamSize;
    x10_int teamRole;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> result_;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_;
    TPMGL(T) threshold;
    org::scalegraph::test::AlgorithmTest* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->index_);
        buf.write(this->teamSize);
        buf.write(this->teamRole);
        buf.write(this->result_);
        buf.write(this->refval_);
        buf.write(this->threshold);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_index_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRole = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_result_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_refval_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        TPMGL(T) that_threshold = buf.read<TPMGL(T)>();
        org::scalegraph::test::AlgorithmTest* that_saved_this = buf.read<org::scalegraph::test::AlgorithmTest*>();
        org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >(that_index_, that_teamSize, that_teamRole, that_result_, that_refval_, that_threshold, that_saved_this);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__7(org::scalegraph::util::MemoryChunk<x10_long> index_, x10_int teamSize, x10_int teamRole, org::scalegraph::util::MemoryChunk<TPMGL(T)> result_, org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_, TPMGL(T) threshold, org::scalegraph::test::AlgorithmTest* saved_this) : index_(index_), teamSize(teamSize), teamRole(teamRole), result_(result_), refval_(refval_), threshold(threshold), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:161-173";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int o1, x10_int o2) {
        
        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return ((x10_int) ((o1) | (o2)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__8() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:174";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts89597 = scatterGather89673->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (i89601)));
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i87764domain89588 = i_range89594;
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i87764min89589 = i87764domain89588->FMGL(min);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i87764max89590 = i87764domain89588->FMGL(max);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i89591;
                for (
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i89591 = i87764min89589; ((i89591) <= (i87764max89590));
                     
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i89591 = ((x10_long) ((i89591) + (((x10_long)1ll)))))
                {
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i89592 = i89591;
                    
                    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long index89587 = i89592;
                    
                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long id89582 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index89583 = index89587;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret89584;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((index_->FMGL(data)).isValid()))
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
                            if (((index89583) < (((x10_long) (((x10_int)0))))) ||
                                ((index89583) >= (index_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89583), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89584 = (index_->FMGL(data))[index89583];
                        ret89584;
                    }))
                    ;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long p89585 = ((x10_long) ((id89582) & (mask)));
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long ridx89586 = ((x10_long) ((id89582) >> (0x3f & (shift))));
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int dst_role89577 = ((x10_int) (p89585));
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long dst_ind89578 = ridx89586;
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value89579 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index89580 = index89587;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret89581;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((refval_->FMGL(data)).isValid()))
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
                            if (((index89580) < (((x10_long) (((x10_int)0))))) ||
                                ((index89580) >= (refval_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89580), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89581 = (refval_->FMGL(data))[index89580];
                        ret89581;
                    }))
                    ;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x89574 =
                      counts89597;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int y89575 = dst_role89577;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int ret89576;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int r89571 = ((x10_int) (((__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index89572 = y89575;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret89573;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x89574->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index89572) < (((x10_int)0))) ||
                                ((((x10_long) (index89572))) >= (x89574->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89572), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89573 = (x89574->FMGL(data))[index89572];
                        ret89573;
                    }))
                    ) + (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index89568 = y89575;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value89569 = r89571;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret89570;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x89574->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index89568) < (((x10_int)0))) ||
                            ((((x10_long) (index89568))) >= (x89574->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89568), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (x89574->FMGL(data)).set(index89568, value89569);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89570 = value89569;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret89570;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89576 = r89571;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
                    ret89576;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc184) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc184)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc184);
                {
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc184);
                {
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather89673;
    x10_long i89601;
    x10::lang::LongRange i_range89594;
    org::scalegraph::util::MemoryChunk<x10_long> index_;
    x10_long mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather89673);
        buf.write(this->i89601);
        buf.write(this->i_range89594);
        buf.write(this->index_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->refval_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather89673 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i89601 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range89594 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_index_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_mask = buf.read<x10_long>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_refval_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >(that_scatterGather89673, that_i89601, that_i_range89594, that_index_, that_mask, that_shift, that_refval_);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__9(org::scalegraph::util::DistScatterGather scatterGather89673, x10_long i89601, x10::lang::LongRange i_range89594, org::scalegraph::util::MemoryChunk<x10_long> index_, x10_long mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_) : scatterGather89673(scatterGather89673), i89601(i89601), i_range89594(i_range89594), index_(index_), mask(mask), shift(shift), refval_(refval_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:165-171";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__10 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets89638 = scatterGather89673->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (i89642)));
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i87801domain89629 = i_range89635;
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i87801min89630 = i87801domain89629->FMGL(min);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i87801max89631 = i87801domain89629->FMGL(max);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i89632;
                for (
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i89632 = i87801min89630; ((i89632) <= (i87801max89631));
                     
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i89632 = ((x10_long) ((i89632) + (((x10_long)1ll)))))
                {
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i89633 = i89632;
                    
                    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long index89628 = i89633;
                    
                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long id89623 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index89624 = index89628;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret89625;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((index_->FMGL(data)).isValid()))
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
                            if (((index89624) < (((x10_long) (((x10_int)0))))) ||
                                ((index89624) >= (index_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89624), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89625 = (index_->FMGL(data))[index89624];
                        ret89625;
                    }))
                    ;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long p89626 = ((x10_long) ((id89623) & (mask)));
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long ridx89627 = ((x10_long) ((id89623) >> (0x3f & (shift))));
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int dst_role89618 = ((x10_int) (p89626));
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long dst_ind89619 = ridx89627;
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value89620 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index89621 = index89628;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret89622;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((refval_->FMGL(data)).isValid()))
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
                            if (((index89621) < (((x10_long) (((x10_int)0))))) ||
                                ((index89621) >= (refval_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89621), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89622 = (refval_->FMGL(data))[index89621];
                        ret89622;
                    }))
                    ;
                    
                    //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int off89614 = ((x10_int) (((__extension__ ({
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x89615 =
                          offsets89638;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int y89616 = dst_role89618;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int ret89617;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int r89605 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index89606 = y89616;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret89607;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x89615->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index89606) < (((x10_int)0))) ||
                                    ((((x10_long) (index89606))) >= (x89615->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89606), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret89607 = (x89615->FMGL(data))[index89606];
                            ret89607;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index89602 = y89616;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value89603 = r89605;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret89604;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x89615->FMGL(data)).isValid()))
                            {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index89602) < (((x10_int)0))) ||
                                ((((x10_long) (index89602))) >= (x89615->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89602), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x89615->FMGL(data)).set(index89602, value89603);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89604 = value89603;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret89604;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89617 = r89605;
                        ret89617;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index89608 = off89614;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value89609 = value89620;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret89610;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reqVal89682->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index89608) < (((x10_int)0))) ||
                            ((((x10_long) (index89608))) >= (reqVal89682->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89608), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqVal89682->FMGL(data)).set(index89608, value89609);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89610 = value89609;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret89610;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index89611 = off89614;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value89612 = dst_ind89619;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret89613;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reqIdx89683->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index89611) < (((x10_int)0))) ||
                            ((((x10_long) (index89611))) >= (reqIdx89683->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89611), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqIdx89683->FMGL(data)).set(index89611, value89612);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89613 = value89612;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret89613;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc187) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc187)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc187);
                {
                    
                    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc187);
                {
                    
                    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather89673;
    x10_long i89642;
    x10::lang::LongRange i_range89635;
    org::scalegraph::util::MemoryChunk<x10_long> index_;
    x10_long mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal89682;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx89683;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather89673);
        buf.write(this->i89642);
        buf.write(this->i_range89635);
        buf.write(this->index_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->refval_);
        buf.write(this->reqVal89682);
        buf.write(this->reqIdx89683);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather89673 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i89642 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range89635 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_index_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_mask = buf.read<x10_long>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_refval_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal89682 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx89683 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >(that_scatterGather89673, that_i89642, that_i_range89635, that_index_, that_mask, that_shift, that_refval_, that_reqVal89682, that_reqIdx89683);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__10(org::scalegraph::util::DistScatterGather scatterGather89673, x10_long i89642, x10::lang::LongRange i_range89635, org::scalegraph::util::MemoryChunk<x10_long> index_, x10_long mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal89682, org::scalegraph::util::MemoryChunk<x10_long> reqIdx89683) : scatterGather89673(scatterGather89673), i89642(i89642), i_range89635(i_range89635), index_(index_), mask(mask), shift(shift), refval_(refval_), reqVal89682(reqVal89682), reqIdx89683(reqIdx89683) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:180-188";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid89655 = ((x10_long) (idx89657));
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r89656 = i_range89661;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i87838domain89650 = r89656;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i87838min89651 = i87838domain89650->FMGL(min);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i87838max89652 = i87838domain89650->FMGL(max);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i89653;
                for (
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i89653 = i87838min89651; ((i89653) <= (i87838max89652));
                     
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i89653 = ((x10_long) ((i89653) + (((x10_long)1ll)))))
                {
                    
                    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i89654 = i89653;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index89643 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index89644 = i89654;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret89645;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvIdx89685->FMGL(data)).isValid())) {
                                
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
                            if (((index89644) < (((x10_long) (((x10_int)0))))) ||
                                ((index89644) >= (recvIdx89685->FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89644), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89645 = (recvIdx89685->FMGL(data))[index89644];
                        ret89645;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value89646 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index89647 = i89654;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret89648;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvVal89684->FMGL(data)).isValid()))
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
                            if (((index89647) < (((x10_long) (((x10_int)0))))) ||
                                ((index89647) >= (recvVal89684->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89647), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89648 = (recvVal89684->FMGL(data))[index89647];
                        ret89648;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret89649;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((array89702->FMGL(data)).isValid()))
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
                        if (((index89643) < (((x10_long) (((x10_int)0))))) ||
                            ((index89643) >= (array89702->
                                                FMGL(data)->
                                                FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89643), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (array89702->FMGL(data)).set(index89643, value89646);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89649 = value89646;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret89649;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc190) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc190)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc190);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc190);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__3__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx89657;
    x10::lang::LongRange i_range89661;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx89685;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal89684;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> array89702;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx89657);
        buf.write(this->i_range89661);
        buf.write(this->recvIdx89685);
        buf.write(this->recvVal89684);
        buf.write(this->array89702);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx89657 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range89661 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx89685 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal89684 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_array89702 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >(that_idx89657, that_i_range89661, that_recvIdx89685, that_recvVal89684, that_array89702);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__11(x10_int idx89657, x10::lang::LongRange i_range89661, org::scalegraph::util::MemoryChunk<x10_long> recvIdx89685, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal89684, org::scalegraph::util::MemoryChunk<TPMGL(T)> array89702) : idx89657(idx89657), i_range89661(i_range89661), recvIdx89685(recvIdx89685), recvVal89684(recvVal89684), array89702(array89702) { }
    
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

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i57266domain89696 = r;
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57266min89697 = i57266domain89696->FMGL(min);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57266max89698 = i57266domain89696->FMGL(max);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i89699;
            for (
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i89699 = i57266min89697; ((i89699) <= (i57266max89698));
                 
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i89699 = ((x10_long) ((i89699) + (((x10_long)1ll))))) {
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i89700 = i89699;
                
                //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff89687 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index89688 = i89700;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret89689;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((result_->FMGL(data)).isValid()))
                                               {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                               //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (((index89688) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index89688) >= (result_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89688), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret89689 = (result_->
                                                         FMGL(data))[index89688];
                                           ret89689;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index89690 =
                                             i89700;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret89691;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((recv->
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
                                               if (((index89690) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index89690) >= (recv->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89690), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret89691 = (recv->
                                                         FMGL(data))[index89690];
                                           ret89691;
                                       }))
                                       ));
                
                //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff89687, threshold))
                {
                    
                    //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    saved_this->printError<TPMGL(T) >(teamSize,
                                                      teamRole,
                                                      i89700,
                                                      (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index89692 =
                                                            i89700;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret89693;
                                                          {
                                                              
                                                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                              if (!((result_->
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
                                                              if (((index89692) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index89692) >= (result_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89692), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret89693 =
                                                            (result_->
                                                               FMGL(data))[index89692];
                                                          ret89693;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index89694 =
                                                            i89700;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret89695;
                                                          {
                                                              
                                                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                              if (!((recv->
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
                                                              if (((index89694) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index89694) >= (recv->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89694), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret89695 =
                                                            (recv->
                                                               FMGL(data))[index89694];
                                                          ret89695;
                                                      }))
                                                      );
                    
                    //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                    return ((x10_int)1);
                    
                }
                
            }
        }
        
        //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return ((x10_int)0);
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> result_;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recv;
    TPMGL(T) threshold;
    org::scalegraph::test::AlgorithmTest* saved_this;
    x10_int teamSize;
    x10_int teamRole;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->result_);
        buf.write(this->recv);
        buf.write(this->threshold);
        buf.write(this->saved_this);
        buf.write(this->teamSize);
        buf.write(this->teamRole);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_result_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recv = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        TPMGL(T) that_threshold = buf.read<TPMGL(T)>();
        org::scalegraph::test::AlgorithmTest* that_saved_this = buf.read<org::scalegraph::test::AlgorithmTest*>();
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRole = buf.read<x10_int>();
        org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >(that_result_, that_recv, that_threshold, that_saved_this, that_teamSize, that_teamRole);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__12(org::scalegraph::util::MemoryChunk<TPMGL(T)> result_, org::scalegraph::util::MemoryChunk<TPMGL(T)> recv, TPMGL(T) threshold, org::scalegraph::test::AlgorithmTest* saved_this, x10_int teamSize, x10_int teamRole) : result_(result_), recv(recv), threshold(threshold), saved_this(saved_this), teamSize(teamSize), teamRole(teamRole) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:191-200";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__13 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int o1, x10_int o2) {
        
        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return ((x10_int) ((o1) | (o2)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__13() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:201";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int teamRole = (__extension__ ({
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this86981 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret86982;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret86983; __ret86983: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this86981)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret86982 = (x10aux::nullCheck(this86981)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret86983_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this86981)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret86982 = (x10aux::nullCheck(this86981)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this86981)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret86983_end_;
                }
                
            }goto __ret86983_end_; __ret86983_end_: ;
            }
            ret86982;
            }))
            ;
            
        
        //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int teamSize = x10aux::nullCheck(team)->size();
        
        //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> result_ =
          result->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
        
        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> index_ =
          index->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_ =
          refval->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
        
        //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int flags = ((x10_int)0);
        
        //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals((__extension__ ({
                                        result_->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    , (__extension__ ({
                                        refval_->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    ))) {
            
            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            flags = ((x10_int)2);
        } else {
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            flags = org::scalegraph::util::Parallel::reduce<x10_int >(
                      (__extension__ ({
                          x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((result_->
                                                                                       FMGL(data)->
                                                                                       FMGL(size)) - (((x10_long)1ll)))));
                      }))
                      , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__7<TPMGL(T)>(index_, teamSize, teamRole, result_, refval_, threshold, saved_this))),
                      reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__8<TPMGL(T)>())));
        }
        
        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
        flags = x10aux::nullCheck(team)->allreduce(teamRole,
                                                   flags,
                                                   ((x10_int)7));
        
        //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(((x10_int) ((flags) & (((x10_int)2)))),
                                    ((x10_int)0)))) {
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_int shift = 63 - __builtin_clzl(((((x10_long) (teamSize))) << 1) - 1);
            
            //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long mask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (shift))))) - (((x10_long) (((x10_int)1))))));
            
            //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> recv =
              org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make((__extension__ ({
                result_->FMGL(data)->FMGL(size);
            }))
            , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team89701 = team;
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> array89702 =
              recv;
            
            //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range89703 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((index_->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize89672 = x10aux::nullCheck(team89701)->size();
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::DistScatterGather scatterGather89673 =
               org::scalegraph::util::DistScatterGather::_alloc();
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
            (scatterGather89673)->::org::scalegraph::util::DistScatterGather::_constructor(
              team89701);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_long>* id89674 = org::scalegraph::util::Remote::splitChunks(
                                                     range89703);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long nthreads89675 = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret89676;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret89677; __ret89677: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id89674)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89676 = (x10aux::nullCheck(id89674)->
                                      FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret89677_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id89674)->
                                        FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89676 = (x10aux::nullCheck(id89674)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id89674)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret89677_end_;
                    }
                    
                }goto __ret89677_end_; __ret89677_end_: ;
                }
                ret89676;
                }))
                ;
                
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size89678 = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret89679;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret89680; __ret89680: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id89674)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89679 = (x10aux::nullCheck(id89674)->
                                      FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret89680_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id89674)->
                                        FMGL(region)->contains(
                                        ((x10_int)1)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)1));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret89679 = (x10aux::nullCheck(id89674)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id89674)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret89680_end_;
                    }
                    
                }goto __ret89680_end_; __ret89680_end_: ;
                }
                ret89679;
                }))
                ;
                
            {
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var3 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable89772 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i87783min89598 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i87783max89599 =
                                  ((x10_long) ((nthreads89675) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i89600;
                                    for (
                                         //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i89600 = i87783min89598;
                                         ((i89600) <= (i87783max89599));
                                         
                                         //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i89600 = ((x10_long) ((i89600) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i89601 =
                                          i89600;
                                        
                                        //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start89593 =
                                          ((x10_long) ((range89703->
                                                          FMGL(min)) + (((x10_long) ((i89601) * (chunk_size89678))))));
                                        
                                        //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range89594 =
                                          x10::lang::LongRange::_make(i_start89593, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a89595 =
                                              range89703->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b89596 =
                                              ((x10_long) ((((x10_long) ((i_start89593) + (chunk_size89678)))) - (((x10_long) (((x10_int)1))))));
                                            ((a89595) < (b89596))
                                              ? (a89595) : (b89596);
                                        }))
                                        );
                                        
                                        //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T)>(scatterGather89673, i89601, i_range89594, index_, mask, shift, refval_))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc185) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc185);
                                {
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc186) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal89773 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc186);
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable89772 = formal89773;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable89772)))
                    {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable89772))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable89772));
                        }
                        
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var3);
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable89772)))
                    {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable89772)))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable89772));
                        }
                        
                    }
                    
                }
            }
            
            //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            scatterGather89673->org::scalegraph::util::DistScatterGather::sum();
            
            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int numRequests89681 = scatterGather89673->org::scalegraph::util::DistScatterGather::sendCount();
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal89682 =
              org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (numRequests89681)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> reqIdx89683 =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests89681)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var4 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable89775 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i87820min89639 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i87820max89640 =
                                  ((x10_long) ((nthreads89675) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i89641;
                                    for (
                                         //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i89641 = i87820min89639;
                                         ((i89641) <= (i87820max89640));
                                         
                                         //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i89641 = ((x10_long) ((i89641) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i89642 =
                                          i89641;
                                        
                                        //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start89634 =
                                          ((x10_long) ((range89703->
                                                          FMGL(min)) + (((x10_long) ((i89642) * (chunk_size89678))))));
                                        
                                        //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range89635 =
                                          x10::lang::LongRange::_make(i_start89634, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a89636 =
                                              range89703->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b89637 =
                                              ((x10_long) ((((x10_long) ((i_start89634) + (chunk_size89678)))) - (((x10_long) (((x10_int)1))))));
                                            ((a89636) < (b89637))
                                              ? (a89636) : (b89637);
                                        }))
                                        );
                                        
                                        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T)>(scatterGather89673, i89642, i_range89635, index_, mask, shift, refval_, reqVal89682, reqIdx89683))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc188) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc188);
                                {
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc189) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal89776 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc189);
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable89775 = formal89776;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable89775)))
                    {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable89775))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable89775));
                        }
                        
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var4);
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable89775)))
                    {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable89775)))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable89775));
                        }
                        
                    }
                    
                }
            }
            
            //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal89684 =
              scatterGather89673->scatter<TPMGL(T) >(reqVal89682);
            
            //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> recvIdx89685 =
              scatterGather89673->scatter<x10_long >(reqIdx89683);
            
            //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int recvCount89686 = scatterGather89673->org::scalegraph::util::DistScatterGather::recvCount();
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range89671 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvVal89684->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size89667 = ((x10_long) ((((x10_long) ((range89671->
                                                               FMGL(max)) - (range89671->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads89668 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size89669 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a89670 = ((x10_long) ((((x10_long) ((((x10_long) ((size89667) + (((x10_long) (nthreads89668)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads89668)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a89670) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a89670);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var5 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable89778 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i74249max89664 = ((x10_int) ((nthreads89668) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i89665;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i89665 = ((x10_int)0);
                                         ((i89665) <= (i74249max89664));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i89665 = ((x10_int) ((i89665) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i89666 = i89665;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx89657 =
                                          i89666;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start89658 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a89659 =
                                              ((x10_long) ((range89671->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b89660 =
                                              ((x10_long) ((range89671->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i89666))) * (chunk_size89669))))));
                                            ((a89659) < (b89660))
                                              ? (a89659) : (b89660);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range89661 =
                                          x10::lang::LongRange::_make(i_start89658, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a89662 =
                                              range89671->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b89663 =
                                              ((x10_long) ((((x10_long) ((i_start89658) + (chunk_size89669)))) - (((x10_long) (((x10_int)1))))));
                                            ((a89662) < (b89663))
                                              ? (a89662) : (b89663);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T)>(idx89657, i_range89661, recvIdx89685, recvVal89684, array89702))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc191) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc191);
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__2__);
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc192) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal89779 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc192);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable89778 = formal89779;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable89778)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable89778))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable89778));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var5);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable89778)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable89778)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable89778));
                        }
                        
                    }
                    
                }
            }
            
            //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            flags = org::scalegraph::util::Parallel::reduce<x10_int >(
                      (__extension__ ({
                          x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((result_->
                                                                                       FMGL(data)->
                                                                                       FMGL(size)) - (((x10_long)1ll)))));
                      }))
                      , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__12<TPMGL(T)>(result_, recv, threshold, saved_this, teamSize, teamRole))),
                      reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__13<TPMGL(T)>())));
            
            //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            flags = x10aux::nullCheck(team)->allreduce(teamRole,
                                                       flags,
                                                       ((x10_int)7));
            }
            
            //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::place((checkResult)->location),
                                       x10::lang::Place::_make(x10aux::here))))
            {
                
                //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10_boolean>* this89706 =
                  x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<x10_boolean>* >(checkResult);
                
                //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean x89707 = (x10aux::struct_equals(flags,
                                                            ((x10_int)0)));
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean x89704 = x89707;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean ret89705;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(this89706)->FMGL(value) =
                  x89704;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
                ret89705 = x89704;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
                ret89705;
            }
            
        }
        
        // captured environment
        x10::util::Team* team;
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> result;
        org::scalegraph::util::DistMemoryChunk<x10_long> index;
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> refval;
        TPMGL(T) threshold;
        org::scalegraph::test::AlgorithmTest* saved_this;
        x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > checkResult;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->team);
            buf.write(this->result);
            buf.write(this->index);
            buf.write(this->refval);
            buf.write(this->threshold);
            buf.write(this->saved_this);
            buf.write(this->checkResult);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) > >();
            buf.record_reference(storage);
            x10::util::Team* that_team = buf.read<x10::util::Team*>();
            org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_result = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
            org::scalegraph::util::DistMemoryChunk<x10_long> that_index = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_refval = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
            TPMGL(T) that_threshold = buf.read<TPMGL(T)>();
            org::scalegraph::test::AlgorithmTest* that_saved_this = buf.read<org::scalegraph::test::AlgorithmTest*>();
            x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > that_checkResult = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > >();
            org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >(that_team, that_result, that_index, that_refval, that_threshold, that_saved_this, that_checkResult);
            return this_;
        }
        
        org_scalegraph_test_AlgorithmTest__closure__6(x10::util::Team* team, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> result, org::scalegraph::util::DistMemoryChunk<x10_long> index, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> refval, TPMGL(T) threshold, org::scalegraph::test::AlgorithmTest* saved_this, x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > checkResult) : team(team), result(result), index(index), refval(refval), threshold(threshold), saved_this(saved_this), checkResult(checkResult) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:149-209";
        }
        
        };
        
        template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
        template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};
        
        template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >::_serialization_id = 
            x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);
        
        #endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__6_CLOSURE
        #ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int lerror = ((x10_int)0);
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i57285domain89714 = r;
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57285min89715 = i57285domain89714->FMGL(min);
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57285max89716 = i57285domain89714->FMGL(max);
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i89717;
            for (
                 //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i89717 = i57285min89715; ((i89717) <= (i57285max89716));
                 
                 //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i89717 = ((x10_long) ((i89717) + (((x10_long)1ll))))) {
                
                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i89718 = i89717;
                
                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this89708 =
                                                  res_->FMGL(offsets);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index89709 =
                                                  i89718;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret89710;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this89708->
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
                                                    if (((index89709) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index89709) >= (this89708->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89709), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret89710 =
                                                  (this89708->
                                                     FMGL(data))[index89709];
                                                ret89710;
                                            }))
                                            , (__extension__ ({
                                                
                                                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this89711 =
                                                  ref_->FMGL(offsets);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index89712 =
                                                  i89718;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret89713;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this89711->
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
                                                    if (((index89712) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index89712) >= (this89711->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89712), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret89713 =
                                                  (this89711->
                                                     FMGL(data))[index89712];
                                                ret89713;
                                            }))
                                            ))) {
                    
                    //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                    lerror = ((x10_int)1);
                }
                
            }
        }
        
        //#line 240 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return lerror;
        
    }
    
    // captured environment
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> res_;
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> ref_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->res_);
        buf.write(this->ref_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> that_res_ = buf.read<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> that_ref_ = buf.read<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >(that_res_, that_ref_);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__15(org::scalegraph::blas::SparseMatrix<TPMGL(T)> res_, org::scalegraph::blas::SparseMatrix<TPMGL(T)> ref_) : res_(res_), ref_(ref_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:237-241";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int a, x10_int b) {
        
        //#line 241 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return ((x10_int) ((a) | (b)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__16() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:241";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__17 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int lerror = ((x10_int)0);
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i57304domain89725 = r;
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57304min89726 = i57304domain89725->FMGL(min);
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57304max89727 = i57304domain89725->FMGL(max);
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i89728;
            for (
                 //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i89728 = i57304min89726; ((i89728) <= (i57304max89727));
                 
                 //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i89728 = ((x10_long) ((i89728) + (((x10_long)1ll))))) {
                
                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i89729 = i89728;
                
                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this89719 =
                                                  res_->FMGL(vertexes);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index89720 =
                                                  i89729;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret89721;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this89719->
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
                                                    if (((index89720) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index89720) >= (this89719->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89720), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret89721 =
                                                  (this89719->
                                                     FMGL(data))[index89720];
                                                ret89721;
                                            }))
                                            , (__extension__ ({
                                                
                                                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this89722 =
                                                  ref_->FMGL(vertexes);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index89723 =
                                                  i89729;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret89724;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this89722->
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
                                                    if (((index89723) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index89723) >= (this89722->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89723), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret89724 =
                                                  (this89722->
                                                     FMGL(data))[index89723];
                                                ret89724;
                                            }))
                                            ))) {
                    
                    //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                    lerror = ((x10_int)1);
                }
                
            }
        }
        
        //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return lerror;
        
    }
    
    // captured environment
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> res_;
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> ref_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->res_);
        buf.write(this->ref_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> that_res_ = buf.read<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> that_ref_ = buf.read<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >(that_res_, that_ref_);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__17(org::scalegraph::blas::SparseMatrix<TPMGL(T)> res_, org::scalegraph::blas::SparseMatrix<TPMGL(T)> ref_) : res_(res_), ref_(ref_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:243-247";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__17_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__18 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int a, x10_int b) {
        
        //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return ((x10_int) ((a) | (b)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__18() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:247";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__19_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__19 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 251 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int lerror = ((x10_int)0);
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i57323domain89737 = r;
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57323min89738 = i57323domain89737->FMGL(min);
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i57323max89739 = i57323domain89737->FMGL(max);
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i89740;
            for (
                 //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i89740 = i57323min89738; ((i89740) <= (i57323max89739));
                 
                 //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i89740 = ((x10_long) ((i89740) + (((x10_long)1ll))))) {
                
                //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i89741 = i89740;
                
                //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff89730 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> this89731 =
                                             res_->FMGL(values);
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index89732 =
                                             i89741;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret89733;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((this89731->
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
                                               if (((index89732) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index89732) >= (this89731->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89732), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret89733 = (this89731->
                                                         FMGL(data))[index89732];
                                           ret89733;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> this89734 =
                                             ref_->FMGL(values);
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index89735 =
                                             i89741;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret89736;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((this89734->
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
                                               if (((index89735) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index89735) >= (this89734->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89735), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret89736 = (this89734->
                                                         FMGL(data))[index89735];
                                           ret89736;
                                       }))
                                       ));
                
                //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff89730, threshold))
                {
                    
                    //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                    lerror = ((x10_int)1);
                }
                
            }
        }
        
        //#line 256 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return lerror;
        
    }
    
    // captured environment
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> res_;
    org::scalegraph::blas::SparseMatrix<TPMGL(T)> ref_;
    TPMGL(T) threshold;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->res_);
        buf.write(this->ref_);
        buf.write(this->threshold);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> that_res_ = buf.read<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> that_ref_ = buf.read<org::scalegraph::blas::SparseMatrix<TPMGL(T)> >();
        TPMGL(T) that_threshold = buf.read<TPMGL(T)>();
        org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >(that_res_, that_ref_, that_threshold);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__19(org::scalegraph::blas::SparseMatrix<TPMGL(T)> res_, org::scalegraph::blas::SparseMatrix<TPMGL(T)> ref_, TPMGL(T) threshold) : res_(res_), ref_(ref_), threshold(threshold) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:250-257";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__19_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__20_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__20 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int a, x10_int b) {
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return ((x10_int) ((a) | (b)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__20() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:257";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__20_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_test_AlgorithmTest__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int teamRole = (__extension__ ({
            
            //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this89323 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret89324;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret89325; __ret89325: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this89323)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89324 = (x10aux::nullCheck(this89323)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret89325_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this89323)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89324 = (x10aux::nullCheck(this89323)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this89323)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret89325_end_;
                }
                
            }goto __ret89325_end_; __ret89325_end_: ;
            }
            ret89324;
            }))
            ;
            
        
        //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int teamSize = x10aux::nullCheck(team)->size();
        
        //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> res_ =
          result->org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::__apply();
        
        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::blas::SparseMatrix<TPMGL(T)> ref_ =
          ref->org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::__apply();
        
        //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int error = ((x10_int)0);
        
        //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long numVertexes = ((x10_long) (((__extension__ ({
            
            //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this89326 =
              res_->FMGL(offsets);
            this89326->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long) (((x10_int)1))))));
        
        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals((__extension__ ({
                                        
                                        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<x10_long> this89327 =
                                          res_->FMGL(offsets);
                                        this89327->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    , (__extension__ ({
                                        
                                        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<x10_long> this89328 =
                                          ref_->FMGL(offsets);
                                        this89328->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    )) || (!x10aux::struct_equals((__extension__ ({
                                                                      
                                                                      //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      org::scalegraph::util::MemoryChunk<x10_long> this89329 =
                                                                        res_->
                                                                          FMGL(vertexes);
                                                                      this89329->
                                                                        FMGL(data)->
                                                                        FMGL(size);
                                                                  }))
                                                                  ,
                                                                  (__extension__ ({
                                                                      
                                                                      //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      org::scalegraph::util::MemoryChunk<x10_long> this89330 =
                                                                        ref_->
                                                                          FMGL(vertexes);
                                                                      this89330->
                                                                        FMGL(data)->
                                                                        FMGL(size);
                                                                  }))
                                                                  )))
        {
            
            //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            error = ((x10_int)1);
        } else {
            
            //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            error = ((x10_int) ((error) | (org::scalegraph::util::Parallel::reduce<x10_int >(
                                             (__extension__ ({
                                                 
                                                 //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::MemoryChunk<x10_long> this89331 =
                                                   res_->
                                                     FMGL(offsets);
                                                 x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this89331->
                                                                                                              FMGL(data)->
                                                                                                              FMGL(size)) - (((x10_long)1ll)))));
                                             }))
                                             , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T)>(res_, ref_))),
                                             reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T)>()))))));
            
            //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            error = ((x10_int) ((error) | (org::scalegraph::util::Parallel::reduce<x10_int >(
                                             (__extension__ ({
                                                 
                                                 //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::MemoryChunk<x10_long> this89340 =
                                                   res_->
                                                     FMGL(vertexes);
                                                 x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this89340->
                                                                                                              FMGL(data)->
                                                                                                              FMGL(size)) - (((x10_long)1ll)))));
                                             }))
                                             , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__17<TPMGL(T)>(res_, ref_))),
                                             reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__18<TPMGL(T)>()))))));
            
            //#line 249 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
            if (withValue) {
                
                //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                error = ((x10_int) ((error) | (org::scalegraph::util::Parallel::reduce<x10_int >(
                                                 (__extension__ ({
                                                     
                                                     //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                     org::scalegraph::util::MemoryChunk<TPMGL(T)> this89349 =
                                                       res_->
                                                         FMGL(values);
                                                     x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this89349->
                                                                                                                  FMGL(data)->
                                                                                                                  FMGL(size)) - (((x10_long)1ll)))));
                                                 }))
                                                 , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__19<TPMGL(T)>(res_, ref_, threshold))),
                                                 reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__20<TPMGL(T)>()))))));
            }
            
        }
        
        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
        error = x10aux::nullCheck(team)->allreduce(teamRole,
                                                   error,
                                                   ((x10_int)7));
        
        //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::place((checkResult)->location),
                                   x10::lang::Place::_make(x10aux::here))))
        {
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10_boolean>* this89744 = x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<x10_boolean>* >(checkResult);
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean x89745 = (x10aux::struct_equals(error,
                                                        ((x10_int)0)));
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean x89742 = x89745;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret89743;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this89744)->FMGL(value) = x89742;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret89743 = x89742;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret89743;
        }
        }
        
        // captured environment
        x10::util::Team* team;
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> result;
        org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> ref;
        x10_boolean withValue;
        TPMGL(T) threshold;
        x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > checkResult;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->team);
            buf.write(this->result);
            buf.write(this->ref);
            buf.write(this->withValue);
            buf.write(this->threshold);
            buf.write(this->checkResult);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) > >();
            buf.record_reference(storage);
            x10::util::Team* that_team = buf.read<x10::util::Team*>();
            org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> that_result = buf.read<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >();
            org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> that_ref = buf.read<org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> >();
            x10_boolean that_withValue = buf.read<x10_boolean>();
            TPMGL(T) that_threshold = buf.read<TPMGL(T)>();
            x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > that_checkResult = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > >();
            org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >(that_team, that_result, that_ref, that_withValue, that_threshold, that_checkResult);
            return this_;
        }
        
        org_scalegraph_test_AlgorithmTest__closure__14(x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> result, org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> ref, x10_boolean withValue, TPMGL(T) threshold, x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > checkResult) : team(team), result(result), ref(ref), withValue(withValue), threshold(threshold), checkResult(checkResult) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:221-266";
        }
    
    };
    
    template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) > >org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >::__apply, &org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
    template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};
    
    template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >::_serialization_id = 
        x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);
    
    #endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__14_CLOSURE
    #ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_GENERICS
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_GENERICS
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_printError_181
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_printError_181
template<class TPMGL(T)> void org::scalegraph::test::AlgorithmTest::printError(
  x10_int teamSize, x10_int teamRole, x10_long local, TPMGL(T) result, TPMGL(T) reference) {
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::println(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Check result: error: here="), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                                                             FMGL(id)), x10aux::makeStringLit(",pos=")), ((x10_long) ((((x10_long) ((local) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRole)))))), x10aux::makeStringLit("(local=")), local), x10aux::makeStringLit("),result=")), result), x10aux::makeStringLit(",reference=")), reference)));
}
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_printError_181
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_182
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_182
template<class TPMGL(T)> x10_boolean org::scalegraph::test::AlgorithmTest::checkResult(
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> result,
  x10::lang::String* reference, TPMGL(T) threshold) {
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::NamedDistData* refdata = org::scalegraph::io::CSV::read(
                                                    (__extension__ ({
                                                        
                                                        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::String* str86974 =
                                                          reference;
                                                        (__extension__ ({
                                                            
                                                            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::SString alloc86975 =
                                                              
                                                            org::scalegraph::util::SString::_alloc();
                                                            
                                                            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                            x10::lang::String* str89551 =
                                                              str86974;
                                                            
                                                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                            alloc86975->
                                                              FMGL(content) =
                                                              org::scalegraph::util::StringFromX10String(str89551);
                                                            alloc86975;
                                                        }))
                                                        ;
                                                    }))
                                                    , (x10::array::Array<x10_int>*)(__extension__ ({
                                                        x10::array::Array<x10_int>* __var183__(x10::array::Array<x10_int>::_make(2));
                                                        __var183__->__set(0, 
                                                        (((x10_int)5)));
                                                        __var183__->__set(1, 
                                                        (org::scalegraph::id::TypeIdOf<TPMGL(T) >::value));
                                                        __var183__;
                                                    })), true);
    
    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Read reference data[path="), reference), x10aux::makeStringLit("]")));
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> index =
      refdata->template get<x10_long >(((x10_int)0));
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> refval =
      refdata->template get<TPMGL(T) >(((x10_int)1));
    
    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > checkResult =
      x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* >::_make((__extension__ ({
                                                                      
                                                                      //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      x10::lang::Cell<x10_boolean>* alloc57214 =
                                                                        
                                                                      ((new (memset(x10aux::alloc<x10::lang::Cell<x10_boolean> >(), 0, sizeof(x10::lang::Cell<x10_boolean>))) x10::lang::Cell<x10_boolean>()))
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                      alloc57214->
                                                                        FMGL(value) =
                                                                        false;
                                                                      alloc57214;
                                                                  }))
                                                                  );
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__6<TPMGL(T)>(team, result, index, refval, threshold, this, checkResult))));
    
    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("Compare result and reference data"));
    
    //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_boolean>* this89319 = (checkResult)->__apply();
        x10aux::nullCheck(this89319)->FMGL(value);
    }))
    ;
    
}
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_182
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_internalCheckResult_193
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_internalCheckResult_193
template<class TPMGL(T)> x10_boolean org::scalegraph::test::AlgorithmTest::internalCheckResult(
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> result,
  org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> ref, x10_boolean withValue,
  TPMGL(T) threshold) {
    
    //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* > checkResult =
      x10::lang::GlobalRef<x10::lang::Cell<x10_boolean>* >::_make((__extension__ ({
                                                                      
                                                                      //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      x10::lang::Cell<x10_boolean>* alloc57215 =
                                                                        
                                                                      ((new (memset(x10aux::alloc<x10::lang::Cell<x10_boolean> >(), 0, sizeof(x10::lang::Cell<x10_boolean>))) x10::lang::Cell<x10_boolean>()))
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                      alloc57215->
                                                                        FMGL(value) =
                                                                        false;
                                                                      alloc57215;
                                                                  }))
                                                                  );
    
    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T)>(team, result, ref, withValue, threshold, checkResult))));
    
    //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_boolean>* this89365 = (checkResult)->__apply();
        x10aux::nullCheck(this89365)->FMGL(value);
    }))
    ;
    
}
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_internalCheckResult_193
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_194
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_194
template<class TPMGL(T)> x10_boolean org::scalegraph::test::AlgorithmTest::checkResult(
  org::scalegraph::util::DistMemoryChunk<x10_long> source,
  org::scalegraph::util::DistMemoryChunk<x10_long> target,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> value,
  x10::lang::String* reference, TPMGL(T) threshold) {
    
    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 276 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* resdata = org::scalegraph::graph::Graph::make(
                                               (__extension__ ({
                                                   
                                                   //#line 276 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::graph::EdgeList<x10_long> alloc57216 =
                                                      org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                                   
                                                   //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::DistMemoryChunk<x10_long> src89746 =
                                                     source;
                                                   
                                                   //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::DistMemoryChunk<x10_long> dst89747 =
                                                     target;
                                                   
                                                   //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                   alloc57216->
                                                     FMGL(src) =
                                                     src89746;
                                                   
                                                   //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                   alloc57216->
                                                     FMGL(dst) =
                                                     dst89747;
                                                   alloc57216;
                                               }))
                                               );
    
    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    resdata->template setEdgeAttribute<TPMGL(T) >(x10aux::makeStringLit("weight"),
                                                  value);
    
    //#line 278 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> res =
      resdata->template createDistSparseMatrix<TPMGL(T) >(
        x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
        x10aux::makeStringLit("weight"), true, true);
    
    //#line 279 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("Construct a graph from result"));
    
    //#line 280 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* refdata = (__extension__ ({
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::NamedDistData* edgeData89493 =
          org::scalegraph::io::CSV::read((__extension__ ({
                                             
                                             //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                             x10::lang::String* str89489 =
                                               reference;
                                             (__extension__ ({
                                                 
                                                 //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::SString alloc89490 =
                                                    org::scalegraph::util::SString::_alloc();
                                                 
                                                 //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                 x10::lang::String* str89748 =
                                                   str89489;
                                                 
                                                 //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                 alloc89490->
                                                   FMGL(content) =
                                                   org::scalegraph::util::StringFromX10String(str89748);
                                                 alloc89490;
                                             }))
                                             ;
                                         }))
                                         , (x10::array::Array<x10_int>*)(__extension__ ({
                                             x10::array::Array<x10_int>* __var195__(x10::array::Array<x10_int>::_make(3));
                                             __var195__->__set(0, 
                                             (((x10_int)5)));
                                             __var195__->__set(1, 
                                             (((x10_int)5)));
                                             __var195__->__set(2, 
                                             (((x10_int)7)));
                                             __var195__;
                                         })), (x10::array::Array<x10::lang::String*>*)(__extension__ ({
                                             x10::array::Array<x10::lang::String*>* __var196__(x10::array::Array<x10::lang::String*>::_make(3));
                                             __var196__->__set(0, 
                                             (x10aux::makeStringLit("source")));
                                             __var196__->__set(1, 
                                             (x10aux::makeStringLit("target")));
                                             __var196__->__set(2, 
                                             (x10aux::makeStringLit("weight")));
                                             __var196__;
                                         })));
        org::scalegraph::graph::Graph::make(edgeData89493,
                                            x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                            false);
    }))
    ;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Read reference data[path="), reference), x10aux::makeStringLit("]")));
    
    //#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix<TPMGL(T)> ref =
      refdata->template createDistSparseMatrix<TPMGL(T) >(
        x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
        x10aux::makeStringLit("weight"), true, true);
    
    //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("Construct a graph from reference data"));
    
    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    x10_boolean ret = this->template internalCheckResult<TPMGL(T) >(
                        res, ref, true, threshold);
    
    //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("Compare result and reference data"));
    
    //#line 289 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
    return ret;
    
}
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_194
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_GENERICS
#endif // __ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS

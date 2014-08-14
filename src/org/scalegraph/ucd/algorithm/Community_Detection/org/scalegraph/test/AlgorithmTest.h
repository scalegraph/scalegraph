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
        x10::lang::LongRange i58850domain90516 = r;
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58850min90517 = i58850domain90516->FMGL(min);
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58850max90518 = i58850domain90516->FMGL(max);
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i90519;
            for (
                 //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i90519 = i58850min90517; ((i90519) <= (i58850max90518));
                 
                 //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i90519 = ((x10_long) ((i90519) + (((x10_long)1ll))))) {
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i90520 = i90519;
                
                //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index90505 = i90520;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret90506;
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
                                                    if (((index90505) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index90505) >= (index_->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90505), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret90506 =
                                                  (index_->
                                                     FMGL(data))[index90505];
                                                ret90506;
                                            }))
                                            , ((x10_long) ((((x10_long) ((i90520) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRole))))))))
                {
                    
                    //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                    return ((x10_int)2);
                    
                }
                
                //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff90507 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index90508 =
                                             i90520;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret90509;
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
                                               if (((index90508) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index90508) >= (result_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90508), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret90509 = (result_->
                                                         FMGL(data))[index90508];
                                           ret90509;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index90510 =
                                             i90520;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret90511;
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
                                               if (((index90510) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index90510) >= (refval_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90510), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret90511 = (refval_->
                                                         FMGL(data))[index90510];
                                           ret90511;
                                       }))
                                       ));
                
                //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff90507, threshold))
                {
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    saved_this->printError<TPMGL(T) >(teamSize,
                                                      teamRole,
                                                      i90520,
                                                      (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index90512 =
                                                            i90520;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret90513;
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
                                                              if (((index90512) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index90512) >= (result_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90512), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret90513 =
                                                            (result_->
                                                               FMGL(data))[index90512];
                                                          ret90513;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index90514 =
                                                            i90520;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret90515;
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
                                                              if (((index90514) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index90514) >= (refval_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90514), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret90515 =
                                                            (refval_->
                                                               FMGL(data))[index90514];
                                                          ret90515;
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
            org::scalegraph::util::MemoryChunk<x10_int> counts90550 = scatterGather90626->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (i90554)));
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88704domain90541 = i_range90547;
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88704min90542 = i88704domain90541->FMGL(min);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88704max90543 = i88704domain90541->FMGL(max);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i90544;
                for (
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i90544 = i88704min90542; ((i90544) <= (i88704max90543));
                     
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i90544 = ((x10_long) ((i90544) + (((x10_long)1ll)))))
                {
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i90545 = i90544;
                    
                    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long index90540 = i90545;
                    
                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long id90535 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index90536 = index90540;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret90537;
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
                            if (((index90536) < (((x10_long) (((x10_int)0))))) ||
                                ((index90536) >= (index_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90536), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90537 = (index_->FMGL(data))[index90536];
                        ret90537;
                    }))
                    ;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long p90538 = ((x10_long) ((id90535) & (mask)));
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long ridx90539 = ((x10_long) ((id90535) >> (0x3f & (shift))));
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int dst_role90530 = ((x10_int) (p90538));
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long dst_ind90531 = ridx90539;
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value90532 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index90533 = index90540;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret90534;
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
                            if (((index90533) < (((x10_long) (((x10_int)0))))) ||
                                ((index90533) >= (refval_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90533), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90534 = (refval_->FMGL(data))[index90533];
                        ret90534;
                    }))
                    ;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x90527 =
                      counts90550;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int y90528 = dst_role90530;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int ret90529;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int r90524 = ((x10_int) (((__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index90525 = y90528;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret90526;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x90527->FMGL(data)).isValid()))
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
                            if (((index90525) < (((x10_int)0))) ||
                                ((((x10_long) (index90525))) >= (x90527->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90525), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90526 = (x90527->FMGL(data))[index90525];
                        ret90526;
                    }))
                    ) + (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index90521 = y90528;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value90522 = r90524;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret90523;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x90527->FMGL(data)).isValid()))
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
                        if (((index90521) < (((x10_int)0))) ||
                            ((((x10_long) (index90521))) >= (x90527->
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
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90521), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (x90527->FMGL(data)).set(index90521, value90522);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90523 = value90522;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret90523;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90529 = r90524;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
                    ret90529;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc150) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc150)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc150);
                {
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc150);
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
    org::scalegraph::util::DistScatterGather scatterGather90626;
    x10_long i90554;
    x10::lang::LongRange i_range90547;
    org::scalegraph::util::MemoryChunk<x10_long> index_;
    x10_long mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather90626);
        buf.write(this->i90554);
        buf.write(this->i_range90547);
        buf.write(this->index_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->refval_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather90626 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i90554 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range90547 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_index_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_mask = buf.read<x10_long>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_refval_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >(that_scatterGather90626, that_i90554, that_i_range90547, that_index_, that_mask, that_shift, that_refval_);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__9(org::scalegraph::util::DistScatterGather scatterGather90626, x10_long i90554, x10::lang::LongRange i_range90547, org::scalegraph::util::MemoryChunk<x10_long> index_, x10_long mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_) : scatterGather90626(scatterGather90626), i90554(i90554), i_range90547(i_range90547), index_(index_), mask(mask), shift(shift), refval_(refval_) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> offsets90591 = scatterGather90626->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (i90595)));
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88741domain90582 = i_range90588;
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88741min90583 = i88741domain90582->FMGL(min);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88741max90584 = i88741domain90582->FMGL(max);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i90585;
                for (
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i90585 = i88741min90583; ((i90585) <= (i88741max90584));
                     
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i90585 = ((x10_long) ((i90585) + (((x10_long)1ll)))))
                {
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i90586 = i90585;
                    
                    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long index90581 = i90586;
                    
                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long id90576 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index90577 = index90581;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret90578;
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
                            if (((index90577) < (((x10_long) (((x10_int)0))))) ||
                                ((index90577) >= (index_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90577), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90578 = (index_->FMGL(data))[index90577];
                        ret90578;
                    }))
                    ;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long p90579 = ((x10_long) ((id90576) & (mask)));
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long ridx90580 = ((x10_long) ((id90576) >> (0x3f & (shift))));
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int dst_role90571 = ((x10_int) (p90579));
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long dst_ind90572 = ridx90580;
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value90573 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index90574 = index90581;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret90575;
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
                            if (((index90574) < (((x10_long) (((x10_int)0))))) ||
                                ((index90574) >= (refval_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90574), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90575 = (refval_->FMGL(data))[index90574];
                        ret90575;
                    }))
                    ;
                    
                    //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int off90567 = ((x10_int) (((__extension__ ({
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x90568 =
                          offsets90591;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int y90569 = dst_role90571;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int ret90570;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int r90558 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index90559 = y90569;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret90560;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x90568->FMGL(data)).isValid()))
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
                                if (((index90559) < (((x10_int)0))) ||
                                    ((((x10_long) (index90559))) >= (x90568->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90559), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret90560 = (x90568->FMGL(data))[index90559];
                            ret90560;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index90555 = y90569;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value90556 = r90558;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret90557;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x90568->FMGL(data)).isValid()))
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
                            if (((index90555) < (((x10_int)0))) ||
                                ((((x10_long) (index90555))) >= (x90568->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90555), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x90568->FMGL(data)).set(index90555, value90556);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90557 = value90556;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret90557;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90570 = r90558;
                        ret90570;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index90561 = off90567;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value90562 = value90573;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret90563;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reqVal90635->FMGL(data)).isValid()))
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
                        if (((index90561) < (((x10_int)0))) ||
                            ((((x10_long) (index90561))) >= (reqVal90635->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90561), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqVal90635->FMGL(data)).set(index90561, value90562);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90563 = value90562;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret90563;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index90564 = off90567;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value90565 = dst_ind90572;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret90566;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reqIdx90636->FMGL(data)).isValid()))
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
                        if (((index90564) < (((x10_int)0))) ||
                            ((((x10_long) (index90564))) >= (reqIdx90636->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90564), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqIdx90636->FMGL(data)).set(index90564, value90565);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90566 = value90565;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret90566;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc153) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc153)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc153);
                {
                    
                    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc153);
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
    org::scalegraph::util::DistScatterGather scatterGather90626;
    x10_long i90595;
    x10::lang::LongRange i_range90588;
    org::scalegraph::util::MemoryChunk<x10_long> index_;
    x10_long mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal90635;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx90636;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather90626);
        buf.write(this->i90595);
        buf.write(this->i_range90588);
        buf.write(this->index_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->refval_);
        buf.write(this->reqVal90635);
        buf.write(this->reqIdx90636);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather90626 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i90595 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range90588 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_index_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_mask = buf.read<x10_long>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_refval_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal90635 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx90636 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >(that_scatterGather90626, that_i90595, that_i_range90588, that_index_, that_mask, that_shift, that_refval_, that_reqVal90635, that_reqIdx90636);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__10(org::scalegraph::util::DistScatterGather scatterGather90626, x10_long i90595, x10::lang::LongRange i_range90588, org::scalegraph::util::MemoryChunk<x10_long> index_, x10_long mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal90635, org::scalegraph::util::MemoryChunk<x10_long> reqIdx90636) : scatterGather90626(scatterGather90626), i90595(i90595), i_range90588(i_range90588), index_(index_), mask(mask), shift(shift), refval_(refval_), reqVal90635(reqVal90635), reqIdx90636(reqIdx90636) { }
    
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
            x10_long tid90608 = ((x10_long) (idx90610));
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r90609 = i_range90614;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88778domain90603 = r90609;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88778min90604 = i88778domain90603->FMGL(min);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88778max90605 = i88778domain90603->FMGL(max);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i90606;
                for (
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i90606 = i88778min90604; ((i90606) <= (i88778max90605));
                     
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i90606 = ((x10_long) ((i90606) + (((x10_long)1ll)))))
                {
                    
                    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i90607 = i90606;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index90596 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index90597 = i90607;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret90598;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvIdx90638->FMGL(data)).isValid())) {
                                
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
                            if (((index90597) < (((x10_long) (((x10_int)0))))) ||
                                ((index90597) >= (recvIdx90638->FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90597), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90598 = (recvIdx90638->FMGL(data))[index90597];
                        ret90598;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value90599 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index90600 = i90607;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret90601;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvVal90637->FMGL(data)).isValid()))
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
                            if (((index90600) < (((x10_long) (((x10_int)0))))) ||
                                ((index90600) >= (recvVal90637->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90600), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90601 = (recvVal90637->FMGL(data))[index90600];
                        ret90601;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret90602;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((array90655->FMGL(data)).isValid()))
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
                        if (((index90596) < (((x10_long) (((x10_int)0))))) ||
                            ((index90596) >= (array90655->
                                                FMGL(data)->
                                                FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90596), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (array90655->FMGL(data)).set(index90596, value90599);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90602 = value90599;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret90602;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc156) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc156)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc156);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc156);
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
    x10_int idx90610;
    x10::lang::LongRange i_range90614;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx90638;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal90637;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> array90655;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx90610);
        buf.write(this->i_range90614);
        buf.write(this->recvIdx90638);
        buf.write(this->recvVal90637);
        buf.write(this->array90655);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx90610 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range90614 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx90638 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal90637 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_array90655 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >(that_idx90610, that_i_range90614, that_recvIdx90638, that_recvVal90637, that_array90655);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__11(x10_int idx90610, x10::lang::LongRange i_range90614, org::scalegraph::util::MemoryChunk<x10_long> recvIdx90638, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal90637, org::scalegraph::util::MemoryChunk<TPMGL(T)> array90655) : idx90610(idx90610), i_range90614(i_range90614), recvIdx90638(recvIdx90638), recvVal90637(recvVal90637), array90655(array90655) { }
    
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
        x10::lang::LongRange i58869domain90649 = r;
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58869min90650 = i58869domain90649->FMGL(min);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58869max90651 = i58869domain90649->FMGL(max);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i90652;
            for (
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i90652 = i58869min90650; ((i90652) <= (i58869max90651));
                 
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i90652 = ((x10_long) ((i90652) + (((x10_long)1ll))))) {
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i90653 = i90652;
                
                //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff90640 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index90641 = i90653;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret90642;
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
                                               if (((index90641) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index90641) >= (result_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90641), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret90642 = (result_->
                                                         FMGL(data))[index90641];
                                           ret90642;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index90643 =
                                             i90653;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret90644;
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
                                               if (((index90643) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index90643) >= (recv->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90643), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret90644 = (recv->
                                                         FMGL(data))[index90643];
                                           ret90644;
                                       }))
                                       ));
                
                //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff90640, threshold))
                {
                    
                    //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    saved_this->printError<TPMGL(T) >(teamSize,
                                                      teamRole,
                                                      i90653,
                                                      (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index90645 =
                                                            i90653;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret90646;
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
                                                              if (((index90645) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index90645) >= (result_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90645), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret90646 =
                                                            (result_->
                                                               FMGL(data))[index90645];
                                                          ret90646;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index90647 =
                                                            i90653;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret90648;
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
                                                              if (((index90647) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index90647) >= (recv->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90647), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret90648 =
                                                            (recv->
                                                               FMGL(data))[index90647];
                                                          ret90648;
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
            x10::array::Array<x10_int>* this87921 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret87922;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret87923; __ret87923: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this87921)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret87922 = (x10aux::nullCheck(this87921)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret87923_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this87921)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret87922 = (x10aux::nullCheck(this87921)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this87921)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret87923_end_;
                }
                
            }goto __ret87923_end_; __ret87923_end_: ;
            }
            ret87922;
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
            x10::util::Team* team90654 = team;
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> array90655 =
              recv;
            
            //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range90656 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((index_->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize90625 = x10aux::nullCheck(team90654)->size();
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::DistScatterGather scatterGather90626 =
               org::scalegraph::util::DistScatterGather::_alloc();
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
            (scatterGather90626)->::org::scalegraph::util::DistScatterGather::_constructor(
              team90654);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_long>* id90627 = org::scalegraph::util::Remote::splitChunks(
                                                     range90656);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long nthreads90628 = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret90629;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret90630; __ret90630: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id90627)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90629 = (x10aux::nullCheck(id90627)->
                                      FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret90630_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id90627)->
                                        FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90629 = (x10aux::nullCheck(id90627)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id90627)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret90630_end_;
                    }
                    
                }goto __ret90630_end_; __ret90630_end_: ;
                }
                ret90629;
                }))
                ;
                
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size90631 = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret90632;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret90633; __ret90633: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id90627)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90632 = (x10aux::nullCheck(id90627)->
                                      FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret90633_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id90627)->
                                        FMGL(region)->contains(
                                        ((x10_int)1)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)1));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret90632 = (x10aux::nullCheck(id90627)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id90627)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret90633_end_;
                    }
                    
                }goto __ret90633_end_; __ret90633_end_: ;
                }
                ret90632;
                }))
                ;
                
            {
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var3 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable90725 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88723min90551 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88723max90552 =
                                  ((x10_long) ((nthreads90628) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i90553;
                                    for (
                                         //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i90553 = i88723min90551;
                                         ((i90553) <= (i88723max90552));
                                         
                                         //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i90553 = ((x10_long) ((i90553) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i90554 =
                                          i90553;
                                        
                                        //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start90546 =
                                          ((x10_long) ((range90656->
                                                          FMGL(min)) + (((x10_long) ((i90554) * (chunk_size90631))))));
                                        
                                        //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range90547 =
                                          x10::lang::LongRange::_make(i_start90546, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a90548 =
                                              range90656->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b90549 =
                                              ((x10_long) ((((x10_long) ((i_start90546) + (chunk_size90631)))) - (((x10_long) (((x10_int)1))))));
                                            ((a90548) < (b90549))
                                              ? (a90548) : (b90549);
                                        }))
                                        );
                                        
                                        //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T)>(scatterGather90626, i90554, i_range90547, index_, mask, shift, refval_))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc151) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc151);
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
                    catch (x10::lang::CheckedThrowable* __exc152) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal90726 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc152);
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable90725 = formal90726;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable90725)))
                    {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable90725))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable90725));
                        }
                        
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var3);
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable90725)))
                    {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable90725)))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable90725));
                        }
                        
                    }
                    
                }
            }
            
            //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            scatterGather90626->org::scalegraph::util::DistScatterGather::sum();
            
            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int numRequests90634 = scatterGather90626->org::scalegraph::util::DistScatterGather::sendCount();
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal90635 =
              org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (numRequests90634)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> reqIdx90636 =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests90634)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var4 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable90728 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88760min90592 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88760max90593 =
                                  ((x10_long) ((nthreads90628) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i90594;
                                    for (
                                         //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i90594 = i88760min90592;
                                         ((i90594) <= (i88760max90593));
                                         
                                         //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i90594 = ((x10_long) ((i90594) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i90595 =
                                          i90594;
                                        
                                        //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start90587 =
                                          ((x10_long) ((range90656->
                                                          FMGL(min)) + (((x10_long) ((i90595) * (chunk_size90631))))));
                                        
                                        //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range90588 =
                                          x10::lang::LongRange::_make(i_start90587, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a90589 =
                                              range90656->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b90590 =
                                              ((x10_long) ((((x10_long) ((i_start90587) + (chunk_size90631)))) - (((x10_long) (((x10_int)1))))));
                                            ((a90589) < (b90590))
                                              ? (a90589) : (b90590);
                                        }))
                                        );
                                        
                                        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T)>(scatterGather90626, i90595, i_range90588, index_, mask, shift, refval_, reqVal90635, reqIdx90636))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc154) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc154);
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
                    catch (x10::lang::CheckedThrowable* __exc155) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal90729 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc155);
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable90728 = formal90729;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable90728)))
                    {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable90728))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable90728));
                        }
                        
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var4);
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable90728)))
                    {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable90728)))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable90728));
                        }
                        
                    }
                    
                }
            }
            
            //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal90637 =
              scatterGather90626->scatter<TPMGL(T) >(reqVal90635);
            
            //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> recvIdx90638 =
              scatterGather90626->scatter<x10_long >(reqIdx90636);
            
            //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int recvCount90639 = scatterGather90626->org::scalegraph::util::DistScatterGather::recvCount();
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range90624 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvVal90637->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size90620 = ((x10_long) ((((x10_long) ((range90624->
                                                               FMGL(max)) - (range90624->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads90621 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size90622 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a90623 = ((x10_long) ((((x10_long) ((((x10_long) ((size90620) + (((x10_long) (nthreads90621)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads90621)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a90623) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a90623);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var5 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable90731 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i76030max90617 = ((x10_int) ((nthreads90621) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i90618;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i90618 = ((x10_int)0);
                                         ((i90618) <= (i76030max90617));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i90618 = ((x10_int) ((i90618) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i90619 = i90618;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx90610 =
                                          i90619;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start90611 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a90612 =
                                              ((x10_long) ((range90624->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b90613 =
                                              ((x10_long) ((range90624->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i90619))) * (chunk_size90622))))));
                                            ((a90612) < (b90613))
                                              ? (a90612) : (b90613);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range90614 =
                                          x10::lang::LongRange::_make(i_start90611, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a90615 =
                                              range90624->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b90616 =
                                              ((x10_long) ((((x10_long) ((i_start90611) + (chunk_size90622)))) - (((x10_long) (((x10_int)1))))));
                                            ((a90615) < (b90616))
                                              ? (a90615) : (b90616);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T)>(idx90610, i_range90614, recvIdx90638, recvVal90637, array90655))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc157) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc157);
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
                    catch (x10::lang::CheckedThrowable* __exc158) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal90732 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc158);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable90731 = formal90732;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable90731)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable90731))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable90731));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var5);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable90731)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable90731)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable90731));
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
                x10::lang::Cell<x10_boolean>* this90659 =
                  x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<x10_boolean>* >(checkResult);
                
                //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean x90660 = (x10aux::struct_equals(flags,
                                                            ((x10_int)0)));
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean x90657 = x90660;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean ret90658;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(this90659)->FMGL(value) =
                  x90657;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
                ret90658 = x90657;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
                ret90658;
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
        x10::lang::LongRange i58888domain90667 = r;
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58888min90668 = i58888domain90667->FMGL(min);
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58888max90669 = i58888domain90667->FMGL(max);
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i90670;
            for (
                 //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i90670 = i58888min90668; ((i90670) <= (i58888max90669));
                 
                 //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i90670 = ((x10_long) ((i90670) + (((x10_long)1ll))))) {
                
                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i90671 = i90670;
                
                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this90661 =
                                                  res_->FMGL(offsets);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index90662 =
                                                  i90671;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret90663;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this90661->
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
                                                    if (((index90662) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index90662) >= (this90661->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90662), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret90663 =
                                                  (this90661->
                                                     FMGL(data))[index90662];
                                                ret90663;
                                            }))
                                            , (__extension__ ({
                                                
                                                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this90664 =
                                                  ref_->FMGL(offsets);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index90665 =
                                                  i90671;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret90666;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this90664->
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
                                                    if (((index90665) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index90665) >= (this90664->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90665), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret90666 =
                                                  (this90664->
                                                     FMGL(data))[index90665];
                                                ret90666;
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
        x10::lang::LongRange i58907domain90678 = r;
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58907min90679 = i58907domain90678->FMGL(min);
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58907max90680 = i58907domain90678->FMGL(max);
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i90681;
            for (
                 //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i90681 = i58907min90679; ((i90681) <= (i58907max90680));
                 
                 //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i90681 = ((x10_long) ((i90681) + (((x10_long)1ll))))) {
                
                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i90682 = i90681;
                
                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this90672 =
                                                  res_->FMGL(vertexes);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index90673 =
                                                  i90682;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret90674;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this90672->
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
                                                    if (((index90673) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index90673) >= (this90672->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90673), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret90674 =
                                                  (this90672->
                                                     FMGL(data))[index90673];
                                                ret90674;
                                            }))
                                            , (__extension__ ({
                                                
                                                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this90675 =
                                                  ref_->FMGL(vertexes);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index90676 =
                                                  i90682;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret90677;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this90675->
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
                                                    if (((index90676) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index90676) >= (this90675->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90676), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret90677 =
                                                  (this90675->
                                                     FMGL(data))[index90676];
                                                ret90677;
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
        x10::lang::LongRange i58926domain90690 = r;
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58926min90691 = i58926domain90690->FMGL(min);
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i58926max90692 = i58926domain90690->FMGL(max);
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i90693;
            for (
                 //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i90693 = i58926min90691; ((i90693) <= (i58926max90692));
                 
                 //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i90693 = ((x10_long) ((i90693) + (((x10_long)1ll))))) {
                
                //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i90694 = i90693;
                
                //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff90683 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> this90684 =
                                             res_->FMGL(values);
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index90685 =
                                             i90694;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret90686;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((this90684->
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
                                               if (((index90685) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index90685) >= (this90684->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90685), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret90686 = (this90684->
                                                         FMGL(data))[index90685];
                                           ret90686;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> this90687 =
                                             ref_->FMGL(values);
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index90688 =
                                             i90694;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret90689;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((this90687->
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
                                               if (((index90688) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index90688) >= (this90687->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90688), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret90689 = (this90687->
                                                         FMGL(data))[index90688];
                                           ret90689;
                                       }))
                                       ));
                
                //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff90683, threshold))
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
            x10::array::Array<x10_int>* this90276 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret90277;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret90278; __ret90278: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this90276)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90277 = (x10aux::nullCheck(this90276)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret90278_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this90276)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90277 = (x10aux::nullCheck(this90276)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this90276)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret90278_end_;
                }
                
            }goto __ret90278_end_; __ret90278_end_: ;
            }
            ret90277;
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
            org::scalegraph::util::MemoryChunk<x10_long> this90279 =
              res_->FMGL(offsets);
            this90279->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long) (((x10_int)1))))));
        
        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals((__extension__ ({
                                        
                                        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<x10_long> this90280 =
                                          res_->FMGL(offsets);
                                        this90280->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    , (__extension__ ({
                                        
                                        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<x10_long> this90281 =
                                          ref_->FMGL(offsets);
                                        this90281->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    )) || (!x10aux::struct_equals((__extension__ ({
                                                                      
                                                                      //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      org::scalegraph::util::MemoryChunk<x10_long> this90282 =
                                                                        res_->
                                                                          FMGL(vertexes);
                                                                      this90282->
                                                                        FMGL(data)->
                                                                        FMGL(size);
                                                                  }))
                                                                  ,
                                                                  (__extension__ ({
                                                                      
                                                                      //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      org::scalegraph::util::MemoryChunk<x10_long> this90283 =
                                                                        ref_->
                                                                          FMGL(vertexes);
                                                                      this90283->
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
                                                 org::scalegraph::util::MemoryChunk<x10_long> this90284 =
                                                   res_->
                                                     FMGL(offsets);
                                                 x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this90284->
                                                                                                              FMGL(data)->
                                                                                                              FMGL(size)) - (((x10_long)1ll)))));
                                             }))
                                             , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T)>(res_, ref_))),
                                             reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T)>()))))));
            
            //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            error = ((x10_int) ((error) | (org::scalegraph::util::Parallel::reduce<x10_int >(
                                             (__extension__ ({
                                                 
                                                 //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::MemoryChunk<x10_long> this90293 =
                                                   res_->
                                                     FMGL(vertexes);
                                                 x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this90293->
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
                                                     org::scalegraph::util::MemoryChunk<TPMGL(T)> this90302 =
                                                       res_->
                                                         FMGL(values);
                                                     x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this90302->
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
            x10::lang::Cell<x10_boolean>* this90697 = x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<x10_boolean>* >(checkResult);
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean x90698 = (x10aux::struct_equals(error,
                                                        ((x10_int)0)));
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean x90695 = x90698;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret90696;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this90697)->FMGL(value) = x90695;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret90696 = x90695;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret90696;
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
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_printError_147
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_printError_147
template<class TPMGL(T)> void org::scalegraph::test::AlgorithmTest::printError(
  x10_int teamSize, x10_int teamRole, x10_long local, TPMGL(T) result, TPMGL(T) reference) {
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::println(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Check result: error: here="), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                                                             FMGL(id)), x10aux::makeStringLit(",pos=")), ((x10_long) ((((x10_long) ((local) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRole)))))), x10aux::makeStringLit("(local=")), local), x10aux::makeStringLit("),result=")), result), x10aux::makeStringLit(",reference=")), reference)));
}
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_printError_147
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_148
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_148
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
                                                        x10::lang::String* str87612 =
                                                          reference;
                                                        (__extension__ ({
                                                            
                                                            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::SString alloc87613 =
                                                              
                                                            org::scalegraph::util::SString::_alloc();
                                                            
                                                            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                            x10::lang::String* str90504 =
                                                              str87612;
                                                            
                                                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                            alloc87613->
                                                              FMGL(content) =
                                                              org::scalegraph::util::StringFromX10String(str90504);
                                                            alloc87613;
                                                        }))
                                                        ;
                                                    }))
                                                    , (x10::array::Array<x10_int>*)(__extension__ ({
                                                        x10::array::Array<x10_int>* __var149__(x10::array::Array<x10_int>::_make(2));
                                                        __var149__->__set(0, 
                                                        (((x10_int)5)));
                                                        __var149__->__set(1, 
                                                        (org::scalegraph::id::TypeIdOf<TPMGL(T) >::value));
                                                        __var149__;
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
                                                                      x10::lang::Cell<x10_boolean>* alloc58817 =
                                                                        
                                                                      ((new (memset(x10aux::alloc<x10::lang::Cell<x10_boolean> >(), 0, sizeof(x10::lang::Cell<x10_boolean>))) x10::lang::Cell<x10_boolean>()))
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                      alloc58817->
                                                                        FMGL(value) =
                                                                        false;
                                                                      alloc58817;
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
        x10::lang::Cell<x10_boolean>* this90272 = (checkResult)->__apply();
        x10aux::nullCheck(this90272)->FMGL(value);
    }))
    ;
    
}
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_148
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_internalCheckResult_159
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_internalCheckResult_159
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
                                                                      x10::lang::Cell<x10_boolean>* alloc58818 =
                                                                        
                                                                      ((new (memset(x10aux::alloc<x10::lang::Cell<x10_boolean> >(), 0, sizeof(x10::lang::Cell<x10_boolean>))) x10::lang::Cell<x10_boolean>()))
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                      alloc58818->
                                                                        FMGL(value) =
                                                                        false;
                                                                      alloc58818;
                                                                  }))
                                                                  );
    
    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T)>(team, result, ref, withValue, threshold, checkResult))));
    
    //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_boolean>* this90318 = (checkResult)->__apply();
        x10aux::nullCheck(this90318)->FMGL(value);
    }))
    ;
    
}
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_internalCheckResult_159
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_160
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_160
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
                                                   org::scalegraph::graph::EdgeList<x10_long> alloc58819 =
                                                      org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                                   
                                                   //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::DistMemoryChunk<x10_long> src90699 =
                                                     source;
                                                   
                                                   //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::DistMemoryChunk<x10_long> dst90700 =
                                                     target;
                                                   
                                                   //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                   alloc58819->
                                                     FMGL(src) =
                                                     src90699;
                                                   
                                                   //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                   alloc58819->
                                                     FMGL(dst) =
                                                     dst90700;
                                                   alloc58819;
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
        org::scalegraph::io::NamedDistData* edgeData90446 =
          org::scalegraph::io::CSV::read((__extension__ ({
                                             
                                             //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                             x10::lang::String* str90442 =
                                               reference;
                                             (__extension__ ({
                                                 
                                                 //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::SString alloc90443 =
                                                    org::scalegraph::util::SString::_alloc();
                                                 
                                                 //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                 x10::lang::String* str90701 =
                                                   str90442;
                                                 
                                                 //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                 alloc90443->
                                                   FMGL(content) =
                                                   org::scalegraph::util::StringFromX10String(str90701);
                                                 alloc90443;
                                             }))
                                             ;
                                         }))
                                         , (x10::array::Array<x10_int>*)(__extension__ ({
                                             x10::array::Array<x10_int>* __var161__(x10::array::Array<x10_int>::_make(3));
                                             __var161__->__set(0, 
                                             (((x10_int)5)));
                                             __var161__->__set(1, 
                                             (((x10_int)5)));
                                             __var161__->__set(2, 
                                             (((x10_int)7)));
                                             __var161__;
                                         })), (x10::array::Array<x10::lang::String*>*)(__extension__ ({
                                             x10::array::Array<x10::lang::String*>* __var162__(x10::array::Array<x10::lang::String*>::_make(3));
                                             __var162__->__set(0, 
                                             (x10aux::makeStringLit("source")));
                                             __var162__->__set(1, 
                                             (x10aux::makeStringLit("target")));
                                             __var162__->__set(2, 
                                             (x10aux::makeStringLit("weight")));
                                             __var162__;
                                         })));
        org::scalegraph::graph::Graph::make(edgeData90446,
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
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_checkResult_160
#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_GENERICS
#endif // __ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS

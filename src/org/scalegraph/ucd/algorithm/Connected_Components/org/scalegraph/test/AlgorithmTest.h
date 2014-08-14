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
        x10::lang::LongRange i55676domain88000 = r;
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55676min88001 = i55676domain88000->FMGL(min);
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55676max88002 = i55676domain88000->FMGL(max);
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i88003;
            for (
                 //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i88003 = i55676min88001; ((i88003) <= (i55676max88002));
                 
                 //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i88003 = ((x10_long) ((i88003) + (((x10_long)1ll))))) {
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i88004 = i88003;
                
                //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index87989 = i88004;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret87990;
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
                                                    if (((index87989) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index87989) >= (index_->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index87989), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret87990 =
                                                  (index_->
                                                     FMGL(data))[index87989];
                                                ret87990;
                                            }))
                                            , ((x10_long) ((((x10_long) ((i88004) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRole))))))))
                {
                    
                    //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                    return ((x10_int)2);
                    
                }
                
                //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff87991 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index87992 =
                                             i88004;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret87993;
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
                                               if (((index87992) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index87992) >= (result_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index87992), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret87993 = (result_->
                                                         FMGL(data))[index87992];
                                           ret87993;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index87994 =
                                             i88004;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret87995;
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
                                               if (((index87994) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index87994) >= (refval_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index87994), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret87995 = (refval_->
                                                         FMGL(data))[index87994];
                                           ret87995;
                                       }))
                                       ));
                
                //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff87991, threshold))
                {
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    saved_this->printError<TPMGL(T) >(teamSize,
                                                      teamRole,
                                                      i88004,
                                                      (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index87996 =
                                                            i88004;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret87997;
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
                                                              if (((index87996) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index87996) >= (result_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index87996), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret87997 =
                                                            (result_->
                                                               FMGL(data))[index87996];
                                                          ret87997;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index87998 =
                                                            i88004;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret87999;
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
                                                              if (((index87998) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index87998) >= (refval_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index87998), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret87999 =
                                                            (refval_->
                                                               FMGL(data))[index87998];
                                                          ret87999;
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
            org::scalegraph::util::MemoryChunk<x10_int> counts88034 = scatterGather88110->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (i88038)));
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86201domain88025 = i_range88031;
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86201min88026 = i86201domain88025->FMGL(min);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86201max88027 = i86201domain88025->FMGL(max);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i88028;
                for (
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i88028 = i86201min88026; ((i88028) <= (i86201max88027));
                     
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i88028 = ((x10_long) ((i88028) + (((x10_long)1ll)))))
                {
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i88029 = i88028;
                    
                    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long index88024 = i88029;
                    
                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long id88019 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index88020 = index88024;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret88021;
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
                            if (((index88020) < (((x10_long) (((x10_int)0))))) ||
                                ((index88020) >= (index_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88020), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88021 = (index_->FMGL(data))[index88020];
                        ret88021;
                    }))
                    ;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long p88022 = ((x10_long) ((id88019) & (mask)));
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long ridx88023 = ((x10_long) ((id88019) >> (0x3f & (shift))));
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int dst_role88014 = ((x10_int) (p88022));
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long dst_ind88015 = ridx88023;
                    
                    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value88016 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index88017 = index88024;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret88018;
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
                            if (((index88017) < (((x10_long) (((x10_int)0))))) ||
                                ((index88017) >= (refval_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88017), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88018 = (refval_->FMGL(data))[index88017];
                        ret88018;
                    }))
                    ;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x88011 =
                      counts88034;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int y88012 = dst_role88014;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int ret88013;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int r88008 = ((x10_int) (((__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index88009 = y88012;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret88010;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x88011->FMGL(data)).isValid()))
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
                            if (((index88009) < (((x10_int)0))) ||
                                ((((x10_long) (index88009))) >= (x88011->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88009), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88010 = (x88011->FMGL(data))[index88009];
                        ret88010;
                    }))
                    ) + (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index88005 = y88012;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value88006 = r88008;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret88007;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x88011->FMGL(data)).isValid()))
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
                        if (((index88005) < (((x10_int)0))) ||
                            ((((x10_long) (index88005))) >= (x88011->
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
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88005), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (x88011->FMGL(data)).set(index88005, value88006);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret88007 = value88006;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret88007;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                    ret88013 = r88008;
                    
                    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
                    ret88013;
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
    org::scalegraph::util::DistScatterGather scatterGather88110;
    x10_long i88038;
    x10::lang::LongRange i_range88031;
    org::scalegraph::util::MemoryChunk<x10_long> index_;
    x10_long mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather88110);
        buf.write(this->i88038);
        buf.write(this->i_range88031);
        buf.write(this->index_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->refval_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather88110 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i88038 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range88031 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_index_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_mask = buf.read<x10_long>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_refval_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T) >(that_scatterGather88110, that_i88038, that_i_range88031, that_index_, that_mask, that_shift, that_refval_);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__9(org::scalegraph::util::DistScatterGather scatterGather88110, x10_long i88038, x10::lang::LongRange i_range88031, org::scalegraph::util::MemoryChunk<x10_long> index_, x10_long mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_) : scatterGather88110(scatterGather88110), i88038(i88038), i_range88031(i_range88031), index_(index_), mask(mask), shift(shift), refval_(refval_) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> offsets88075 = scatterGather88110->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (i88079)));
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86238domain88066 = i_range88072;
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86238min88067 = i86238domain88066->FMGL(min);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86238max88068 = i86238domain88066->FMGL(max);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i88069;
                for (
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i88069 = i86238min88067; ((i88069) <= (i86238max88068));
                     
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i88069 = ((x10_long) ((i88069) + (((x10_long)1ll)))))
                {
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i88070 = i88069;
                    
                    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long index88065 = i88070;
                    
                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long id88060 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index88061 = index88065;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret88062;
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
                            if (((index88061) < (((x10_long) (((x10_int)0))))) ||
                                ((index88061) >= (index_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88061), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88062 = (index_->FMGL(data))[index88061];
                        ret88062;
                    }))
                    ;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long p88063 = ((x10_long) ((id88060) & (mask)));
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long ridx88064 = ((x10_long) ((id88060) >> (0x3f & (shift))));
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int dst_role88055 = ((x10_int) (p88063));
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long dst_ind88056 = ridx88064;
                    
                    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value88057 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index88058 = index88065;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret88059;
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
                            if (((index88058) < (((x10_long) (((x10_int)0))))) ||
                                ((index88058) >= (refval_->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88058), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88059 = (refval_->FMGL(data))[index88058];
                        ret88059;
                    }))
                    ;
                    
                    //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int off88051 = ((x10_int) (((__extension__ ({
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x88052 =
                          offsets88075;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int y88053 = dst_role88055;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int ret88054;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_int r88042 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index88043 = y88053;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret88044;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x88052->FMGL(data)).isValid()))
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
                                if (((index88043) < (((x10_int)0))) ||
                                    ((((x10_long) (index88043))) >= (x88052->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88043), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret88044 = (x88052->FMGL(data))[index88043];
                            ret88044;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index88039 = y88053;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value88040 = r88042;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret88041;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x88052->FMGL(data)).isValid()))
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
                            if (((index88039) < (((x10_int)0))) ||
                                ((((x10_long) (index88039))) >= (x88052->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88039), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x88052->FMGL(data)).set(index88039, value88040);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88041 = value88040;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret88041;
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88054 = r88042;
                        ret88054;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index88045 = off88051;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value88046 = value88057;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret88047;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reqVal88119->FMGL(data)).isValid()))
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
                        if (((index88045) < (((x10_int)0))) ||
                            ((((x10_long) (index88045))) >= (reqVal88119->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88045), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqVal88119->FMGL(data)).set(index88045, value88046);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret88047 = value88046;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret88047;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index88048 = off88051;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value88049 = dst_ind88056;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret88050;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reqIdx88120->FMGL(data)).isValid()))
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
                        if (((index88048) < (((x10_int)0))) ||
                            ((((x10_long) (index88048))) >= (reqIdx88120->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88048), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqIdx88120->FMGL(data)).set(index88048, value88049);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret88050 = value88049;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret88050;
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
    org::scalegraph::util::DistScatterGather scatterGather88110;
    x10_long i88079;
    x10::lang::LongRange i_range88072;
    org::scalegraph::util::MemoryChunk<x10_long> index_;
    x10_long mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal88119;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx88120;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather88110);
        buf.write(this->i88079);
        buf.write(this->i_range88072);
        buf.write(this->index_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->refval_);
        buf.write(this->reqVal88119);
        buf.write(this->reqIdx88120);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather88110 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i88079 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range88072 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_index_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_mask = buf.read<x10_long>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_refval_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal88119 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx88120 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T) >(that_scatterGather88110, that_i88079, that_i_range88072, that_index_, that_mask, that_shift, that_refval_, that_reqVal88119, that_reqIdx88120);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__10(org::scalegraph::util::DistScatterGather scatterGather88110, x10_long i88079, x10::lang::LongRange i_range88072, org::scalegraph::util::MemoryChunk<x10_long> index_, x10_long mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> refval_, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal88119, org::scalegraph::util::MemoryChunk<x10_long> reqIdx88120) : scatterGather88110(scatterGather88110), i88079(i88079), i_range88072(i_range88072), index_(index_), mask(mask), shift(shift), refval_(refval_), reqVal88119(reqVal88119), reqIdx88120(reqIdx88120) { }
    
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
            x10_long tid88092 = ((x10_long) (idx88094));
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r88093 = i_range88098;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86275domain88087 = r88093;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86275min88088 = i86275domain88087->FMGL(min);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86275max88089 = i86275domain88087->FMGL(max);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i88090;
                for (
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i88090 = i86275min88088; ((i88090) <= (i86275max88089));
                     
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i88090 = ((x10_long) ((i88090) + (((x10_long)1ll)))))
                {
                    
                    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i88091 = i88090;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index88080 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index88081 = i88091;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret88082;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvIdx88122->FMGL(data)).isValid())) {
                                
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
                            if (((index88081) < (((x10_long) (((x10_int)0))))) ||
                                ((index88081) >= (recvIdx88122->FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88081), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88082 = (recvIdx88122->FMGL(data))[index88081];
                        ret88082;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value88083 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index88084 = i88091;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret88085;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvVal88121->FMGL(data)).isValid()))
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
                            if (((index88084) < (((x10_long) (((x10_int)0))))) ||
                                ((index88084) >= (recvVal88121->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88084), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88085 = (recvVal88121->FMGL(data))[index88084];
                        ret88085;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret88086;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((array88139->FMGL(data)).isValid()))
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
                        if (((index88080) < (((x10_long) (((x10_int)0))))) ||
                            ((index88080) >= (array88139->
                                                FMGL(data)->
                                                FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88080), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (array88139->FMGL(data)).set(index88080, value88083);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret88086 = value88083;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret88086;
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
    x10_int idx88094;
    x10::lang::LongRange i_range88098;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx88122;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal88121;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> array88139;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx88094);
        buf.write(this->i_range88098);
        buf.write(this->recvIdx88122);
        buf.write(this->recvVal88121);
        buf.write(this->array88139);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx88094 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range88098 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx88122 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal88121 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_array88139 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T) >(that_idx88094, that_i_range88098, that_recvIdx88122, that_recvVal88121, that_array88139);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__11(x10_int idx88094, x10::lang::LongRange i_range88098, org::scalegraph::util::MemoryChunk<x10_long> recvIdx88122, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal88121, org::scalegraph::util::MemoryChunk<TPMGL(T)> array88139) : idx88094(idx88094), i_range88098(i_range88098), recvIdx88122(recvIdx88122), recvVal88121(recvVal88121), array88139(array88139) { }
    
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
        x10::lang::LongRange i55695domain88133 = r;
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55695min88134 = i55695domain88133->FMGL(min);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55695max88135 = i55695domain88133->FMGL(max);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i88136;
            for (
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i88136 = i55695min88134; ((i88136) <= (i55695max88135));
                 
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i88136 = ((x10_long) ((i88136) + (((x10_long)1ll))))) {
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i88137 = i88136;
                
                //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff88124 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index88125 = i88137;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret88126;
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
                                               if (((index88125) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index88125) >= (result_->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88125), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret88126 = (result_->
                                                         FMGL(data))[index88125];
                                           ret88126;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index88127 =
                                             i88137;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret88128;
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
                                               if (((index88127) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index88127) >= (recv->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88127), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret88128 = (recv->
                                                         FMGL(data))[index88127];
                                           ret88128;
                                       }))
                                       ));
                
                //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff88124, threshold))
                {
                    
                    //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    saved_this->printError<TPMGL(T) >(teamSize,
                                                      teamRole,
                                                      i88137,
                                                      (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index88129 =
                                                            i88137;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret88130;
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
                                                              if (((index88129) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index88129) >= (result_->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88129), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret88130 =
                                                            (result_->
                                                               FMGL(data))[index88129];
                                                          ret88130;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index88131 =
                                                            i88137;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret88132;
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
                                                              if (((index88131) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index88131) >= (recv->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88131), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret88132 =
                                                            (recv->
                                                               FMGL(data))[index88131];
                                                          ret88132;
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
            x10::array::Array<x10_int>* this85418 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret85419;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret85420; __ret85420: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this85418)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret85419 = (x10aux::nullCheck(this85418)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret85420_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this85418)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret85419 = (x10aux::nullCheck(this85418)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this85418)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret85420_end_;
                }
                
            }goto __ret85420_end_; __ret85420_end_: ;
            }
            ret85419;
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
            x10::util::Team* team88138 = team;
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> array88139 =
              recv;
            
            //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range88140 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((index_->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize88109 = x10aux::nullCheck(team88138)->size();
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::DistScatterGather scatterGather88110 =
               org::scalegraph::util::DistScatterGather::_alloc();
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
            (scatterGather88110)->::org::scalegraph::util::DistScatterGather::_constructor(
              team88138);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_long>* id88111 = org::scalegraph::util::Remote::splitChunks(
                                                     range88140);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long nthreads88112 = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret88113;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret88114; __ret88114: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id88111)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88113 = (x10aux::nullCheck(id88111)->
                                      FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret88114_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id88111)->
                                        FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88113 = (x10aux::nullCheck(id88111)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id88111)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret88114_end_;
                    }
                    
                }goto __ret88114_end_; __ret88114_end_: ;
                }
                ret88113;
                }))
                ;
                
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size88115 = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret88116;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret88117; __ret88117: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id88111)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88116 = (x10aux::nullCheck(id88111)->
                                      FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret88117_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id88111)->
                                        FMGL(region)->contains(
                                        ((x10_int)1)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)1));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret88116 = (x10aux::nullCheck(id88111)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id88111)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret88117_end_;
                    }
                    
                }goto __ret88117_end_; __ret88117_end_: ;
                }
                ret88116;
                }))
                ;
                
            {
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var3 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable88209 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86220min88035 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86220max88036 =
                                  ((x10_long) ((nthreads88112) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i88037;
                                    for (
                                         //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i88037 = i86220min88035;
                                         ((i88037) <= (i86220max88036));
                                         
                                         //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i88037 = ((x10_long) ((i88037) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i88038 =
                                          i88037;
                                        
                                        //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start88030 =
                                          ((x10_long) ((range88140->
                                                          FMGL(min)) + (((x10_long) ((i88038) * (chunk_size88115))))));
                                        
                                        //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range88031 =
                                          x10::lang::LongRange::_make(i_start88030, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a88032 =
                                              range88140->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b88033 =
                                              ((x10_long) ((((x10_long) ((i_start88030) + (chunk_size88115)))) - (((x10_long) (((x10_int)1))))));
                                            ((a88032) < (b88033))
                                              ? (a88032) : (b88033);
                                        }))
                                        );
                                        
                                        //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__9<TPMGL(T)>(scatterGather88110, i88038, i_range88031, index_, mask, shift, refval_))));
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
                            x10::lang::CheckedThrowable* formal88210 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc152);
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable88209 = formal88210;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable88209)))
                    {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable88209))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable88209));
                        }
                        
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var3);
                    }
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable88209)))
                    {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable88209)))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable88209));
                        }
                        
                    }
                    
                }
            }
            
            //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            scatterGather88110->org::scalegraph::util::DistScatterGather::sum();
            
            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int numRequests88118 = scatterGather88110->org::scalegraph::util::DistScatterGather::sendCount();
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal88119 =
              org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (numRequests88118)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> reqIdx88120 =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests88118)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var4 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable88212 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86257min88076 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86257max88077 =
                                  ((x10_long) ((nthreads88112) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i88078;
                                    for (
                                         //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i88078 = i86257min88076;
                                         ((i88078) <= (i86257max88077));
                                         
                                         //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i88078 = ((x10_long) ((i88078) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i88079 =
                                          i88078;
                                        
                                        //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start88071 =
                                          ((x10_long) ((range88140->
                                                          FMGL(min)) + (((x10_long) ((i88079) * (chunk_size88115))))));
                                        
                                        //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range88072 =
                                          x10::lang::LongRange::_make(i_start88071, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a88073 =
                                              range88140->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b88074 =
                                              ((x10_long) ((((x10_long) ((i_start88071) + (chunk_size88115)))) - (((x10_long) (((x10_int)1))))));
                                            ((a88073) < (b88074))
                                              ? (a88073) : (b88074);
                                        }))
                                        );
                                        
                                        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__10<TPMGL(T)>(scatterGather88110, i88079, i_range88072, index_, mask, shift, refval_, reqVal88119, reqIdx88120))));
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
                            x10::lang::CheckedThrowable* formal88213 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc155);
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable88212 = formal88213;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable88212)))
                    {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable88212))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable88212));
                        }
                        
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var4);
                    }
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable88212)))
                    {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable88212)))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable88212));
                        }
                        
                    }
                    
                }
            }
            
            //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal88121 =
              scatterGather88110->scatter<TPMGL(T) >(reqVal88119);
            
            //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> recvIdx88122 =
              scatterGather88110->scatter<x10_long >(reqIdx88120);
            
            //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int recvCount88123 = scatterGather88110->org::scalegraph::util::DistScatterGather::recvCount();
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range88108 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvVal88121->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size88104 = ((x10_long) ((((x10_long) ((range88108->
                                                               FMGL(max)) - (range88108->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads88105 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size88106 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a88107 = ((x10_long) ((((x10_long) ((((x10_long) ((size88104) + (((x10_long) (nthreads88105)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads88105)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a88107) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a88107);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var5 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable88215 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max88101 = ((x10_int) ((nthreads88105) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i88102;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i88102 = ((x10_int)0);
                                         ((i88102) <= (i72665max88101));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i88102 = ((x10_int) ((i88102) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i88103 = i88102;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx88094 =
                                          i88103;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start88095 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a88096 =
                                              ((x10_long) ((range88108->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b88097 =
                                              ((x10_long) ((range88108->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i88103))) * (chunk_size88106))))));
                                            ((a88096) < (b88097))
                                              ? (a88096) : (b88097);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range88098 =
                                          x10::lang::LongRange::_make(i_start88095, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a88099 =
                                              range88108->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b88100 =
                                              ((x10_long) ((((x10_long) ((i_start88095) + (chunk_size88106)))) - (((x10_long) (((x10_int)1))))));
                                            ((a88099) < (b88100))
                                              ? (a88099) : (b88100);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__11<TPMGL(T)>(idx88094, i_range88098, recvIdx88122, recvVal88121, array88139))));
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
                            x10::lang::CheckedThrowable* formal88216 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc158);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable88215 = formal88216;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable88215)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable88215))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable88215));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var5);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable88215)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable88215)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable88215));
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
                x10::lang::Cell<x10_boolean>* this88143 =
                  x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<x10_boolean>* >(checkResult);
                
                //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean x88144 = (x10aux::struct_equals(flags,
                                                            ((x10_int)0)));
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean x88141 = x88144;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_boolean ret88142;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(this88143)->FMGL(value) =
                  x88141;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
                ret88142 = x88141;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
                ret88142;
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
        x10::lang::LongRange i55714domain88151 = r;
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55714min88152 = i55714domain88151->FMGL(min);
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55714max88153 = i55714domain88151->FMGL(max);
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i88154;
            for (
                 //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i88154 = i55714min88152; ((i88154) <= (i55714max88153));
                 
                 //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i88154 = ((x10_long) ((i88154) + (((x10_long)1ll))))) {
                
                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i88155 = i88154;
                
                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this88145 =
                                                  res_->FMGL(offsets);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index88146 =
                                                  i88155;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret88147;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this88145->
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
                                                    if (((index88146) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index88146) >= (this88145->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88146), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret88147 =
                                                  (this88145->
                                                     FMGL(data))[index88146];
                                                ret88147;
                                            }))
                                            , (__extension__ ({
                                                
                                                //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this88148 =
                                                  ref_->FMGL(offsets);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index88149 =
                                                  i88155;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret88150;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this88148->
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
                                                    if (((index88149) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index88149) >= (this88148->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88149), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret88150 =
                                                  (this88148->
                                                     FMGL(data))[index88149];
                                                ret88150;
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
        x10::lang::LongRange i55733domain88162 = r;
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55733min88163 = i55733domain88162->FMGL(min);
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55733max88164 = i55733domain88162->FMGL(max);
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i88165;
            for (
                 //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i88165 = i55733min88163; ((i88165) <= (i55733max88164));
                 
                 //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i88165 = ((x10_long) ((i88165) + (((x10_long)1ll))))) {
                
                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i88166 = i88165;
                
                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals((__extension__ ({
                                                
                                                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this88156 =
                                                  res_->FMGL(vertexes);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index88157 =
                                                  i88166;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret88158;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this88156->
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
                                                    if (((index88157) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index88157) >= (this88156->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88157), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret88158 =
                                                  (this88156->
                                                     FMGL(data))[index88157];
                                                ret88158;
                                            }))
                                            , (__extension__ ({
                                                
                                                //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::MemoryChunk<x10_long> this88159 =
                                                  ref_->FMGL(vertexes);
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index88160 =
                                                  i88166;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long ret88161;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((this88159->
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
                                                    if (((index88160) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index88160) >= (this88159->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88160), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret88161 =
                                                  (this88159->
                                                     FMGL(data))[index88160];
                                                ret88161;
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
        x10::lang::LongRange i55752domain88174 = r;
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55752min88175 = i55752domain88174->FMGL(min);
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_long i55752max88176 = i55752domain88174->FMGL(max);
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
        {
            x10_long i88177;
            for (
                 //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                 i88177 = i55752min88175; ((i88177) <= (i55752max88176));
                 
                 //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                 i88177 = ((x10_long) ((i88177) + (((x10_long)1ll))))) {
                
                //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                x10_long i88178 = i88177;
                
                //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) diff88167 = org::scalegraph::util::MathAppend::abs<TPMGL(T) >(
                                       x10::lang::Arithmetic<TPMGL(T) >::_m6____minus((__extension__ ({
                                           
                                           //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> this88168 =
                                             res_->FMGL(values);
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index88169 =
                                             i88178;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret88170;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((this88168->
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
                                               if (((index88169) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index88169) >= (this88168->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88169), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret88170 = (this88168->
                                                         FMGL(data))[index88169];
                                           ret88170;
                                       }))
                                       , (__extension__ ({
                                           
                                           //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> this88171 =
                                             ref_->FMGL(values);
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index88172 =
                                             i88178;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           TPMGL(T) ret88173;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((this88171->
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
                                               if (((index88172) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index88172) >= (this88171->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index88172), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret88173 = (this88171->
                                                         FMGL(data))[index88172];
                                           ret88173;
                                       }))
                                       ));
                
                //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                if (x10::util::Ordered<TPMGL(T) >::__gt(diff88167, threshold))
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
            x10::array::Array<x10_int>* this87760 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret87761;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret87762; __ret87762: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this87760)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret87761 = (x10aux::nullCheck(this87760)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret87762_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this87760)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret87761 = (x10aux::nullCheck(this87760)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this87760)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret87762_end_;
                }
                
            }goto __ret87762_end_; __ret87762_end_: ;
            }
            ret87761;
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
            org::scalegraph::util::MemoryChunk<x10_long> this87763 =
              res_->FMGL(offsets);
            this87763->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long) (((x10_int)1))))));
        
        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals((__extension__ ({
                                        
                                        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<x10_long> this87764 =
                                          res_->FMGL(offsets);
                                        this87764->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    , (__extension__ ({
                                        
                                        //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<x10_long> this87765 =
                                          ref_->FMGL(offsets);
                                        this87765->FMGL(data)->
                                          FMGL(size);
                                    }))
                                    )) || (!x10aux::struct_equals((__extension__ ({
                                                                      
                                                                      //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      org::scalegraph::util::MemoryChunk<x10_long> this87766 =
                                                                        res_->
                                                                          FMGL(vertexes);
                                                                      this87766->
                                                                        FMGL(data)->
                                                                        FMGL(size);
                                                                  }))
                                                                  ,
                                                                  (__extension__ ({
                                                                      
                                                                      //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                                      org::scalegraph::util::MemoryChunk<x10_long> this87767 =
                                                                        ref_->
                                                                          FMGL(vertexes);
                                                                      this87767->
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
                                                 org::scalegraph::util::MemoryChunk<x10_long> this87768 =
                                                   res_->
                                                     FMGL(offsets);
                                                 x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this87768->
                                                                                                              FMGL(data)->
                                                                                                              FMGL(size)) - (((x10_long)1ll)))));
                                             }))
                                             , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__15<TPMGL(T)>(res_, ref_))),
                                             reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__16<TPMGL(T)>()))))));
            
            //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
            error = ((x10_int) ((error) | (org::scalegraph::util::Parallel::reduce<x10_int >(
                                             (__extension__ ({
                                                 
                                                 //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::MemoryChunk<x10_long> this87777 =
                                                   res_->
                                                     FMGL(vertexes);
                                                 x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this87777->
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
                                                     org::scalegraph::util::MemoryChunk<TPMGL(T)> this87786 =
                                                       res_->
                                                         FMGL(values);
                                                     x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this87786->
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
            x10::lang::Cell<x10_boolean>* this88181 = x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<x10_boolean>* >(checkResult);
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean x88182 = (x10aux::struct_equals(error,
                                                        ((x10_int)0)));
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean x88179 = x88182;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret88180;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this88181)->FMGL(value) = x88179;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret88180 = x88179;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret88180;
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
                                                        x10::lang::String* str85274 =
                                                          reference;
                                                        (__extension__ ({
                                                            
                                                            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::SString alloc85275 =
                                                              
                                                            org::scalegraph::util::SString::_alloc();
                                                            
                                                            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                            x10::lang::String* str87988 =
                                                              str85274;
                                                            
                                                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                            alloc85275->
                                                              FMGL(content) =
                                                              org::scalegraph::util::StringFromX10String(str87988);
                                                            alloc85275;
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
                                                                      x10::lang::Cell<x10_boolean>* alloc55643 =
                                                                        
                                                                      ((new (memset(x10aux::alloc<x10::lang::Cell<x10_boolean> >(), 0, sizeof(x10::lang::Cell<x10_boolean>))) x10::lang::Cell<x10_boolean>()))
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                      alloc55643->
                                                                        FMGL(value) =
                                                                        false;
                                                                      alloc55643;
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
        x10::lang::Cell<x10_boolean>* this87756 = (checkResult)->__apply();
        x10aux::nullCheck(this87756)->FMGL(value);
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
                                                                      x10::lang::Cell<x10_boolean>* alloc55644 =
                                                                        
                                                                      ((new (memset(x10aux::alloc<x10::lang::Cell<x10_boolean> >(), 0, sizeof(x10::lang::Cell<x10_boolean>))) x10::lang::Cell<x10_boolean>()))
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                      ;
                                                                      
                                                                      //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                      alloc55644->
                                                                        FMGL(value) =
                                                                        false;
                                                                      alloc55644;
                                                                  }))
                                                                  );
    
    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T)>)))org_scalegraph_test_AlgorithmTest__closure__14<TPMGL(T)>(team, result, ref, withValue, threshold, checkResult))));
    
    //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_boolean>* this87802 = (checkResult)->__apply();
        x10aux::nullCheck(this87802)->FMGL(value);
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
                                                   org::scalegraph::graph::EdgeList<x10_long> alloc55645 =
                                                      org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                                   
                                                   //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::DistMemoryChunk<x10_long> src88183 =
                                                     source;
                                                   
                                                   //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::DistMemoryChunk<x10_long> dst88184 =
                                                     target;
                                                   
                                                   //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                   alloc55645->
                                                     FMGL(src) =
                                                     src88183;
                                                   
                                                   //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                   alloc55645->
                                                     FMGL(dst) =
                                                     dst88184;
                                                   alloc55645;
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
        org::scalegraph::io::NamedDistData* edgeData87930 =
          org::scalegraph::io::CSV::read((__extension__ ({
                                             
                                             //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                             x10::lang::String* str87926 =
                                               reference;
                                             (__extension__ ({
                                                 
                                                 //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::SString alloc87927 =
                                                    org::scalegraph::util::SString::_alloc();
                                                 
                                                 //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                 x10::lang::String* str88185 =
                                                   str87926;
                                                 
                                                 //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                 alloc87927->
                                                   FMGL(content) =
                                                   org::scalegraph::util::StringFromX10String(str88185);
                                                 alloc87927;
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
        org::scalegraph::graph::Graph::make(edgeData87930,
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

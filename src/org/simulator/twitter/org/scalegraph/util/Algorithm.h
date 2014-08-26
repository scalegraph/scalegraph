#ifndef __ORG_SCALEGRAPH_UTIL_ALGORITHM_H
#define __ORG_SCALEGRAPH_UTIL_ALGORITHM_H

#include <x10rt.h>

#include "NativeAlgorithm.h"

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace org { namespace scalegraph { namespace util { 

class Algorithm : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(I)> static void sort(org::scalegraph::util::MemoryChunk<TPMGL(I)> index);
    template<class TPMGL(I), class TPMGL(V)> static void sort(org::scalegraph::util::MemoryChunk<TPMGL(I)> index,
                                                              org::scalegraph::util::MemoryChunk<TPMGL(V)> value);
    template<class TPMGL(V)> static void sort(x10_int rangeScale,
                                              x10_int logChunks, org::scalegraph::util::MemoryChunk<x10_long> counts,
                                              org::scalegraph::util::MemoryChunk<x10_long> offsets,
                                              org::scalegraph::util::MemoryChunk<x10_long> src_i,
                                              org::scalegraph::util::MemoryChunk<TPMGL(V)> src_v1,
                                              org::scalegraph::util::MemoryChunk<x10_long> dst_i,
                                              org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v1);
    template<class TPMGL(I), class TPMGL(V1), class TPMGL(V2)>
    static void sort(org::scalegraph::util::MemoryChunk<TPMGL(I)> index,
                     org::scalegraph::util::MemoryChunk<TPMGL(V1)> value1,
                     org::scalegraph::util::MemoryChunk<TPMGL(V2)> value2);
    template<class TPMGL(V1), class TPMGL(V2)> static void
      sort(x10_int rangeScale, x10_int logChunks, org::scalegraph::util::MemoryChunk<x10_long> counts,
           org::scalegraph::util::MemoryChunk<x10_long> offsets,
           org::scalegraph::util::MemoryChunk<x10_long> src_i,
           org::scalegraph::util::MemoryChunk<TPMGL(V1)> src_v1,
           org::scalegraph::util::MemoryChunk<TPMGL(V2)> src_v2,
           org::scalegraph::util::MemoryChunk<x10_long> dst_i,
           org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1,
           org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2);
    template<class TPMGL(T)> static TPMGL(T) reduce(x10::lang::LongRange range,
                                                    x10::lang::Fun_0_1<x10_long, TPMGL(T)>* func);
    template<class TPMGL(T)> static TPMGL(T) reduce(x10::lang::LongRange range,
                                                    x10::lang::Fun_0_1<x10_long, TPMGL(T)>* func,
                                                    x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op);
    virtual org::scalegraph::util::Algorithm* org__scalegraph__util__Algorithm____this__org__scalegraph__util__Algorithm(
      );
    void _constructor();
    
    static org::scalegraph::util::Algorithm* _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H

namespace org { namespace scalegraph { namespace util { 
class Algorithm;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Arithmetic.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/compiler/NativeCPPInclude.h>
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1073
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1073
template<class TPMGL(I)> void org::scalegraph::util::Algorithm::sort(org::scalegraph::util::MemoryChunk<TPMGL(I)> index) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::sort1((index)->pointer(), (index)->size());
}
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1073
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1074
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1074
template<class TPMGL(I), class TPMGL(V)> void org::scalegraph::util::Algorithm::sort(
  org::scalegraph::util::MemoryChunk<TPMGL(I)> index, org::scalegraph::util::MemoryChunk<TPMGL(V)> value) {
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::sort2((index)->pointer(), (value)->pointer(), (index)->size());
}
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1074
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1075
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1075
template<class TPMGL(V)> void org::scalegraph::util::Algorithm::sort(
  x10_int rangeScale, x10_int logChunks, org::scalegraph::util::MemoryChunk<x10_long> counts,
  org::scalegraph::util::MemoryChunk<x10_long> offsets, org::scalegraph::util::MemoryChunk<x10_long> src_i,
  org::scalegraph::util::MemoryChunk<TPMGL(V)> src_v1, org::scalegraph::util::MemoryChunk<x10_long> dst_i,
  org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v1) {
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int numChunks = ((x10_int) ((((x10_int)1)) << (0x1f & (logChunks))));
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int numShift = ((x10_int) ((rangeScale) - (logChunks)));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long mask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (rangeScale))))) - (((x10_long) (((x10_int)1))))));
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61480domain61752 = counts->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61480min61753 = i61480domain61752->FMGL(min);
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61480max61754 = i61480domain61752->FMGL(max);
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61755;
        for (
             //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61755 = i61480min61753; ((i61755) <= (i61480max61754));
             
             //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61755 = ((x10_long) ((i61755) + (((x10_long)1ll)))))
        {
            
            //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61756 = i61755;
            
            //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals(counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             i61756),
                                                           ((x10_long)0ll))));
            #endif//NO_ASSERTIONS
            
        }
    }
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61497domain61757 = src_i->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61497min61758 = i61497domain61757->FMGL(min);
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61497max61759 = i61497domain61757->FMGL(max);
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61760;
        for (
             //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61760 = i61497min61758; ((i61760) <= (i61497max61759));
             
             //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61760 = ((x10_long) ((i61760) + (((x10_long)1ll)))))
        {
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61761 = i61760;
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x61734 =
              counts;
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long y61735 = ((x10_long) ((((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                            i61761)) & (mask)))) >> (0x3f & (numShift))));
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.Empty_c
            ;
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long ret61736;
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long r61733 = ((x10_long) ((x61734->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                              y61735)) + (((x10_long)1ll))));
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            x61734->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              y61735, r61733);
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
            ret61736 = r61733;
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Local_c
            ret61736;
        }
    }
    
    //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
    offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      ((x10_int)0), ((x10_long)0ll));
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int i61514min61762 = ((x10_int)0);
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int i61514max61763 = ((x10_int) ((numChunks) - (((x10_int)2))));
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_int i61764;
        for (
             //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61764 = i61514min61762; ((i61764) <= (i61514max61763));
             
             //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61764 = ((x10_int) ((i61764) + (((x10_int)1)))))
        {
            
            //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_int i61765 = i61764;
            
            //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              ((x10_int) ((i61765) + (((x10_int)1)))), ((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                       i61765)) + (counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                     i61765)))));
        }
    }
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61530domain61766 = src_i->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61530min61767 = i61530domain61766->FMGL(min);
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61530max61768 = i61530domain61766->FMGL(max);
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61769;
        for (
             //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61769 = i61530min61767; ((i61769) <= (i61530max61768));
             
             //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61769 = ((x10_long) ((i61769) + (((x10_long)1ll)))))
        {
            
            //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61770 = i61769;
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long dstIndex61738 = ((x10_long) (((__extension__ ({
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x61739 =
                  offsets;
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long y61740 = ((x10_long) ((((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                i61770)) & (mask)))) >> (0x3f & (numShift))));
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.Empty_c
                ;
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long ret61741;
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long r61737 = ((x10_long) ((x61739->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y61740)) + (((x10_long)1ll))));
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                x61739->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y61740, r61737);
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
                ret61741 = r61737;
                ret61741;
            }))
            ) - (((x10_long)1ll))));
            
            //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            dst_i->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              dstIndex61738, src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                               i61770));
            
            //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            dst_v1->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__set(
              dstIndex61738, src_v1->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__apply(
                               i61770));
        }
    }
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10If_c
    if (((numShift) > (((x10_int)0)))) {
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
        offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          ((x10_int)0), ((x10_long)0ll));
        
        //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61547min61744 = ((x10_int)0);
        
        //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61547max61745 = ((x10_int) ((numChunks) - (((x10_int)2))));
        
        //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
        {
            x10_int i61746;
            for (
                 //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                 i61746 = i61547min61744; ((i61746) <= (i61547max61745));
                 
                 //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
                 i61746 = ((x10_int) ((i61746) + (((x10_int)1)))))
            {
                
                //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_int i61747 = i61746;
                
                //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  ((x10_int) ((i61747) + (((x10_int)1)))),
                  ((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  i61747)) + (counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                i61747)))));
            }
        }
        
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61563min61748 = ((x10_int)0);
        
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61563max61749 = ((x10_int) ((numChunks) - (((x10_int)1))));
        
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
        {
            x10_int i61750;
            for (
                 //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                 i61750 = i61563min61748; ((i61750) <= (i61563max61749));
                 
                 //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
                 i61750 = ((x10_int) ((i61750) + (((x10_int)1)))))
            {
                
                //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_int i61751 = i61750;
                
                //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long off61742 = offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i61751);
                
                //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long len61743 = counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i61751);
                
                //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Algorithm::template sort<x10_long,
                TPMGL(V) >(dst_i->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                             off61742, len61743), dst_v1->org::scalegraph::util::MemoryChunk<TPMGL(V)>::subpart(
                                                    off61742,
                                                    len61743));
            }
        }
        
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1075
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1076
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1076
template<class TPMGL(I), class TPMGL(V1), class TPMGL(V2)>
void org::scalegraph::util::Algorithm::sort(org::scalegraph::util::MemoryChunk<TPMGL(I)> index,
                                            org::scalegraph::util::MemoryChunk<TPMGL(V1)> value1,
                                            org::scalegraph::util::MemoryChunk<TPMGL(V2)> value2) {
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::sort3((index)->pointer(), (value1)->pointer(), (value2)->pointer(), (index)->size());
}
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1076
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1077
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1077
template<class TPMGL(V1), class TPMGL(V2)> void org::scalegraph::util::Algorithm::sort(
  x10_int rangeScale, x10_int logChunks, org::scalegraph::util::MemoryChunk<x10_long> counts,
  org::scalegraph::util::MemoryChunk<x10_long> offsets, org::scalegraph::util::MemoryChunk<x10_long> src_i,
  org::scalegraph::util::MemoryChunk<TPMGL(V1)> src_v1, org::scalegraph::util::MemoryChunk<TPMGL(V2)> src_v2,
  org::scalegraph::util::MemoryChunk<x10_long> dst_i, org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1,
  org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2) {
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int numChunks = ((x10_int) ((((x10_int)1)) << (0x1f & (logChunks))));
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int numShift = ((x10_int) ((rangeScale) - (logChunks)));
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long mask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (rangeScale))))) - (((x10_long) (((x10_int)1))))));
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61579domain61790 = counts->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61579min61791 = i61579domain61790->FMGL(min);
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61579max61792 = i61579domain61790->FMGL(max);
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61793;
        for (
             //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61793 = i61579min61791; ((i61793) <= (i61579max61792));
             
             //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61793 = ((x10_long) ((i61793) + (((x10_long)1ll)))))
        {
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61794 = i61793;
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals(counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             i61794),
                                                           ((x10_long)0ll))));
            #endif//NO_ASSERTIONS
            
        }
    }
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61596domain61795 = src_i->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61596min61796 = i61596domain61795->FMGL(min);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61596max61797 = i61596domain61795->FMGL(max);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61798;
        for (
             //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61798 = i61596min61796; ((i61798) <= (i61596max61797));
             
             //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61798 = ((x10_long) ((i61798) + (((x10_long)1ll)))))
        {
            
            //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61799 = i61798;
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x61772 =
              counts;
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long y61773 = ((x10_long) ((((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                            i61799)) & (mask)))) >> (0x3f & (numShift))));
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.Empty_c
            ;
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long ret61774;
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long r61771 = ((x10_long) ((x61772->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                              y61773)) + (((x10_long)1ll))));
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            x61772->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              y61773, r61771);
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
            ret61774 = r61771;
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Local_c
            ret61774;
        }
    }
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
    offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      ((x10_int)0), ((x10_long)0ll));
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int i61613min61800 = ((x10_int)0);
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_int i61613max61801 = ((x10_int) ((numChunks) - (((x10_int)2))));
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_int i61802;
        for (
             //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61802 = i61613min61800; ((i61802) <= (i61613max61801));
             
             //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61802 = ((x10_int) ((i61802) + (((x10_int)1)))))
        {
            
            //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_int i61803 = i61802;
            
            //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              ((x10_int) ((i61803) + (((x10_int)1)))), ((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                       i61803)) + (counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                     i61803)))));
        }
    }
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61629domain61804 = src_i->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61629min61805 = i61629domain61804->FMGL(min);
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61629max61806 = i61629domain61804->FMGL(max);
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61807;
        for (
             //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61807 = i61629min61805; ((i61807) <= (i61629max61806));
             
             //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61807 = ((x10_long) ((i61807) + (((x10_long)1ll)))))
        {
            
            //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61808 = i61807;
            
            //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long dstIndex61776 = ((x10_long) (((__extension__ ({
                
                //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x61777 =
                  offsets;
                
                //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long y61778 = ((x10_long) ((((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                i61808)) & (mask)))) >> (0x3f & (numShift))));
                
                //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.Empty_c
                ;
                
                //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long ret61779;
                
                //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long r61775 = ((x10_long) ((x61777->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y61778)) + (((x10_long)1ll))));
                
                //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                x61777->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y61778, r61775);
                
                //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
                ret61779 = r61775;
                ret61779;
            }))
            ) - (((x10_long)1ll))));
            
            //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            dst_i->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              dstIndex61776, src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                               i61808));
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            dst_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::__set(
              dstIndex61776, src_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::__apply(
                               i61808));
            
            //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
            dst_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::__set(
              dstIndex61776, src_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::__apply(
                               i61808));
        }
    }
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10If_c
    if (((numShift) > (((x10_int)0)))) {
        
        //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
        offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          ((x10_int)0), ((x10_long)0ll));
        
        //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61646min61782 = ((x10_int)0);
        
        //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61646max61783 = ((x10_int) ((numChunks) - (((x10_int)2))));
        
        //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
        {
            x10_int i61784;
            for (
                 //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                 i61784 = i61646min61782; ((i61784) <= (i61646max61783));
                 
                 //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
                 i61784 = ((x10_int) ((i61784) + (((x10_int)1)))))
            {
                
                //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_int i61785 = i61784;
                
                //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                offsets->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  ((x10_int) ((i61785) + (((x10_int)1)))),
                  ((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  i61785)) + (counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                i61785)))));
            }
        }
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61662min61786 = ((x10_int)0);
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
        x10_int i61662max61787 = ((x10_int) ((numChunks) - (((x10_int)1))));
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
        {
            x10_int i61788;
            for (
                 //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                 i61788 = i61662min61786; ((i61788) <= (i61662max61787));
                 
                 //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
                 i61788 = ((x10_int) ((i61788) + (((x10_int)1)))))
            {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_int i61789 = i61788;
                
                //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long off61780 = offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i61789);
                
                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
                x10_long len61781 = counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i61789);
                
                //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Algorithm::template sort<x10_long,
                TPMGL(V1), TPMGL(V2) >(dst_i->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                         off61780, len61781),
                                       dst_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::subpart(
                                         off61780, len61781),
                                       dst_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::subpart(
                                         off61780, len61781));
            }
        }
        
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_sort_1077
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_reduce_1078
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_reduce_1078
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::Algorithm::reduce(
  x10::lang::LongRange range, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* func) {
    
    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) ret = x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(func), 
      range->FMGL(min));
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61678min61809 = ((x10_long) ((range->FMGL(min)) + (((x10_long) (((x10_int)1))))));
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61678max61810 = range->FMGL(max);
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61811;
        for (
             //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61811 = i61678min61809; ((i61811) <= (i61678max61810));
             
             //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61811 = ((x10_long) ((i61811) + (((x10_long)1ll)))))
        {
            
            //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61812 = i61811;
            
            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
            ret = x10::lang::Arithmetic<TPMGL(T) >::_m4____plus(ret, x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(func), 
              i61812));
        }
    }
    
    //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10Return_c
    return ret;
    
}
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_reduce_1078
#ifndef ORG_SCALEGRAPH_UTIL_ALGORITHM_H_reduce_1079
#define ORG_SCALEGRAPH_UTIL_ALGORITHM_H_reduce_1079
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::Algorithm::reduce(
  x10::lang::LongRange range, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* func,
  x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op) {
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) ret = x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(func), 
      range->FMGL(min));
    
    //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61694min61813 = ((x10_long) ((range->FMGL(min)) + (((x10_long) (((x10_int)1))))));
    
    //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
    x10_long i61694max61814 = range->FMGL(max);
    
    //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.For_c
    {
        x10_long i61815;
        for (
             //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
             i61815 = i61694min61813; ((i61815) <= (i61694max61814));
             
             //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
             i61815 = ((x10_long) ((i61815) + (((x10_long)1ll)))))
        {
            
            //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10LocalDecl_c
            x10_long i61816 = i61815;
            
            //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": Eval of x10.ast.X10LocalAssign_c
            ret = x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(x10aux::nullCheck(op), 
              ret, x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(func), 
                i61816));
        }
    }
    
    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10Return_c
    return ret;
    
}
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_reduce_1079
#endif // ORG_SCALEGRAPH_UTIL_ALGORITHM_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_ALGORITHM_H_NODEPS

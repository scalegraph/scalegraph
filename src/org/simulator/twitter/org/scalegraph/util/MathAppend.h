#ifndef __ORG_SCALEGRAPH_UTIL_MATHAPPEND_H
#define __ORG_SCALEGRAPH_UTIL_MATHAPPEND_H

#include <x10rt.h>

#include "MathAppend_Natives.h"

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Ordered;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class ULong;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace org { namespace scalegraph { namespace util { 

class MathAppend : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static TPMGL(T) abs(TPMGL(T) a);
    template<class TPMGL(T)> static TPMGL(T) min(org::scalegraph::util::MemoryChunk<TPMGL(T)> vec);
    template<class TPMGL(T)> static TPMGL(T) min(TPMGL(T) a, TPMGL(T) b);
    template<class TPMGL(T)> static TPMGL(T) max(TPMGL(T) a, TPMGL(T) b);
    template<class TPMGL(T)> static TPMGL(T) sum(org::scalegraph::util::MemoryChunk<TPMGL(T)> vec);
    static x10_double norm(org::scalegraph::util::MemoryChunk<x10_double> vec);
    static x10_double norm(org::scalegraph::util::MemoryChunk<x10_float> vec);
    static x10_int floorLog2(x10_long p);
    static x10_int ceilLog2(x10_long p);
    static x10_long nextPowerOf2(x10_long p);
    static x10_boolean powerOf2(x10_long p);
    static x10_long log2(x10_long p);
    static x10_long pow2(x10_int i);
    virtual org::scalegraph::util::MathAppend* org__scalegraph__util__MathAppend____this__org__scalegraph__util__MathAppend(
      );
    void _constructor();
    
    static org::scalegraph::util::MathAppend* _make();
    
    
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
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H

namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_NODEPS
#include <x10/lang/Arithmetic.h>
#include <x10/util/Ordered.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Zero.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/lang/Float.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/ULong.h>
#include <x10/compiler/NativeCPPInclude.h>
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_abs_368
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_abs_368
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::abs(
  TPMGL(T) a) {
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::util::Ordered<TPMGL(T) >::__gt(a, x10aux::zeroValue<TPMGL(T) >())
      ? (a) : (x10::lang::Arithmetic<TPMGL(T) >::_m5____minus(a));
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_abs_368
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_369
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_369
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::min(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vec) {
    
    //#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) result = vec->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                        ((x10_int)0));
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47565min47631 = ((x10_long) (((x10_int)1)));
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47565max47632 = ((x10_long) ((vec->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) - (((x10_long) (((x10_int)1))))));
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i47633;
        for (
             //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i47633 = i47565min47631; ((i47633) <= (i47565max47632));
             
             //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
             i47633 = ((x10_long) ((i47633) + (((x10_long)1ll)))))
        {
            
            //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i47634 = i47633;
            
            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10If_c
            if (x10::util::Ordered<TPMGL(T) >::__gt(result, vec->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                              i47634)))
            {
                
                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
                result = vec->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                           i47634);
            }
            
        }
    }
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return result;
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_369
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_370
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_370
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::min(
  TPMGL(T) a, TPMGL(T) b) {
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::util::Ordered<TPMGL(T) >::__lt(a, b) ? (a)
      : (b);
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_370
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_max_371
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_max_371
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::max(
  TPMGL(T) a, TPMGL(T) b) {
    
    //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::util::Ordered<TPMGL(T) >::__gt(a, b) ? (a)
      : (b);
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_max_371
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_sum_372
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_sum_372
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::sum(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vec) {
    
    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) res = x10aux::zeroValue<TPMGL(T) >();
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i47581domain47635 = vec->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range();
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47581min47636 = i47581domain47635->FMGL(min);
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47581max47637 = i47581domain47635->FMGL(max);
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i47638;
        for (
             //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i47638 = i47581min47636; ((i47638) <= (i47581max47637));
             
             //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
             i47638 = ((x10_long) ((i47638) + (((x10_long)1ll)))))
        {
            
            //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i47639 = i47638;
            
            //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
            res = x10::lang::Arithmetic<TPMGL(T) >::_m4____plus(res, vec->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                                       i47639));
        }
    }
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return res;
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_sum_372
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_NODEPS

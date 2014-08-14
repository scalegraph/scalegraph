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
class Int;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
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
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/lang/Float.h>
#include <x10/compiler/Native.h>
#include <x10/lang/ULong.h>
#include <x10/compiler/NativeCPPInclude.h>
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_abs_139
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_abs_139
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::abs(
  TPMGL(T) a) {
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::util::Ordered<TPMGL(T) >::__gt(a, x10aux::zeroValue<TPMGL(T) >())
      ? (a) : (x10::lang::Arithmetic<TPMGL(T) >::_m5____minus(a));
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_abs_139
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_140
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_140
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::min(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vec) {
    
    //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) result = (__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) ret82455;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((vec->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (vec->
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
        ret82455 = (vec->FMGL(data))[((x10_int)0)];
        ret82455;
    }))
    ;
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i53462min82505 = ((x10_long) (((x10_int)1)));
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i53462max82506 = ((x10_long) (((__extension__ ({
        vec->FMGL(data)->FMGL(size);
    }))
    ) - (((x10_long) (((x10_int)1))))));
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i82507;
        for (
             //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i82507 = i53462min82505; ((i82507) <= (i53462max82506));
             
             //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
             i82507 = ((x10_long) ((i82507) + (((x10_long)1ll)))))
        {
            
            //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i82508 = i82507;
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10If_c
            if (x10::util::Ordered<TPMGL(T) >::__gt(result, (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index82501 = i82508;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret82502;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((vec->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index82501) < (((x10_long) (((x10_int)0))))) ||
                            ((index82501) >= (vec->FMGL(data)->
                                                FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index82501), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret82502 = (vec->FMGL(data))[index82501];
                    ret82502;
                }))
                )) {
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
                result = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index82503 = i82508;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret82504;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((vec->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index82503) < (((x10_long) (((x10_int)0))))) ||
                            ((index82503) >= (vec->FMGL(data)->
                                                FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index82503), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret82504 = (vec->FMGL(data))[index82503];
                    ret82504;
                }))
                ;
            }
            
        }
    }
    
    //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return result;
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_140
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_141
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_141
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::min(
  TPMGL(T) a, TPMGL(T) b) {
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::util::Ordered<TPMGL(T) >::__lt(a, b) ? (a)
      : (b);
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_min_141
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_max_142
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_max_142
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::max(
  TPMGL(T) a, TPMGL(T) b) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::util::Ordered<TPMGL(T) >::__gt(a, b) ? (a)
      : (b);
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_max_142
#ifndef ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_sum_143
#define ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_sum_143
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MathAppend::sum(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vec) {
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) res = x10aux::zeroValue<TPMGL(T) >();
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i53480domain82511 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vec->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i53480max82512 = i53480domain82511->FMGL(max);
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i82513;
        for (
             //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i82513 = ((x10_long)0ll); ((i82513) <= (i53480max82512));
             
             //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
             i82513 = ((x10_long) ((i82513) + (((x10_long)1ll)))))
        {
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i82514 = i82513;
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
            res = x10::lang::Arithmetic<TPMGL(T) >::_m4____plus(res, (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index82509 = i82514;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) ret82510;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((vec->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index82509) < (((x10_long) (((x10_int)0))))) ||
                        ((index82509) >= (vec->FMGL(data)->
                                            FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index82509), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret82510 = (vec->FMGL(data))[index82509];
                ret82510;
            }))
            );
        }
    }
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return res;
    
}
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_sum_143
#endif // ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_MATHAPPEND_H_NODEPS

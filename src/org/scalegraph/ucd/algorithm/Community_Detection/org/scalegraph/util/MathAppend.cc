/*************************************************/
/* START of MathAppend */
#include <org/scalegraph/util/MathAppend.h>


//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_double org::scalegraph::util::MathAppend::norm(org::scalegraph::util::MemoryChunk<x10_double> vec) {
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_double res = 0.0;
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i55583domain83931 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vec->FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i55583max83932 = i55583domain83931->FMGL(max);
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i83933;
        for (
             //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i83933 = ((x10_long)0ll); ((i83933) <= (i55583max83932));
             
             //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
             i83933 = ((x10_long) ((i83933) + (((x10_long)1ll)))))
        {
            
            //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i83934 = i83933;
            
            //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
            res = ((res) + ((((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index83927 = i83934;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_double ret83928;
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
                    if (((index83927) < (((x10_long) (((x10_int)0))))) ||
                        ((index83927) >= (vec->FMGL(data)->FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index83927), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret83928 = (vec->FMGL(data))[index83927];
                ret83928;
            }))
            ) * ((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index83929 = i83934;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_double ret83930;
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
                    if (((index83929) < (((x10_long) (((x10_int)0))))) ||
                        ((index83929) >= (vec->FMGL(data)->FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index83929), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret83930 = (vec->FMGL(data))[index83929];
                ret83930;
            }))
            ))));
        }
    }
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::lang::MathNatives::sqrt(res);
    
}

//#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_double org::scalegraph::util::MathAppend::norm(org::scalegraph::util::MemoryChunk<x10_float> vec) {
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_float res = 0.0f;
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i55602domain83939 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vec->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i55602max83940 = i55602domain83939->FMGL(max);
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i83941;
        for (
             //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i83941 = ((x10_long)0ll); ((i83941) <= (i55602max83940));
             
             //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
             i83941 = ((x10_long) ((i83941) + (((x10_long)1ll)))))
        {
            
            //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i83942 = i83941;
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
            res = ((res) + ((((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index83935 = i83942;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_float ret83936;
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
                    if (((index83935) < (((x10_long) (((x10_int)0))))) ||
                        ((index83935) >= (vec->FMGL(data)->
                                            FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index83935), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret83936 = (vec->FMGL(data))[index83935];
                ret83936;
            }))
            ) * ((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index83937 = i83942;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_float ret83938;
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
                    if (((index83937) < (((x10_long) (((x10_int)0))))) ||
                        ((index83937) >= (vec->FMGL(data)->
                                            FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index83937), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret83938 = (vec->FMGL(data))[index83937];
                ret83938;
            }))
            ))));
        }
    }
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::lang::MathNatives::sqrt(((x10_double) (res)));
    
}

//#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::MathAppend::floorLog2(x10_long p) {
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long pow2 = ((x10_long)1ll);
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_int i = ((x10_int)-1);
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((pow2) <= (p))) {
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        pow2 = ((x10_long) ((pow2) << (0x3f & (((x10_int)1)))));
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((i) + (((x10_int)1))));
    }
    
    //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return i;
    
}

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::MathAppend::ceilLog2(x10_long p) {
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long pow2 = ((x10_long)1ll);
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(p, ((x10_long)0ll)))) {
        
        //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
        return ((x10_int)-1);
        
    }
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_int i = ((x10_int)0);
    
    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((pow2) < (p))) {
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        pow2 = ((x10_long) ((pow2) << (0x3f & (((x10_int)1)))));
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((i) + (((x10_int)1))));
    }
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return i;
    
}

//#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::MathAppend::nextPowerOf2(
  x10_long p) {
    
    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(p, ((x10_long)0ll)))) {
        
        //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
        return ((x10_long) (((x10_int)0)));
        
    }
    
    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long pow2 = ((x10_long)1ll);
    
    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((pow2) < (p))) {
        
        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        pow2 = ((x10_long) ((pow2) << (0x3f & (((x10_int)1)))));
    }
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return pow2;
    
}

//#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::MathAppend::powerOf2(x10_long p) {
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals(((x10_long) ((p) & (((x10_long) -(p))))),
                                  p));
    
}

//#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::MathAppend::log2(x10_long p) {
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(org::scalegraph::util::MathAppend::powerOf2(
                              p));
    #endif//NO_ASSERTIONS
    
    //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_int i = ((x10_int)0);
    
    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((p) > (((x10_long) (((x10_int)1)))))) {
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        p = ((x10_long) ((p) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((i) + (((x10_int)1))));
    }
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return ((x10_long) (i));
    
}

//#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::MathAppend::pow2(x10_int i) {
    
    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long)1ll)) << (0x3f & (i))));
    
}

//#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MathAppend* org::scalegraph::util::MathAppend::org__scalegraph__util__MathAppend____this__org__scalegraph__util__MathAppend(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::MathAppend::_constructor() {
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::util::MathAppend* org::scalegraph::util::MathAppend::_make(
  ) {
    org::scalegraph::util::MathAppend* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MathAppend>(), 0, sizeof(org::scalegraph::util::MathAppend))) org::scalegraph::util::MathAppend();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::util::MathAppend::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::MathAppend::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::MathAppend::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::util::MathAppend::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::MathAppend* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MathAppend>(), 0, sizeof(org::scalegraph::util::MathAppend))) org::scalegraph::util::MathAppend();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::MathAppend::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::util::MathAppend::rtt;
void org::scalegraph::util::MathAppend::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.MathAppend",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of MathAppend */
/*************************************************/

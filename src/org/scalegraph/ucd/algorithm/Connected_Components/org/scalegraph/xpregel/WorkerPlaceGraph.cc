/*************************************************/
/* START of WorkerPlaceGraph */
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>

x10aux::RuntimeType org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::rtt;
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER__do_init)() {
    FMGL(MAX_OUTPUT_NUMBER__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.MAX_OUTPUT_NUMBER");
    x10_int __var572__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(MAX_OUTPUT_NUMBER) = __var572__;
    FMGL(MAX_OUTPUT_NUMBER__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAX_OUTPUT_NUMBER__status), &FMGL(MAX_OUTPUT_NUMBER__do_init), &FMGL(MAX_OUTPUT_NUMBER__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.MAX_OUTPUT_NUMBER");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_END_COUNT);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_END_COUNT__do_init)() {
    FMGL(STT_END_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_END_COUNT");
    x10_int __var573__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(STT_END_COUNT) = __var573__;
    FMGL(STT_END_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_END_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_END_COUNT__status), &FMGL(STT_END_COUNT__do_init), &FMGL(STT_END_COUNT__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_END_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_END_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_END_COUNT__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_ACTIVE_VERTEX);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_ACTIVE_VERTEX__do_init)() {
    FMGL(STT_ACTIVE_VERTEX__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_ACTIVE_VERTEX");
    x10_int __var574__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(STT_ACTIVE_VERTEX) = __var574__;
    FMGL(STT_ACTIVE_VERTEX__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_ACTIVE_VERTEX__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_ACTIVE_VERTEX__status), &FMGL(STT_ACTIVE_VERTEX__do_init), &FMGL(STT_ACTIVE_VERTEX__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_ACTIVE_VERTEX");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_ACTIVE_VERTEX__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_ACTIVE_VERTEX__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_RAW_MESSAGE);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_RAW_MESSAGE__do_init)() {
    FMGL(STT_RAW_MESSAGE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_RAW_MESSAGE");
    x10_int __var575__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(STT_RAW_MESSAGE) = __var575__;
    FMGL(STT_RAW_MESSAGE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_RAW_MESSAGE__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_RAW_MESSAGE__status), &FMGL(STT_RAW_MESSAGE__do_init), &FMGL(STT_RAW_MESSAGE__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_RAW_MESSAGE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_RAW_MESSAGE__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_RAW_MESSAGE__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_MESSAGE);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_MESSAGE__do_init)() {
    FMGL(STT_VERTEX_MESSAGE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_VERTEX_MESSAGE");
    x10_int __var576__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(STT_VERTEX_MESSAGE) = __var576__;
    FMGL(STT_VERTEX_MESSAGE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_MESSAGE__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_VERTEX_MESSAGE__status), &FMGL(STT_VERTEX_MESSAGE__do_init), &FMGL(STT_VERTEX_MESSAGE__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_VERTEX_MESSAGE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_MESSAGE__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_MESSAGE__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_PRE);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_PRE__do_init)() {
    FMGL(STT_PRE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_PRE");
    x10_int __var577__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(STT_PRE) = __var577__;
    FMGL(STT_PRE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_PRE__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_PRE__status), &FMGL(STT_PRE__do_init), &FMGL(STT_PRE__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_PRE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_PRE__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_PRE__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_COMBINED_MESSAGE);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_COMBINED_MESSAGE__do_init)() {
    FMGL(STT_COMBINED_MESSAGE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_COMBINED_MESSAGE");
    x10_int __var578__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(STT_COMBINED_MESSAGE) = __var578__;
    FMGL(STT_COMBINED_MESSAGE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_COMBINED_MESSAGE__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_COMBINED_MESSAGE__status), &FMGL(STT_COMBINED_MESSAGE__do_init), &FMGL(STT_COMBINED_MESSAGE__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_COMBINED_MESSAGE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_COMBINED_MESSAGE__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_COMBINED_MESSAGE__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_TRANSFERED_MESSAGE);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_TRANSFERED_MESSAGE__do_init)() {
    FMGL(STT_VERTEX_TRANSFERED_MESSAGE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_VERTEX_TRANSFERED_MESSAGE");
    x10_int __var579__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(STT_VERTEX_TRANSFERED_MESSAGE) = __var579__;
    FMGL(STT_VERTEX_TRANSFERED_MESSAGE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_TRANSFERED_MESSAGE__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_VERTEX_TRANSFERED_MESSAGE__status), &FMGL(STT_VERTEX_TRANSFERED_MESSAGE__do_init), &FMGL(STT_VERTEX_TRANSFERED_MESSAGE__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_VERTEX_TRANSFERED_MESSAGE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_TRANSFERED_MESSAGE__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_TRANSFERED_MESSAGE__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_POST);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_POST__do_init)() {
    FMGL(STT_POST__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_POST");
    x10_int __var580__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(STT_POST) = __var580__;
    FMGL(STT_POST__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_POST__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_POST__status), &FMGL(STT_POST__do_init), &FMGL(STT_POST__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_POST");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_POST__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_POST__exception);
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_MAX);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_MAX__do_init)() {
    FMGL(STT_MAX__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_MAX");
    x10_int __var581__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(STT_MAX) = __var581__;
    FMGL(STT_MAX__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_MAX__init)() {
    x10aux::StaticInitController::initField(&FMGL(STT_MAX__status), &FMGL(STT_MAX__do_init), &FMGL(STT_MAX__exception), "org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.STT_MAX");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_MAX__status);
x10::lang::CheckedThrowable* org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_MAX__exception);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(x10_long numLocalVertexes,
                                                                             x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task)
{
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range104071 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((org::scalegraph::util::Bitmap::numWords(
                                                                                                                numLocalVertexes)) - (((x10_long) (((x10_int)1)))))));
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size104067 = ((x10_long) ((((x10_long) ((range104071->
                                                        FMGL(max)) - (range104071->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads104068 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size104069 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a104070 = ((x10_long) ((((x10_long) ((((x10_long) ((size104067) + (((x10_long) (nthreads104068)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads104068)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a104070) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a104070);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var76 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104254 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max104064 = ((x10_int) ((nthreads104068) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i104065;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i104065 = ((x10_int)0); ((i104065) <= (i72665max104064));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i104065 = ((x10_int) ((i104065) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i104066 = i104065;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx104057 = i104066;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start104058 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a104059 = ((x10_long) ((range104071->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b104060 = ((x10_long) ((range104071->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i104066))) * (chunk_size104069))))));
                                    ((a104059) < (b104060))
                                      ? (a104059) : (b104060);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range104061 =
                                  x10::lang::LongRange::_make(i_start104058, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a104062 = range104071->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b104063 = ((x10_long) ((((x10_long) ((i_start104058) + (chunk_size104069)))) - (((x10_long) (((x10_int)1))))));
                                    ((a104062) < (b104063))
                                      ? (a104062) : (b104063);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__20)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__20(idx104057, i_range104061, numLocalVertexes, task))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc583) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc583);
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
            catch (x10::lang::CheckedThrowable* __exc584) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104255 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc584);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104254 = formal104255;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104254)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104254))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104254));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var76);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104254)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104254)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104254));
                }
                
            }
            
        }
    }
}

x10::lang::VoidFun_0_0::itable<org_scalegraph_xpregel_WorkerPlaceGraph__closure__20>org_scalegraph_xpregel_WorkerPlaceGraph__closure__20::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__20::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__20::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__20::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__20::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__20::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__20::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

/* END of WorkerPlaceGraph */
/*************************************************/

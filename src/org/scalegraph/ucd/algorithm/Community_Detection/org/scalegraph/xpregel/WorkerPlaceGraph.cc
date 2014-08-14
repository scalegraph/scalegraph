/*************************************************/
/* START of WorkerPlaceGraph */
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>

x10aux::RuntimeType org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::rtt;
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER__do_init)() {
    FMGL(MAX_OUTPUT_NUMBER__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.MAX_OUTPUT_NUMBER");
    x10_int __var438__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(MAX_OUTPUT_NUMBER) = __var438__;
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
    x10_int __var439__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(STT_END_COUNT) = __var439__;
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
    x10_int __var440__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(STT_ACTIVE_VERTEX) = __var440__;
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
    x10_int __var441__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(STT_RAW_MESSAGE) = __var441__;
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
    x10_int __var442__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(STT_VERTEX_MESSAGE) = __var442__;
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
    x10_int __var443__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(STT_PRE) = __var443__;
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
    x10_int __var444__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(STT_COMBINED_MESSAGE) = __var444__;
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
    x10_int __var445__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(STT_VERTEX_TRANSFERED_MESSAGE) = __var445__;
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
    x10_int __var446__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(STT_POST) = __var446__;
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
    x10_int __var447__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(STT_MAX) = __var447__;
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
    x10::lang::LongRange range103855 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((org::scalegraph::util::Bitmap::numWords(
                                                                                                                numLocalVertexes)) - (((x10_long) (((x10_int)1)))))));
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size103851 = ((x10_long) ((((x10_long) ((range103855->
                                                        FMGL(max)) - (range103855->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103852 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size103853 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a103854 = ((x10_long) ((((x10_long) ((((x10_long) ((size103851) + (((x10_long) (nthreads103852)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads103852)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103854) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a103854);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var47 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104038 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max103848 = ((x10_int) ((nthreads103852) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103849;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103849 = ((x10_int)0); ((i103849) <= (i76030max103848));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103849 = ((x10_int) ((i103849) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103850 = i103849;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx103841 = i103850;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start103842 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103843 = ((x10_long) ((range103855->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103844 = ((x10_long) ((range103855->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i103850))) * (chunk_size103853))))));
                                    ((a103843) < (b103844))
                                      ? (a103843) : (b103844);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range103845 =
                                  x10::lang::LongRange::_make(i_start103842, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103846 = range103855->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103847 = ((x10_long) ((((x10_long) ((i_start103842) + (chunk_size103853)))) - (((x10_long) (((x10_int)1))))));
                                    ((a103846) < (b103847))
                                      ? (a103846) : (b103847);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__20)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__20(idx103841, i_range103845, numLocalVertexes, task))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc449) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc449);
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
            catch (x10::lang::CheckedThrowable* __exc450) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104039 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc450);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104038 = formal104039;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104038)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104038))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104038));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var47);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104038)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104038)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104038));
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

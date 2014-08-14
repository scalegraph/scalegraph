/*************************************************/
/* START of FileAccess */
#include <org/scalegraph/io/FileAccess.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileAccess.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::io::FileAccess::FMGL(Read);
void org::scalegraph::io::FileAccess::FMGL(Read__do_init)() {
    FMGL(Read__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::io::FileAccess.Read");
    x10_int __var1929__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(Read) = __var1929__;
    FMGL(Read__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::io::FileAccess::FMGL(Read__init)() {
    x10aux::StaticInitController::initField(&FMGL(Read__status), &FMGL(Read__do_init), &FMGL(Read__exception), "org::scalegraph::io::FileAccess.Read");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::io::FileAccess::FMGL(Read__status);
x10::lang::CheckedThrowable* org::scalegraph::io::FileAccess::FMGL(Read__exception);

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileAccess.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::io::FileAccess::FMGL(Write);
void org::scalegraph::io::FileAccess::FMGL(Write__do_init)() {
    FMGL(Write__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::io::FileAccess.Write");
    x10_int __var1930__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(Write) = __var1930__;
    FMGL(Write__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::io::FileAccess::FMGL(Write__init)() {
    x10aux::StaticInitController::initField(&FMGL(Write__status), &FMGL(Write__do_init), &FMGL(Write__exception), "org::scalegraph::io::FileAccess.Write");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::io::FileAccess::FMGL(Write__status);
x10::lang::CheckedThrowable* org::scalegraph::io::FileAccess::FMGL(Write__exception);

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileAccess.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::io::FileAccess::FMGL(ReadWrite);
void org::scalegraph::io::FileAccess::FMGL(ReadWrite__do_init)() {
    FMGL(ReadWrite__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::io::FileAccess.ReadWrite");
    x10_int __var1931__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(ReadWrite) = __var1931__;
    FMGL(ReadWrite__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::io::FileAccess::FMGL(ReadWrite__init)() {
    x10aux::StaticInitController::initField(&FMGL(ReadWrite__status), &FMGL(ReadWrite__do_init), &FMGL(ReadWrite__exception), "org::scalegraph::io::FileAccess.ReadWrite");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::io::FileAccess::FMGL(ReadWrite__status);
x10::lang::CheckedThrowable* org::scalegraph::io::FileAccess::FMGL(ReadWrite__exception);
x10aux::RuntimeType org::scalegraph::io::FileAccess::rtt;
void org::scalegraph::io::FileAccess::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.io.FileAccess",x10aux::RuntimeType::interface_kind, 1, parents, 0, NULL, NULL);
}

/* END of FileAccess */
/*************************************************/

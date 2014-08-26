/*************************************************/
/* START of WorkerPlaceGraph */
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>

x10aux::RuntimeType org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::rtt;
x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER);
void org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER__do_init)() {
    FMGL(MAX_OUTPUT_NUMBER__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::xpregel::WorkerPlaceGraph<void, void>.MAX_OUTPUT_NUMBER");
    x10_int __var945__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(MAX_OUTPUT_NUMBER) = __var945__;
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
    x10_int __var946__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(STT_END_COUNT) = __var946__;
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
    x10_int __var947__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(STT_ACTIVE_VERTEX) = __var947__;
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
    x10_int __var948__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(STT_RAW_MESSAGE) = __var948__;
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
    x10_int __var949__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(STT_VERTEX_MESSAGE) = __var949__;
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
    x10_int __var950__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(STT_PRE) = __var950__;
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
    x10_int __var951__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(STT_COMBINED_MESSAGE) = __var951__;
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
    x10_int __var952__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(STT_VERTEX_TRANSFERED_MESSAGE) = __var952__;
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
    x10_int __var953__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(STT_POST) = __var953__;
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
    x10_int __var954__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(STT_MAX) = __var954__;
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
    
    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((org::scalegraph::util::Bitmap::numWords(
                                                                                                                   numLocalVertexes)) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__8)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__8(numLocalVertexes, task))));
}

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_xpregel_WorkerPlaceGraph__closure__8>org_scalegraph_xpregel_WorkerPlaceGraph__closure__8::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__8::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__8::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__8::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__8::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__8::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__8::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of WorkerPlaceGraph */
/*************************************************/

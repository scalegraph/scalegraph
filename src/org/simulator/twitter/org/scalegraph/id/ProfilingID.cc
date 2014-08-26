/*************************************************/
/* START of ProfilingID */
#include <org/scalegraph/id/ProfilingID.h>


//#line 13 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10MethodDecl_c
org::scalegraph::id::ProfilingID* org::scalegraph::id::ProfilingID::org__scalegraph__id__ProfilingID____this__org__scalegraph__id__ProfilingID(
  ) {
    
    //#line 13 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 13 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::id::ProfilingID::_constructor() {
    
    //#line 13 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": polyglot.ast.Empty_c
    ;
    
    //#line 13 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::id::ProfilingID* org::scalegraph::id::ProfilingID::_make(
  ) {
    org::scalegraph::id::ProfilingID* this_ = new (memset(x10aux::alloc<org::scalegraph::id::ProfilingID>(), 0, sizeof(org::scalegraph::id::ProfilingID))) org::scalegraph::id::ProfilingID();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::id::ProfilingID::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::id::ProfilingID::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::id::ProfilingID::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::id::ProfilingID::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::id::ProfilingID* this_ = new (memset(x10aux::alloc<org::scalegraph::id::ProfilingID>(), 0, sizeof(org::scalegraph::id::ProfilingID))) org::scalegraph::id::ProfilingID();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::id::ProfilingID::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::id::ProfilingID::rtt;
void org::scalegraph::id::ProfilingID::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.id.ProfilingID",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of ProfilingID */
/*************************************************/
/*************************************************/
/* START of ProfilingID$XPregel */
#include <org/scalegraph/id/ProfilingID__XPregel.h>


//#line 16 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__do_init)() {
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_FRAME");
    x10_int __var1014__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_FRAME) = __var1014__;
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_FRAME__status), &FMGL(MAIN_FRAME__do_init), &FMGL(MAIN_FRAME__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__exception);

//#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__do_init)() {
    FMGL(MAIN_INIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_INIT");
    x10_int __var1015__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_INIT) = __var1015__;
    FMGL(MAIN_INIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_INIT__status), &FMGL(MAIN_INIT__do_init), &FMGL(MAIN_INIT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_INIT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__exception);

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__do_init)() {
    FMGL(MAIN_COMPUTE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_COMPUTE");
    x10_int __var1016__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_COMPUTE) = __var1016__;
    FMGL(MAIN_COMPUTE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_COMPUTE__status), &FMGL(MAIN_COMPUTE__do_init), &FMGL(MAIN_COMPUTE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_COMPUTE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__exception);

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__do_init)() {
    FMGL(MAIN_SQWEEZMES__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_SQWEEZMES");
    x10_int __var1017__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_SQWEEZMES) = __var1017__;
    FMGL(MAIN_SQWEEZMES__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_SQWEEZMES__status), &FMGL(MAIN_SQWEEZMES__do_init), &FMGL(MAIN_SQWEEZMES__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_SQWEEZMES");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__exception);

//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__do_init)() {
    FMGL(MAIN_UPDATE_OUT_EDGES_1__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_1");
    x10_int __var1018__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(MAIN_UPDATE_OUT_EDGES_1) = __var1018__;
    FMGL(MAIN_UPDATE_OUT_EDGES_1__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UPDATE_OUT_EDGES_1__status), &FMGL(MAIN_UPDATE_OUT_EDGES_1__do_init), &FMGL(MAIN_UPDATE_OUT_EDGES_1__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_1");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__exception);

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__do_init)() {
    FMGL(MAIN_UPDATE_OUT_EDGES_2__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_2");
    x10_int __var1019__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(MAIN_UPDATE_OUT_EDGES_2) = __var1019__;
    FMGL(MAIN_UPDATE_OUT_EDGES_2__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UPDATE_OUT_EDGES_2__status), &FMGL(MAIN_UPDATE_OUT_EDGES_2__do_init), &FMGL(MAIN_UPDATE_OUT_EDGES_2__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_2");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__exception);

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__do_init)() {
    FMGL(MAIN_AGGREGATE_COMPUTE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMPUTE");
    x10_int __var1020__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(MAIN_AGGREGATE_COMPUTE) = __var1020__;
    FMGL(MAIN_AGGREGATE_COMPUTE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_AGGREGATE_COMPUTE__status), &FMGL(MAIN_AGGREGATE_COMPUTE__do_init), &FMGL(MAIN_AGGREGATE_COMPUTE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMPUTE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__exception);

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__do_init)() {
    FMGL(MAIN_AGGREGATE_COMM__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMM");
    x10_int __var1021__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(MAIN_AGGREGATE_COMM) = __var1021__;
    FMGL(MAIN_AGGREGATE_COMM__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_AGGREGATE_COMM__status), &FMGL(MAIN_AGGREGATE_COMM__do_init), &FMGL(MAIN_AGGREGATE_COMM__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMM");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__exception);

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__do_init)() {
    FMGL(MAIN_PRE_PROCESS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_PRE_PROCESS");
    x10_int __var1022__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)7));
    FMGL(MAIN_PRE_PROCESS) = __var1022__;
    FMGL(MAIN_PRE_PROCESS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_PRE_PROCESS__status), &FMGL(MAIN_PRE_PROCESS__do_init), &FMGL(MAIN_PRE_PROCESS__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_PRE_PROCESS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__exception);

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__do_init)() {
    FMGL(MAIN_ALLGATHER_1__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_1");
    x10_int __var1023__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(MAIN_ALLGATHER_1) = __var1023__;
    FMGL(MAIN_ALLGATHER_1__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_ALLGATHER_1__status), &FMGL(MAIN_ALLGATHER_1__do_init), &FMGL(MAIN_ALLGATHER_1__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_1");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__exception);

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__do_init)() {
    FMGL(MAIN_PROCESS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_PROCESS");
    x10_int __var1024__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)9));
    FMGL(MAIN_PROCESS) = __var1024__;
    FMGL(MAIN_PROCESS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_PROCESS__status), &FMGL(MAIN_PROCESS__do_init), &FMGL(MAIN_PROCESS__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_PROCESS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__exception);

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__do_init)() {
    FMGL(MAIN_ALLGATHER_2__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_2");
    x10_int __var1025__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)10));
    FMGL(MAIN_ALLGATHER_2) = __var1025__;
    FMGL(MAIN_ALLGATHER_2__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_ALLGATHER_2__status), &FMGL(MAIN_ALLGATHER_2__do_init), &FMGL(MAIN_ALLGATHER_2__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_2");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__exception);

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__do_init)() {
    FMGL(MAIN_COMM_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_COMM_COUNT");
    x10_int __var1026__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)11));
    FMGL(MAIN_COMM_COUNT) = __var1026__;
    FMGL(MAIN_COMM_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_COMM_COUNT__status), &FMGL(MAIN_COMM_COUNT__do_init), &FMGL(MAIN_COMM_COUNT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_COMM_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__exception);

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__do_init)() {
    FMGL(MAIN_UC_COMM__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_COMM");
    x10_int __var1027__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)12));
    FMGL(MAIN_UC_COMM) = __var1027__;
    FMGL(MAIN_UC_COMM__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UC_COMM__status), &FMGL(MAIN_UC_COMM__do_init), &FMGL(MAIN_UC_COMM__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_COMM");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__exception);

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__do_init)() {
    FMGL(MAIN_UC_SORT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_SORT");
    x10_int __var1028__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)13));
    FMGL(MAIN_UC_SORT) = __var1028__;
    FMGL(MAIN_UC_SORT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UC_SORT__status), &FMGL(MAIN_UC_SORT__do_init), &FMGL(MAIN_UC_SORT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_SORT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__exception);

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__do_init)() {
    FMGL(MAIN_UC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_MAKE_OFFSET");
    x10_int __var1029__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)14));
    FMGL(MAIN_UC_MAKE_OFFSET) = __var1029__;
    FMGL(MAIN_UC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UC_MAKE_OFFSET__status), &FMGL(MAIN_UC_MAKE_OFFSET__do_init), &FMGL(MAIN_UC_MAKE_OFFSET__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_MAKE_OFFSET");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__exception);

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__do_init)() {
    FMGL(MAIN_BC_COMM_MES__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MES");
    x10_int __var1030__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)15));
    FMGL(MAIN_BC_COMM_MES) = __var1030__;
    FMGL(MAIN_BC_COMM_MES__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_BC_COMM_MES__status), &FMGL(MAIN_BC_COMM_MES__do_init), &FMGL(MAIN_BC_COMM_MES__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MES");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__exception);

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__do_init)() {
    FMGL(MAIN_BC_COMM_MASK__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MASK");
    x10_int __var1031__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)16));
    FMGL(MAIN_BC_COMM_MASK) = __var1031__;
    FMGL(MAIN_BC_COMM_MASK__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_BC_COMM_MASK__status), &FMGL(MAIN_BC_COMM_MASK__do_init), &FMGL(MAIN_BC_COMM_MASK__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MASK");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__exception);

//#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__do_init)() {
    FMGL(MAIN_BC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_MAKE_OFFSET");
    x10_int __var1032__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)17));
    FMGL(MAIN_BC_MAKE_OFFSET) = __var1032__;
    FMGL(MAIN_BC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_BC_MAKE_OFFSET__status), &FMGL(MAIN_BC_MAKE_OFFSET__do_init), &FMGL(MAIN_BC_MAKE_OFFSET__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_MAKE_OFFSET");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__exception);

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__do_init)() {
    FMGL(MAIN_UPDATEINEDGE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATEINEDGE");
    x10_int __var1033__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)18));
    FMGL(MAIN_UPDATEINEDGE) = __var1033__;
    FMGL(MAIN_UPDATEINEDGE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UPDATEINEDGE__status), &FMGL(MAIN_UPDATEINEDGE__do_init), &FMGL(MAIN_UPDATEINEDGE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATEINEDGE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__exception);

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__do_init)() {
    FMGL(MAIN_OUTPUT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_OUTPUT");
    x10_int __var1034__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)19));
    FMGL(MAIN_OUTPUT) = __var1034__;
    FMGL(MAIN_OUTPUT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_OUTPUT__status), &FMGL(MAIN_OUTPUT__do_init), &FMGL(MAIN_OUTPUT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_OUTPUT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__exception);

//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__do_init)() {
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_POINT_COUNT");
    x10_int __var1035__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)20));
    FMGL(MAIN_POINT_COUNT) = __var1035__;
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_POINT_COUNT__status), &FMGL(MAIN_POINT_COUNT__do_init), &FMGL(MAIN_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__exception);

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__do_init)() {
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_FRAME");
    x10_int __var1036__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_FRAME) = __var1036__;
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_FRAME__status), &FMGL(MAIN_TH_FRAME__do_init), &FMGL(MAIN_TH_FRAME__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__exception);

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__do_init)() {
    FMGL(MAIN_TH_COMPUTE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COMPUTE");
    x10_int __var1037__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_TH_COMPUTE) = __var1037__;
    FMGL(MAIN_TH_COMPUTE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_COMPUTE__status), &FMGL(MAIN_TH_COMPUTE__do_init), &FMGL(MAIN_TH_COMPUTE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COMPUTE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__exception);

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__do_init)() {
    FMGL(MAIN_TH_AGGREGATE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_AGGREGATE");
    x10_int __var1038__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_AGGREGATE) = __var1038__;
    FMGL(MAIN_TH_AGGREGATE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_AGGREGATE__status), &FMGL(MAIN_TH_AGGREGATE__do_init), &FMGL(MAIN_TH_AGGREGATE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_AGGREGATE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__exception);

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__do_init)() {
    FMGL(MAIN_TH_COPY_OUT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COPY_OUT");
    x10_int __var1039__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_TH_COPY_OUT) = __var1039__;
    FMGL(MAIN_TH_COPY_OUT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_COPY_OUT__status), &FMGL(MAIN_TH_COPY_OUT__do_init), &FMGL(MAIN_TH_COPY_OUT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COPY_OUT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__exception);

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__do_init)() {
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_POINT_COUNT");
    x10_int __var1040__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(MAIN_TH_POINT_COUNT) = __var1040__;
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_POINT_COUNT__status), &FMGL(MAIN_TH_POINT_COUNT__do_init), &FMGL(MAIN_TH_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__exception);

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10_int>* org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__do_init)() {
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.FRAME_VECTOR");
    x10::array::Array<x10_int>* __var1041__ = reinterpret_cast<x10::array::Array<x10_int>*>((x10::array::Array<x10_int>*)(__extension__ ({
        x10::array::Array<x10_int>* __var1042__(x10::array::Array<x10_int>::_make(2));
        __var1042__->__set(0, 
        (org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__get)()));
        __var1042__->__set(1, 
        (org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__get)()));
        __var1042__;
    })));
    FMGL(FRAME_VECTOR) = __var1041__;
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__init)() {
    x10aux::StaticInitController::initField(&FMGL(FRAME_VECTOR__status), &FMGL(FRAME_VECTOR__do_init), &FMGL(FRAME_VECTOR__exception), "org::scalegraph::id::ProfilingID__XPregel.FRAME_VECTOR");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__exception);

//#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10::lang::String*>* org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__do_init)() {
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.DESCRIPTION");
    x10::array::Array<x10::lang::String*>* __var1043__ = reinterpret_cast<x10::array::Array<x10::lang::String*>*>((x10::array::Array<x10::lang::String*>*)(__extension__ ({
        x10::array::Array<x10::lang::String*>* __var1044__(x10::array::Array<x10::lang::String*>::_make(23));
        __var1044__->__set(0, 
        (x10aux::makeStringLit("MAIN_INIT")));
        __var1044__->__set(1, 
        (x10aux::makeStringLit("MAIN_COMPUTE")));
        __var1044__->__set(2, 
        (x10aux::makeStringLit("MAIN_SQWEEZMES")));
        __var1044__->__set(3, 
        (x10aux::makeStringLit("MAIN_UPDATE_OUT_EDGES_1")));
        __var1044__->__set(4, 
        (x10aux::makeStringLit("MAIN_UPDATE_OUT_EDGES_2")));
        __var1044__->__set(5, 
        (x10aux::makeStringLit("MAIN_AGGREGATE_COMPUTE")));
        __var1044__->__set(6, 
        (x10aux::makeStringLit("MAIN_AGGREGATE_COMM")));
        __var1044__->__set(7, 
        (x10aux::makeStringLit("MAIN_PRE_PROCESS")));
        __var1044__->__set(8, 
        (x10aux::makeStringLit("MAIN_ALLGATHER_1")));
        __var1044__->__set(9, 
        (x10aux::makeStringLit("MAIN_PROCESS")));
        __var1044__->__set(10, 
        (x10aux::makeStringLit("MAIN_ALLGATHER_2")));
        __var1044__->__set(11, 
        (x10aux::makeStringLit("MAIN_COMM_COUNT")));
        __var1044__->__set(12, 
        (x10aux::makeStringLit("MAIN_UC_COMM")));
        __var1044__->__set(13, 
        (x10aux::makeStringLit("MAIN_UC_SORT")));
        __var1044__->__set(14, 
        (x10aux::makeStringLit("MAIN_UC_MAKE_OFFSET")));
        __var1044__->__set(15, 
        (x10aux::makeStringLit("MAIN_BC_COMM_MES")));
        __var1044__->__set(16, 
        (x10aux::makeStringLit("MAIN_BC_COMM_MASK")));
        __var1044__->__set(17, 
        (x10aux::makeStringLit("MAIN_BC_MAKE_OFFSET")));
        __var1044__->__set(18, 
        (x10aux::makeStringLit("MAIN_UPDATEINEDGE")));
        __var1044__->__set(19, 
        (x10aux::makeStringLit("MAIN_OUTPUT")));
        __var1044__->__set(20, 
        (x10aux::makeStringLit("MAIN_TH_COMPUTE")));
        __var1044__->__set(21, 
        (x10aux::makeStringLit("MAIN_TH_AGGREGATE")));
        __var1044__->__set(22, 
        (x10aux::makeStringLit("MAIN_TH_COPY_OUT")));
        __var1044__;
    })));
    FMGL(DESCRIPTION) = __var1043__;
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__init)() {
    x10aux::StaticInitController::initField(&FMGL(DESCRIPTION__status), &FMGL(DESCRIPTION__do_init), &FMGL(DESCRIPTION__exception), "org::scalegraph::id::ProfilingID__XPregel.DESCRIPTION");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__exception);

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10MethodDecl_c
org::scalegraph::id::ProfilingID__XPregel* org::scalegraph::id::ProfilingID__XPregel::org__scalegraph__id__ProfilingID__XPregel____this__org__scalegraph__id__ProfilingID__XPregel(
  ) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::id::ProfilingID__XPregel::_constructor() {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": polyglot.ast.Empty_c
    ;
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::id::ProfilingID__XPregel* org::scalegraph::id::ProfilingID__XPregel::_make(
  ) {
    org::scalegraph::id::ProfilingID__XPregel* this_ = new (memset(x10aux::alloc<org::scalegraph::id::ProfilingID__XPregel>(), 0, sizeof(org::scalegraph::id::ProfilingID__XPregel))) org::scalegraph::id::ProfilingID__XPregel();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::id::ProfilingID__XPregel::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::id::ProfilingID__XPregel::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::id::ProfilingID__XPregel::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::id::ProfilingID__XPregel::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::id::ProfilingID__XPregel* this_ = new (memset(x10aux::alloc<org::scalegraph::id::ProfilingID__XPregel>(), 0, sizeof(org::scalegraph::id::ProfilingID__XPregel))) org::scalegraph::id::ProfilingID__XPregel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::id::ProfilingID__XPregel::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::id::ProfilingID__XPregel::rtt;
void org::scalegraph::id::ProfilingID__XPregel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.id.ProfilingID.XPregel",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of ProfilingID$XPregel */
/*************************************************/
/*************************************************/
/* START of ProfilingID$IO */
#include <org/scalegraph/id/ProfilingID__IO.h>


//#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__do_init)() {
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_FRAME");
    x10_int __var1046__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_FRAME) = __var1046__;
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_FRAME__status), &FMGL(MAIN_FRAME__do_init), &FMGL(MAIN_FRAME__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__exception);

//#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__do_init)() {
    FMGL(MAIN_READ_HEADER__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_READ_HEADER");
    x10_int __var1047__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_READ_HEADER) = __var1047__;
    FMGL(MAIN_READ_HEADER__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_READ_HEADER__status), &FMGL(MAIN_READ_HEADER__do_init), &FMGL(MAIN_READ_HEADER__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_READ_HEADER");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__exception);

//#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__do_init)() {
    FMGL(MAIN_PREPARE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_PREPARE");
    x10_int __var1048__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_PREPARE) = __var1048__;
    FMGL(MAIN_PREPARE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_PREPARE__status), &FMGL(MAIN_PREPARE__do_init), &FMGL(MAIN_PREPARE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_PREPARE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__exception);

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__do_init)() {
    FMGL(MAIN_SPLIT_PLACE_DIST__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_PLACE_DIST");
    x10_int __var1049__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_SPLIT_PLACE_DIST) = __var1049__;
    FMGL(MAIN_SPLIT_PLACE_DIST__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_SPLIT_PLACE_DIST__status), &FMGL(MAIN_SPLIT_PLACE_DIST__do_init), &FMGL(MAIN_SPLIT_PLACE_DIST__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_PLACE_DIST");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__exception);

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__do_init)() {
    FMGL(MAIN_SPLIT_THREAD_DIST__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_THREAD_DIST");
    x10_int __var1050__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(MAIN_SPLIT_THREAD_DIST) = __var1050__;
    FMGL(MAIN_SPLIT_THREAD_DIST__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_SPLIT_THREAD_DIST__status), &FMGL(MAIN_SPLIT_THREAD_DIST__do_init), &FMGL(MAIN_SPLIT_THREAD_DIST__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_THREAD_DIST");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__exception);

//#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__do_init)() {
    FMGL(MAIN_READ_FILE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_READ_FILE");
    x10_int __var1051__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(MAIN_READ_FILE) = __var1051__;
    FMGL(MAIN_READ_FILE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_READ_FILE__status), &FMGL(MAIN_READ_FILE__do_init), &FMGL(MAIN_READ_FILE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_READ_FILE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__exception);

//#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__do_init)() {
    FMGL(MAIN_WAIT_SUBTASK__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_SUBTASK");
    x10_int __var1052__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(MAIN_WAIT_SUBTASK) = __var1052__;
    FMGL(MAIN_WAIT_SUBTASK__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_WAIT_SUBTASK__status), &FMGL(MAIN_WAIT_SUBTASK__do_init), &FMGL(MAIN_WAIT_SUBTASK__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_SUBTASK");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__exception);

//#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__do_init)() {
    FMGL(MAIN_WAIT_LASTTASK__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_LASTTASK");
    x10_int __var1053__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(MAIN_WAIT_LASTTASK) = __var1053__;
    FMGL(MAIN_WAIT_LASTTASK__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_WAIT_LASTTASK__status), &FMGL(MAIN_WAIT_LASTTASK__do_init), &FMGL(MAIN_WAIT_LASTTASK__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_LASTTASK");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__exception);

//#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__do_init)() {
    FMGL(MAIN_MERGE_RESULT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_MERGE_RESULT");
    x10_int __var1054__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)7));
    FMGL(MAIN_MERGE_RESULT) = __var1054__;
    FMGL(MAIN_MERGE_RESULT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_MERGE_RESULT__status), &FMGL(MAIN_MERGE_RESULT__do_init), &FMGL(MAIN_MERGE_RESULT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_MERGE_RESULT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__exception);

//#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__do_init)() {
    FMGL(MAIN_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_MAKE_STRING");
    x10_int __var1055__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(MAIN_MAKE_STRING) = __var1055__;
    FMGL(MAIN_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_MAKE_STRING__status), &FMGL(MAIN_MAKE_STRING__do_init), &FMGL(MAIN_MAKE_STRING__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_MAKE_STRING");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__exception);

//#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__do_init)() {
    FMGL(MAIN_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_WRITE_WAIT");
    x10_int __var1056__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)9));
    FMGL(MAIN_WRITE_WAIT) = __var1056__;
    FMGL(MAIN_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_WRITE_WAIT__status), &FMGL(MAIN_WRITE_WAIT__do_init), &FMGL(MAIN_WRITE_WAIT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_WRITE_WAIT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__exception);

//#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__do_init)() {
    FMGL(MAIN_LAST_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_LAST_WRITE_WAIT");
    x10_int __var1057__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)10));
    FMGL(MAIN_LAST_WRITE_WAIT) = __var1057__;
    FMGL(MAIN_LAST_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_LAST_WRITE_WAIT__status), &FMGL(MAIN_LAST_WRITE_WAIT__do_init), &FMGL(MAIN_LAST_WRITE_WAIT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_LAST_WRITE_WAIT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__exception);

//#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__do_init)() {
    FMGL(MAIN_CLOSE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_CLOSE");
    x10_int __var1058__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)11));
    FMGL(MAIN_CLOSE) = __var1058__;
    FMGL(MAIN_CLOSE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_CLOSE__status), &FMGL(MAIN_CLOSE__do_init), &FMGL(MAIN_CLOSE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_CLOSE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__exception);

//#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__do_init)() {
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_POINT_COUNT");
    x10_int __var1059__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)12));
    FMGL(MAIN_POINT_COUNT) = __var1059__;
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_POINT_COUNT__status), &FMGL(MAIN_POINT_COUNT__do_init), &FMGL(MAIN_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__exception);

//#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__do_init)() {
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_FRAME");
    x10_int __var1060__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_FRAME) = __var1060__;
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_FRAME__status), &FMGL(MAIN_TH_FRAME__do_init), &FMGL(MAIN_TH_FRAME__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__exception);

//#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__do_init)() {
    FMGL(MAIN_TH_PARSE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_PARSE");
    x10_int __var1061__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_TH_PARSE) = __var1061__;
    FMGL(MAIN_TH_PARSE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_PARSE__status), &FMGL(MAIN_TH_PARSE__do_init), &FMGL(MAIN_TH_PARSE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_PARSE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__exception);

//#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__do_init)() {
    FMGL(MAIN_TH_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_MAKE_STRING");
    x10_int __var1062__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_MAKE_STRING) = __var1062__;
    FMGL(MAIN_TH_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_MAKE_STRING__status), &FMGL(MAIN_TH_MAKE_STRING__do_init), &FMGL(MAIN_TH_MAKE_STRING__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_MAKE_STRING");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__exception);

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__do_init)() {
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_POINT_COUNT");
    x10_int __var1063__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_TH_POINT_COUNT) = __var1063__;
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_POINT_COUNT__status), &FMGL(MAIN_TH_POINT_COUNT__do_init), &FMGL(MAIN_TH_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__exception);

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__do_init)() {
    FMGL(SUB_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_FRAME");
    x10_int __var1064__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(SUB_FRAME) = __var1064__;
    FMGL(SUB_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_FRAME__status), &FMGL(SUB_FRAME__do_init), &FMGL(SUB_FRAME__exception), "org::scalegraph::id::ProfilingID__IO.SUB_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__exception);

//#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__do_init)() {
    FMGL(SUB_PARSE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_PARSE");
    x10_int __var1065__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(SUB_PARSE) = __var1065__;
    FMGL(SUB_PARSE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_PARSE__status), &FMGL(SUB_PARSE__do_init), &FMGL(SUB_PARSE__exception), "org::scalegraph::id::ProfilingID__IO.SUB_PARSE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__exception);

//#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__do_init)() {
    FMGL(SUB_WRITE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_WRITE");
    x10_int __var1066__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(SUB_WRITE) = __var1066__;
    FMGL(SUB_WRITE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_WRITE__status), &FMGL(SUB_WRITE__do_init), &FMGL(SUB_WRITE__exception), "org::scalegraph::id::ProfilingID__IO.SUB_WRITE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__exception);

//#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__do_init)() {
    FMGL(SUB_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_POINT_COUNT");
    x10_int __var1067__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(SUB_POINT_COUNT) = __var1067__;
    FMGL(SUB_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_POINT_COUNT__status), &FMGL(SUB_POINT_COUNT__do_init), &FMGL(SUB_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__IO.SUB_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__exception);

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10_int>* org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR);
void org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__do_init)() {
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.FRAME_VECTOR");
    x10::array::Array<x10_int>* __var1068__ = reinterpret_cast<x10::array::Array<x10_int>*>((x10::array::Array<x10_int>*)(__extension__ ({
        x10::array::Array<x10_int>* __var1069__(x10::array::Array<x10_int>::_make(3));
        __var1069__->__set(0, 
        (org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__get)()));
        __var1069__->__set(1, 
        (org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__get)()));
        __var1069__->__set(2, 
        (org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__get)()));
        __var1069__;
    })));
    FMGL(FRAME_VECTOR) = __var1068__;
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__init)() {
    x10aux::StaticInitController::initField(&FMGL(FRAME_VECTOR__status), &FMGL(FRAME_VECTOR__do_init), &FMGL(FRAME_VECTOR__exception), "org::scalegraph::id::ProfilingID__IO.FRAME_VECTOR");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__exception);

//#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10::lang::String*>* org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION);
void org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__do_init)() {
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.DESCRIPTION");
    x10::array::Array<x10::lang::String*>* __var1070__ = reinterpret_cast<x10::array::Array<x10::lang::String*>*>((x10::array::Array<x10::lang::String*>*)(__extension__ ({
        x10::array::Array<x10::lang::String*>* __var1071__(x10::array::Array<x10::lang::String*>::_make(16));
        __var1071__->__set(0, 
        (x10aux::makeStringLit("MAIN_READ_HEADER")));
        __var1071__->__set(1, 
        (x10aux::makeStringLit("MAIN_PREPARE")));
        __var1071__->__set(2, 
        (x10aux::makeStringLit("MAIN_SPLIT_PLACE_DIST")));
        __var1071__->__set(3, 
        (x10aux::makeStringLit("MAIN_SPLIT_THREAD_DIST")));
        __var1071__->__set(4, 
        (x10aux::makeStringLit("MAIN_READ_FILE")));
        __var1071__->__set(5, 
        (x10aux::makeStringLit("MAIN_WAIT_SUBTASK")));
        __var1071__->__set(6, 
        (x10aux::makeStringLit("MAIN_WAIT_LASTTASK")));
        __var1071__->__set(7, 
        (x10aux::makeStringLit("MAIN_MERGE_RESULT")));
        __var1071__->__set(8, 
        (x10aux::makeStringLit("MAIN_MAKE_STRING")));
        __var1071__->__set(9, 
        (x10aux::makeStringLit("MAIN_WRITE_WAIT")));
        __var1071__->__set(10, 
        (x10aux::makeStringLit("MAIN_LAST_WRITE_WAIT")));
        __var1071__->__set(11, 
        (x10aux::makeStringLit("MAIN_CLOSE")));
        __var1071__->__set(12, 
        (x10aux::makeStringLit("MAIN_TH_PARSE")));
        __var1071__->__set(13, 
        (x10aux::makeStringLit("MAIN_TH_MAKE_STRING")));
        __var1071__->__set(14, 
        (x10aux::makeStringLit("SUB_PARSE")));
        __var1071__->__set(15, 
        (x10aux::makeStringLit("SUB_WRITE")));
        __var1071__;
    })));
    FMGL(DESCRIPTION) = __var1070__;
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__init)() {
    x10aux::StaticInitController::initField(&FMGL(DESCRIPTION__status), &FMGL(DESCRIPTION__do_init), &FMGL(DESCRIPTION__exception), "org::scalegraph::id::ProfilingID__IO.DESCRIPTION");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__exception);

//#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10MethodDecl_c
org::scalegraph::id::ProfilingID__IO* org::scalegraph::id::ProfilingID__IO::org__scalegraph__id__ProfilingID__IO____this__org__scalegraph__id__ProfilingID__IO(
  ) {
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::id::ProfilingID__IO::_constructor() {
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": polyglot.ast.Empty_c
    ;
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::id::ProfilingID__IO* org::scalegraph::id::ProfilingID__IO::_make(
  ) {
    org::scalegraph::id::ProfilingID__IO* this_ = new (memset(x10aux::alloc<org::scalegraph::id::ProfilingID__IO>(), 0, sizeof(org::scalegraph::id::ProfilingID__IO))) org::scalegraph::id::ProfilingID__IO();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::id::ProfilingID__IO::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::id::ProfilingID__IO::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::id::ProfilingID__IO::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::id::ProfilingID__IO::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::id::ProfilingID__IO* this_ = new (memset(x10aux::alloc<org::scalegraph::id::ProfilingID__IO>(), 0, sizeof(org::scalegraph::id::ProfilingID__IO))) org::scalegraph::id::ProfilingID__IO();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::id::ProfilingID__IO::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::id::ProfilingID__IO::rtt;
void org::scalegraph::id::ProfilingID__IO::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.id.ProfilingID.IO",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of ProfilingID$IO */
/*************************************************/

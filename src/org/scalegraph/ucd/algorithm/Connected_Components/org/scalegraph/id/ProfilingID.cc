/*************************************************/
/* START of ProfilingID */
#include <org/scalegraph/id/ProfilingID.h>


//#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10MethodDecl_c
org::scalegraph::id::ProfilingID* org::scalegraph::id::ProfilingID::org__scalegraph__id__ProfilingID____this__org__scalegraph__id__ProfilingID(
  ) {
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::id::ProfilingID::_constructor() {
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.AssignPropertyCall_c
    
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


//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__do_init)() {
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_FRAME");
    x10_int __var641__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_FRAME) = __var641__;
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_FRAME__status), &FMGL(MAIN_FRAME__do_init), &FMGL(MAIN_FRAME__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__exception);

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__do_init)() {
    FMGL(MAIN_INIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_INIT");
    x10_int __var642__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_INIT) = __var642__;
    FMGL(MAIN_INIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_INIT__status), &FMGL(MAIN_INIT__do_init), &FMGL(MAIN_INIT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_INIT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__exception);

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__do_init)() {
    FMGL(MAIN_COMPUTE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_COMPUTE");
    x10_int __var643__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_COMPUTE) = __var643__;
    FMGL(MAIN_COMPUTE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_COMPUTE__status), &FMGL(MAIN_COMPUTE__do_init), &FMGL(MAIN_COMPUTE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_COMPUTE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__exception);

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__do_init)() {
    FMGL(MAIN_SQWEEZMES__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_SQWEEZMES");
    x10_int __var644__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_SQWEEZMES) = __var644__;
    FMGL(MAIN_SQWEEZMES__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_SQWEEZMES__status), &FMGL(MAIN_SQWEEZMES__do_init), &FMGL(MAIN_SQWEEZMES__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_SQWEEZMES");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__exception);

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__do_init)() {
    FMGL(MAIN_UPDATE_OUT_EDGES_1__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_1");
    x10_int __var645__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(MAIN_UPDATE_OUT_EDGES_1) = __var645__;
    FMGL(MAIN_UPDATE_OUT_EDGES_1__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UPDATE_OUT_EDGES_1__status), &FMGL(MAIN_UPDATE_OUT_EDGES_1__do_init), &FMGL(MAIN_UPDATE_OUT_EDGES_1__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_1");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__exception);

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__do_init)() {
    FMGL(MAIN_UPDATE_OUT_EDGES_2__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_2");
    x10_int __var646__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(MAIN_UPDATE_OUT_EDGES_2) = __var646__;
    FMGL(MAIN_UPDATE_OUT_EDGES_2__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UPDATE_OUT_EDGES_2__status), &FMGL(MAIN_UPDATE_OUT_EDGES_2__do_init), &FMGL(MAIN_UPDATE_OUT_EDGES_2__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATE_OUT_EDGES_2");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__exception);

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__do_init)() {
    FMGL(MAIN_AGGREGATE_COMPUTE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMPUTE");
    x10_int __var647__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(MAIN_AGGREGATE_COMPUTE) = __var647__;
    FMGL(MAIN_AGGREGATE_COMPUTE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_AGGREGATE_COMPUTE__status), &FMGL(MAIN_AGGREGATE_COMPUTE__do_init), &FMGL(MAIN_AGGREGATE_COMPUTE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMPUTE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__exception);

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__do_init)() {
    FMGL(MAIN_AGGREGATE_COMM__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMM");
    x10_int __var648__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(MAIN_AGGREGATE_COMM) = __var648__;
    FMGL(MAIN_AGGREGATE_COMM__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_AGGREGATE_COMM__status), &FMGL(MAIN_AGGREGATE_COMM__do_init), &FMGL(MAIN_AGGREGATE_COMM__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_AGGREGATE_COMM");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__exception);

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__do_init)() {
    FMGL(MAIN_PRE_PROCESS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_PRE_PROCESS");
    x10_int __var649__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)7));
    FMGL(MAIN_PRE_PROCESS) = __var649__;
    FMGL(MAIN_PRE_PROCESS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_PRE_PROCESS__status), &FMGL(MAIN_PRE_PROCESS__do_init), &FMGL(MAIN_PRE_PROCESS__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_PRE_PROCESS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__exception);

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__do_init)() {
    FMGL(MAIN_ALLGATHER_1__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_1");
    x10_int __var650__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(MAIN_ALLGATHER_1) = __var650__;
    FMGL(MAIN_ALLGATHER_1__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_ALLGATHER_1__status), &FMGL(MAIN_ALLGATHER_1__do_init), &FMGL(MAIN_ALLGATHER_1__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_1");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__exception);

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__do_init)() {
    FMGL(MAIN_PROCESS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_PROCESS");
    x10_int __var651__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)9));
    FMGL(MAIN_PROCESS) = __var651__;
    FMGL(MAIN_PROCESS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_PROCESS__status), &FMGL(MAIN_PROCESS__do_init), &FMGL(MAIN_PROCESS__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_PROCESS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__exception);

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__do_init)() {
    FMGL(MAIN_ALLGATHER_2__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_2");
    x10_int __var652__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)10));
    FMGL(MAIN_ALLGATHER_2) = __var652__;
    FMGL(MAIN_ALLGATHER_2__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_ALLGATHER_2__status), &FMGL(MAIN_ALLGATHER_2__do_init), &FMGL(MAIN_ALLGATHER_2__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_ALLGATHER_2");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__exception);

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__do_init)() {
    FMGL(MAIN_COMM_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_COMM_COUNT");
    x10_int __var653__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)11));
    FMGL(MAIN_COMM_COUNT) = __var653__;
    FMGL(MAIN_COMM_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_COMM_COUNT__status), &FMGL(MAIN_COMM_COUNT__do_init), &FMGL(MAIN_COMM_COUNT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_COMM_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__exception);

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__do_init)() {
    FMGL(MAIN_UC_COMM__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_COMM");
    x10_int __var654__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)12));
    FMGL(MAIN_UC_COMM) = __var654__;
    FMGL(MAIN_UC_COMM__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UC_COMM__status), &FMGL(MAIN_UC_COMM__do_init), &FMGL(MAIN_UC_COMM__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_COMM");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__exception);

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__do_init)() {
    FMGL(MAIN_UC_SORT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_SORT");
    x10_int __var655__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)13));
    FMGL(MAIN_UC_SORT) = __var655__;
    FMGL(MAIN_UC_SORT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UC_SORT__status), &FMGL(MAIN_UC_SORT__do_init), &FMGL(MAIN_UC_SORT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_SORT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__exception);

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__do_init)() {
    FMGL(MAIN_UC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_MAKE_OFFSET");
    x10_int __var656__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)14));
    FMGL(MAIN_UC_MAKE_OFFSET) = __var656__;
    FMGL(MAIN_UC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UC_MAKE_OFFSET__status), &FMGL(MAIN_UC_MAKE_OFFSET__do_init), &FMGL(MAIN_UC_MAKE_OFFSET__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UC_MAKE_OFFSET");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__exception);

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__do_init)() {
    FMGL(MAIN_BC_COMM_MES__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MES");
    x10_int __var657__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)15));
    FMGL(MAIN_BC_COMM_MES) = __var657__;
    FMGL(MAIN_BC_COMM_MES__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_BC_COMM_MES__status), &FMGL(MAIN_BC_COMM_MES__do_init), &FMGL(MAIN_BC_COMM_MES__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MES");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__exception);

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__do_init)() {
    FMGL(MAIN_BC_COMM_MASK__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MASK");
    x10_int __var658__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)16));
    FMGL(MAIN_BC_COMM_MASK) = __var658__;
    FMGL(MAIN_BC_COMM_MASK__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_BC_COMM_MASK__status), &FMGL(MAIN_BC_COMM_MASK__do_init), &FMGL(MAIN_BC_COMM_MASK__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_COMM_MASK");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__exception);

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__do_init)() {
    FMGL(MAIN_BC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_MAKE_OFFSET");
    x10_int __var659__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)17));
    FMGL(MAIN_BC_MAKE_OFFSET) = __var659__;
    FMGL(MAIN_BC_MAKE_OFFSET__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_BC_MAKE_OFFSET__status), &FMGL(MAIN_BC_MAKE_OFFSET__do_init), &FMGL(MAIN_BC_MAKE_OFFSET__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_BC_MAKE_OFFSET");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__exception);

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__do_init)() {
    FMGL(MAIN_UPDATEINEDGE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATEINEDGE");
    x10_int __var660__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)18));
    FMGL(MAIN_UPDATEINEDGE) = __var660__;
    FMGL(MAIN_UPDATEINEDGE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_UPDATEINEDGE__status), &FMGL(MAIN_UPDATEINEDGE__do_init), &FMGL(MAIN_UPDATEINEDGE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_UPDATEINEDGE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__exception);

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__do_init)() {
    FMGL(MAIN_OUTPUT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_OUTPUT");
    x10_int __var661__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)19));
    FMGL(MAIN_OUTPUT) = __var661__;
    FMGL(MAIN_OUTPUT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_OUTPUT__status), &FMGL(MAIN_OUTPUT__do_init), &FMGL(MAIN_OUTPUT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_OUTPUT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__exception);

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__do_init)() {
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_POINT_COUNT");
    x10_int __var662__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)20));
    FMGL(MAIN_POINT_COUNT) = __var662__;
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_POINT_COUNT__status), &FMGL(MAIN_POINT_COUNT__do_init), &FMGL(MAIN_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__exception);

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__do_init)() {
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_FRAME");
    x10_int __var663__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_FRAME) = __var663__;
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_FRAME__status), &FMGL(MAIN_TH_FRAME__do_init), &FMGL(MAIN_TH_FRAME__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__exception);

//#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__do_init)() {
    FMGL(MAIN_TH_COMPUTE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COMPUTE");
    x10_int __var664__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_TH_COMPUTE) = __var664__;
    FMGL(MAIN_TH_COMPUTE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_COMPUTE__status), &FMGL(MAIN_TH_COMPUTE__do_init), &FMGL(MAIN_TH_COMPUTE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COMPUTE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__exception);

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__do_init)() {
    FMGL(MAIN_TH_AGGREGATE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_AGGREGATE");
    x10_int __var665__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_AGGREGATE) = __var665__;
    FMGL(MAIN_TH_AGGREGATE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_AGGREGATE__status), &FMGL(MAIN_TH_AGGREGATE__do_init), &FMGL(MAIN_TH_AGGREGATE__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_AGGREGATE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__exception);

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__do_init)() {
    FMGL(MAIN_TH_COPY_OUT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COPY_OUT");
    x10_int __var666__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_TH_COPY_OUT) = __var666__;
    FMGL(MAIN_TH_COPY_OUT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_COPY_OUT__status), &FMGL(MAIN_TH_COPY_OUT__do_init), &FMGL(MAIN_TH_COPY_OUT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_COPY_OUT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__exception);

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__do_init)() {
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_POINT_COUNT");
    x10_int __var667__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(MAIN_TH_POINT_COUNT) = __var667__;
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_POINT_COUNT__status), &FMGL(MAIN_TH_POINT_COUNT__do_init), &FMGL(MAIN_TH_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__XPregel.MAIN_TH_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__exception);

//#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10_int>* org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__do_init)() {
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.FRAME_VECTOR");
    x10::array::Array<x10_int>* __var668__ = reinterpret_cast<x10::array::Array<x10_int>*>((x10::array::Array<x10_int>*)(__extension__ ({
        x10::array::Array<x10_int>* __var669__(x10::array::Array<x10_int>::_make(2));
        __var669__->__set(0, 
        (((x10_int)20)));
        __var669__->__set(1, 
        (((x10_int)3)));
        __var669__;
    })));
    FMGL(FRAME_VECTOR) = __var668__;
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__init)() {
    x10aux::StaticInitController::initField(&FMGL(FRAME_VECTOR__status), &FMGL(FRAME_VECTOR__do_init), &FMGL(FRAME_VECTOR__exception), "org::scalegraph::id::ProfilingID__XPregel.FRAME_VECTOR");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__exception);

//#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10::lang::String*>* org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION);
void org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__do_init)() {
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__XPregel.DESCRIPTION");
    x10::array::Array<x10::lang::String*>* __var670__ = reinterpret_cast<x10::array::Array<x10::lang::String*>*>((x10::array::Array<x10::lang::String*>*)(__extension__ ({
        x10::array::Array<x10::lang::String*>* __var671__(x10::array::Array<x10::lang::String*>::_make(23));
        __var671__->__set(0, 
        (x10aux::makeStringLit("MAIN_INIT")));
        __var671__->__set(1, 
        (x10aux::makeStringLit("MAIN_COMPUTE")));
        __var671__->__set(2, 
        (x10aux::makeStringLit("MAIN_SQWEEZMES")));
        __var671__->__set(3, 
        (x10aux::makeStringLit("MAIN_UPDATE_OUT_EDGES_1")));
        __var671__->__set(4, 
        (x10aux::makeStringLit("MAIN_UPDATE_OUT_EDGES_2")));
        __var671__->__set(5, 
        (x10aux::makeStringLit("MAIN_AGGREGATE_COMPUTE")));
        __var671__->__set(6, 
        (x10aux::makeStringLit("MAIN_AGGREGATE_COMM")));
        __var671__->__set(7, 
        (x10aux::makeStringLit("MAIN_PRE_PROCESS")));
        __var671__->__set(8, 
        (x10aux::makeStringLit("MAIN_ALLGATHER_1")));
        __var671__->__set(9, 
        (x10aux::makeStringLit("MAIN_PROCESS")));
        __var671__->__set(10, 
        (x10aux::makeStringLit("MAIN_ALLGATHER_2")));
        __var671__->__set(11, 
        (x10aux::makeStringLit("MAIN_COMM_COUNT")));
        __var671__->__set(12, 
        (x10aux::makeStringLit("MAIN_UC_COMM")));
        __var671__->__set(13, 
        (x10aux::makeStringLit("MAIN_UC_SORT")));
        __var671__->__set(14, 
        (x10aux::makeStringLit("MAIN_UC_MAKE_OFFSET")));
        __var671__->__set(15, 
        (x10aux::makeStringLit("MAIN_BC_COMM_MES")));
        __var671__->__set(16, 
        (x10aux::makeStringLit("MAIN_BC_COMM_MASK")));
        __var671__->__set(17, 
        (x10aux::makeStringLit("MAIN_BC_MAKE_OFFSET")));
        __var671__->__set(18, 
        (x10aux::makeStringLit("MAIN_UPDATEINEDGE")));
        __var671__->__set(19, 
        (x10aux::makeStringLit("MAIN_OUTPUT")));
        __var671__->__set(20, 
        (x10aux::makeStringLit("MAIN_TH_COMPUTE")));
        __var671__->__set(21, 
        (x10aux::makeStringLit("MAIN_TH_AGGREGATE")));
        __var671__->__set(22, 
        (x10aux::makeStringLit("MAIN_TH_COPY_OUT")));
        __var671__;
    })));
    FMGL(DESCRIPTION) = __var670__;
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__init)() {
    x10aux::StaticInitController::initField(&FMGL(DESCRIPTION__status), &FMGL(DESCRIPTION__do_init), &FMGL(DESCRIPTION__exception), "org::scalegraph::id::ProfilingID__XPregel.DESCRIPTION");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__exception);

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10MethodDecl_c
org::scalegraph::id::ProfilingID__XPregel* org::scalegraph::id::ProfilingID__XPregel::org__scalegraph__id__ProfilingID__XPregel____this__org__scalegraph__id__ProfilingID__XPregel(
  ) {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::id::ProfilingID__XPregel::_constructor() {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.AssignPropertyCall_c
    
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


//#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__do_init)() {
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_FRAME");
    x10_int __var673__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_FRAME) = __var673__;
    FMGL(MAIN_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_FRAME__status), &FMGL(MAIN_FRAME__do_init), &FMGL(MAIN_FRAME__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__exception);

//#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__do_init)() {
    FMGL(MAIN_READ_HEADER__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_READ_HEADER");
    x10_int __var674__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_READ_HEADER) = __var674__;
    FMGL(MAIN_READ_HEADER__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_READ_HEADER__status), &FMGL(MAIN_READ_HEADER__do_init), &FMGL(MAIN_READ_HEADER__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_READ_HEADER");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__exception);

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__do_init)() {
    FMGL(MAIN_PREPARE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_PREPARE");
    x10_int __var675__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_PREPARE) = __var675__;
    FMGL(MAIN_PREPARE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_PREPARE__status), &FMGL(MAIN_PREPARE__do_init), &FMGL(MAIN_PREPARE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_PREPARE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__exception);

//#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__do_init)() {
    FMGL(MAIN_SPLIT_PLACE_DIST__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_PLACE_DIST");
    x10_int __var676__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_SPLIT_PLACE_DIST) = __var676__;
    FMGL(MAIN_SPLIT_PLACE_DIST__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_SPLIT_PLACE_DIST__status), &FMGL(MAIN_SPLIT_PLACE_DIST__do_init), &FMGL(MAIN_SPLIT_PLACE_DIST__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_PLACE_DIST");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__exception);

//#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__do_init)() {
    FMGL(MAIN_SPLIT_THREAD_DIST__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_THREAD_DIST");
    x10_int __var677__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(MAIN_SPLIT_THREAD_DIST) = __var677__;
    FMGL(MAIN_SPLIT_THREAD_DIST__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_SPLIT_THREAD_DIST__status), &FMGL(MAIN_SPLIT_THREAD_DIST__do_init), &FMGL(MAIN_SPLIT_THREAD_DIST__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_SPLIT_THREAD_DIST");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__exception);

//#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__do_init)() {
    FMGL(MAIN_READ_FILE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_READ_FILE");
    x10_int __var678__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(MAIN_READ_FILE) = __var678__;
    FMGL(MAIN_READ_FILE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_READ_FILE__status), &FMGL(MAIN_READ_FILE__do_init), &FMGL(MAIN_READ_FILE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_READ_FILE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__exception);

//#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__do_init)() {
    FMGL(MAIN_WAIT_SUBTASK__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_SUBTASK");
    x10_int __var679__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(MAIN_WAIT_SUBTASK) = __var679__;
    FMGL(MAIN_WAIT_SUBTASK__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_WAIT_SUBTASK__status), &FMGL(MAIN_WAIT_SUBTASK__do_init), &FMGL(MAIN_WAIT_SUBTASK__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_SUBTASK");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__exception);

//#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__do_init)() {
    FMGL(MAIN_WAIT_LASTTASK__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_LASTTASK");
    x10_int __var680__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(MAIN_WAIT_LASTTASK) = __var680__;
    FMGL(MAIN_WAIT_LASTTASK__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_WAIT_LASTTASK__status), &FMGL(MAIN_WAIT_LASTTASK__do_init), &FMGL(MAIN_WAIT_LASTTASK__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_WAIT_LASTTASK");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__exception);

//#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__do_init)() {
    FMGL(MAIN_MERGE_RESULT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_MERGE_RESULT");
    x10_int __var681__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)7));
    FMGL(MAIN_MERGE_RESULT) = __var681__;
    FMGL(MAIN_MERGE_RESULT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_MERGE_RESULT__status), &FMGL(MAIN_MERGE_RESULT__do_init), &FMGL(MAIN_MERGE_RESULT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_MERGE_RESULT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__exception);

//#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__do_init)() {
    FMGL(MAIN_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_MAKE_STRING");
    x10_int __var682__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(MAIN_MAKE_STRING) = __var682__;
    FMGL(MAIN_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_MAKE_STRING__status), &FMGL(MAIN_MAKE_STRING__do_init), &FMGL(MAIN_MAKE_STRING__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_MAKE_STRING");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__exception);

//#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__do_init)() {
    FMGL(MAIN_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_WRITE_WAIT");
    x10_int __var683__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)9));
    FMGL(MAIN_WRITE_WAIT) = __var683__;
    FMGL(MAIN_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_WRITE_WAIT__status), &FMGL(MAIN_WRITE_WAIT__do_init), &FMGL(MAIN_WRITE_WAIT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_WRITE_WAIT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__exception);

//#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__do_init)() {
    FMGL(MAIN_LAST_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_LAST_WRITE_WAIT");
    x10_int __var684__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)10));
    FMGL(MAIN_LAST_WRITE_WAIT) = __var684__;
    FMGL(MAIN_LAST_WRITE_WAIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_LAST_WRITE_WAIT__status), &FMGL(MAIN_LAST_WRITE_WAIT__do_init), &FMGL(MAIN_LAST_WRITE_WAIT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_LAST_WRITE_WAIT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__exception);

//#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__do_init)() {
    FMGL(MAIN_CLOSE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_CLOSE");
    x10_int __var685__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)11));
    FMGL(MAIN_CLOSE) = __var685__;
    FMGL(MAIN_CLOSE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_CLOSE__status), &FMGL(MAIN_CLOSE__do_init), &FMGL(MAIN_CLOSE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_CLOSE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__exception);

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__do_init)() {
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_POINT_COUNT");
    x10_int __var686__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)12));
    FMGL(MAIN_POINT_COUNT) = __var686__;
    FMGL(MAIN_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_POINT_COUNT__status), &FMGL(MAIN_POINT_COUNT__do_init), &FMGL(MAIN_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__exception);

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__do_init)() {
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_FRAME");
    x10_int __var687__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_FRAME) = __var687__;
    FMGL(MAIN_TH_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_FRAME__status), &FMGL(MAIN_TH_FRAME__do_init), &FMGL(MAIN_TH_FRAME__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__exception);

//#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__do_init)() {
    FMGL(MAIN_TH_PARSE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_PARSE");
    x10_int __var688__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(MAIN_TH_PARSE) = __var688__;
    FMGL(MAIN_TH_PARSE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_PARSE__status), &FMGL(MAIN_TH_PARSE__do_init), &FMGL(MAIN_TH_PARSE__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_PARSE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__exception);

//#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__do_init)() {
    FMGL(MAIN_TH_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_MAKE_STRING");
    x10_int __var689__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(MAIN_TH_MAKE_STRING) = __var689__;
    FMGL(MAIN_TH_MAKE_STRING__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_MAKE_STRING__status), &FMGL(MAIN_TH_MAKE_STRING__do_init), &FMGL(MAIN_TH_MAKE_STRING__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_MAKE_STRING");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__exception);

//#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT);
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__do_init)() {
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.MAIN_TH_POINT_COUNT");
    x10_int __var690__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(MAIN_TH_POINT_COUNT) = __var690__;
    FMGL(MAIN_TH_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAIN_TH_POINT_COUNT__status), &FMGL(MAIN_TH_POINT_COUNT__do_init), &FMGL(MAIN_TH_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__IO.MAIN_TH_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__exception);

//#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__do_init)() {
    FMGL(SUB_FRAME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_FRAME");
    x10_int __var691__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(SUB_FRAME) = __var691__;
    FMGL(SUB_FRAME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_FRAME__status), &FMGL(SUB_FRAME__do_init), &FMGL(SUB_FRAME__exception), "org::scalegraph::id::ProfilingID__IO.SUB_FRAME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__exception);

//#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__do_init)() {
    FMGL(SUB_PARSE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_PARSE");
    x10_int __var692__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(SUB_PARSE) = __var692__;
    FMGL(SUB_PARSE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_PARSE__status), &FMGL(SUB_PARSE__do_init), &FMGL(SUB_PARSE__exception), "org::scalegraph::id::ProfilingID__IO.SUB_PARSE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__exception);

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__do_init)() {
    FMGL(SUB_WRITE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_WRITE");
    x10_int __var693__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(SUB_WRITE) = __var693__;
    FMGL(SUB_WRITE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_WRITE__status), &FMGL(SUB_WRITE__do_init), &FMGL(SUB_WRITE__exception), "org::scalegraph::id::ProfilingID__IO.SUB_WRITE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__exception);

//#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT);
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__do_init)() {
    FMGL(SUB_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.SUB_POINT_COUNT");
    x10_int __var694__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(SUB_POINT_COUNT) = __var694__;
    FMGL(SUB_POINT_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(SUB_POINT_COUNT__status), &FMGL(SUB_POINT_COUNT__do_init), &FMGL(SUB_POINT_COUNT__exception), "org::scalegraph::id::ProfilingID__IO.SUB_POINT_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__exception);

//#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10_int>* org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR);
void org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__do_init)() {
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.FRAME_VECTOR");
    x10::array::Array<x10_int>* __var695__ = reinterpret_cast<x10::array::Array<x10_int>*>((x10::array::Array<x10_int>*)(__extension__ ({
        x10::array::Array<x10_int>* __var696__(x10::array::Array<x10_int>::_make(3));
        __var696__->__set(0, 
        (((x10_int)12)));
        __var696__->__set(1, 
        (((x10_int)2)));
        __var696__->__set(2, 
        (((x10_int)2)));
        __var696__;
    })));
    FMGL(FRAME_VECTOR) = __var695__;
    FMGL(FRAME_VECTOR__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__init)() {
    x10aux::StaticInitController::initField(&FMGL(FRAME_VECTOR__status), &FMGL(FRAME_VECTOR__do_init), &FMGL(FRAME_VECTOR__exception), "org::scalegraph::id::ProfilingID__IO.FRAME_VECTOR");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__exception);

//#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10FieldDecl_c
x10::array::Array<x10::lang::String*>* org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION);
void org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__do_init)() {
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::id::ProfilingID__IO.DESCRIPTION");
    x10::array::Array<x10::lang::String*>* __var697__ = reinterpret_cast<x10::array::Array<x10::lang::String*>*>((x10::array::Array<x10::lang::String*>*)(__extension__ ({
        x10::array::Array<x10::lang::String*>* __var698__(x10::array::Array<x10::lang::String*>::_make(16));
        __var698__->__set(0, 
        (x10aux::makeStringLit("MAIN_READ_HEADER")));
        __var698__->__set(1, 
        (x10aux::makeStringLit("MAIN_PREPARE")));
        __var698__->__set(2, 
        (x10aux::makeStringLit("MAIN_SPLIT_PLACE_DIST")));
        __var698__->__set(3, 
        (x10aux::makeStringLit("MAIN_SPLIT_THREAD_DIST")));
        __var698__->__set(4, 
        (x10aux::makeStringLit("MAIN_READ_FILE")));
        __var698__->__set(5, 
        (x10aux::makeStringLit("MAIN_WAIT_SUBTASK")));
        __var698__->__set(6, 
        (x10aux::makeStringLit("MAIN_WAIT_LASTTASK")));
        __var698__->__set(7, 
        (x10aux::makeStringLit("MAIN_MERGE_RESULT")));
        __var698__->__set(8, 
        (x10aux::makeStringLit("MAIN_MAKE_STRING")));
        __var698__->__set(9, 
        (x10aux::makeStringLit("MAIN_WRITE_WAIT")));
        __var698__->__set(10, 
        (x10aux::makeStringLit("MAIN_LAST_WRITE_WAIT")));
        __var698__->__set(11, 
        (x10aux::makeStringLit("MAIN_CLOSE")));
        __var698__->__set(12, 
        (x10aux::makeStringLit("MAIN_TH_PARSE")));
        __var698__->__set(13, 
        (x10aux::makeStringLit("MAIN_TH_MAKE_STRING")));
        __var698__->__set(14, 
        (x10aux::makeStringLit("SUB_PARSE")));
        __var698__->__set(15, 
        (x10aux::makeStringLit("SUB_WRITE")));
        __var698__;
    })));
    FMGL(DESCRIPTION) = __var697__;
    FMGL(DESCRIPTION__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__init)() {
    x10aux::StaticInitController::initField(&FMGL(DESCRIPTION__status), &FMGL(DESCRIPTION__do_init), &FMGL(DESCRIPTION__exception), "org::scalegraph::id::ProfilingID__IO.DESCRIPTION");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__status);
x10::lang::CheckedThrowable* org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__exception);

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10MethodDecl_c
org::scalegraph::id::ProfilingID__IO* org::scalegraph::id::ProfilingID__IO::org__scalegraph__id__ProfilingID__IO____this__org__scalegraph__id__ProfilingID__IO(
  ) {
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::id::ProfilingID__IO::_constructor() {
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/id/ProfilingID.x10": x10.ast.AssignPropertyCall_c
    
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

/*************************************************/
/* START of StopWatch */
#include <org/scalegraph/util/StopWatch.h>

#include <x10/lang/Long.h>
#include <x10/util/Timer.h>
#include <x10/lang/String.h>
#include <x10/lang/Double.h>
#include <org/scalegraph/test/STest.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/MemoryChunk.h>

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10FieldDecl_c

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10FieldDecl_c

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::StopWatch::_constructor() {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.AssignPropertyCall_c
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* this108808 = this;
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this108808)->FMGL(startTime) = ((x10_long)0ll);
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this108808)->FMGL(prevTime) = ((x10_long)0ll);
    
    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(startTime) = this->FMGL(prevTime) = x10::lang::RuntimeNatives::nanoTime();
}
org::scalegraph::util::StopWatch* org::scalegraph::util::StopWatch::_make(
  ) {
    org::scalegraph::util::StopWatch* this_ = new (memset(x10aux::alloc<org::scalegraph::util::StopWatch>(), 0, sizeof(org::scalegraph::util::StopWatch))) org::scalegraph::util::StopWatch();
    this_->_constructor();
    return this_;
}



//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::StopWatch::start() {
    
    //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(startTime) = this->FMGL(prevTime) = x10::lang::RuntimeNatives::nanoTime();
}

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::StopWatch::lap(x10::lang::String* message) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10LocalDecl_c
    x10_long curTime = x10::lang::RuntimeNatives::nanoTime();
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10LocalDecl_c
    x10_double lapTime = ((((x10_double) (((x10_long) ((curTime) - (this->
                                                                      FMGL(prevTime))))))) / (1000000.0));
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10LocalDecl_c
    x10_double elapsedTime = ((((x10_double) (((x10_long) ((curTime) - (this->
                                                                          FMGL(startTime))))))) / (1000000.0));
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(prevTime) = curTime;
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::println(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(message, x10aux::makeStringLit(": ")), lapTime), x10aux::makeStringLit(" ms: ")), elapsedTime), x10aux::makeStringLit(" ms elapsed: Memory: ")), ((((x10_double) (org::scalegraph::util::MemoryChunk<void>::getMemSize()))) / (1000000.0))), x10aux::makeStringLit(" MB"))));
}

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::StopWatch* org::scalegraph::util::StopWatch::org__scalegraph__util__StopWatch____this__org__scalegraph__util__StopWatch(
  ) {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::StopWatch::__fieldInitializers85281() {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(startTime) = ((x10_long)0ll);
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/StopWatch.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(prevTime) = ((x10_long)0ll);
}
const x10aux::serialization_id_t org::scalegraph::util::StopWatch::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::StopWatch::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::StopWatch::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(startTime));
    buf.write(this->FMGL(prevTime));
    
}

x10::lang::Reference* org::scalegraph::util::StopWatch::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::StopWatch* this_ = new (memset(x10aux::alloc<org::scalegraph::util::StopWatch>(), 0, sizeof(org::scalegraph::util::StopWatch))) org::scalegraph::util::StopWatch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::StopWatch::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(startTime) = buf.read<x10_long>();
    FMGL(prevTime) = buf.read<x10_long>();
}

x10aux::RuntimeType org::scalegraph::util::StopWatch::rtt;
void org::scalegraph::util::StopWatch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.StopWatch",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of StopWatch */
/*************************************************/

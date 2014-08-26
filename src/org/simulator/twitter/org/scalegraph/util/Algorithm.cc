/*************************************************/
/* START of Algorithm */
#include <org/scalegraph/util/Algorithm.h>


//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Algorithm* org::scalegraph::util::Algorithm::org__scalegraph__util__Algorithm____this__org__scalegraph__util__Algorithm(
  ) {
    
    //#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Algorithm::_constructor() {
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": polyglot.ast.Empty_c
    ;
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Algorithm.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::util::Algorithm* org::scalegraph::util::Algorithm::_make(
  ) {
    org::scalegraph::util::Algorithm* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Algorithm>(), 0, sizeof(org::scalegraph::util::Algorithm))) org::scalegraph::util::Algorithm();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::util::Algorithm::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::Algorithm::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::Algorithm::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::util::Algorithm::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::Algorithm* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Algorithm>(), 0, sizeof(org::scalegraph::util::Algorithm))) org::scalegraph::util::Algorithm();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::Algorithm::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::util::Algorithm::rtt;
void org::scalegraph::util::Algorithm::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.Algorithm",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Algorithm */
/*************************************************/

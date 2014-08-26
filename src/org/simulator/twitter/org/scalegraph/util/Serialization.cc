/*************************************************/
/* START of Serialization */
#include <org/scalegraph/util/Serialization.h>


//#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c

//#line 16 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Serialization* org::scalegraph::util::Serialization::org__scalegraph__util__Serialization____this__org__scalegraph__util__Serialization(
  ) {
    
    //#line 16 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 16 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Serialization::_constructor() {
    
    //#line 16 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Empty_c
    ;
    
    //#line 16 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::util::Serialization* org::scalegraph::util::Serialization::_make(
  ) {
    org::scalegraph::util::Serialization* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Serialization>(), 0, sizeof(org::scalegraph::util::Serialization))) org::scalegraph::util::Serialization();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::util::Serialization::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::Serialization::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::Serialization::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::util::Serialization::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::Serialization* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Serialization>(), 0, sizeof(org::scalegraph::util::Serialization))) org::scalegraph::util::Serialization();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::Serialization::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::util::Serialization::rtt;
void org::scalegraph::util::Serialization::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.Serialization",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Serialization */
/*************************************************/

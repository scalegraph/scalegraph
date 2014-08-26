/*************************************************/
/* START of VectorHeader */
#include <org/scalegraph/io/VectorHeader.h>


//#line 14 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/VectorHeader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::VectorHeader* org::scalegraph::io::VectorHeader::org__scalegraph__io__VectorHeader____this__org__scalegraph__io__VectorHeader(
  ) {
    
    //#line 14 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/VectorHeader.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 14 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/VectorHeader.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::VectorHeader::_constructor() {
    
    //#line 14 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/VectorHeader.x10": polyglot.ast.Empty_c
    ;
    
    //#line 14 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/VectorHeader.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::VectorHeader* org::scalegraph::io::VectorHeader::_make(
  ) {
    org::scalegraph::io::VectorHeader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::VectorHeader>(), 0, sizeof(org::scalegraph::io::VectorHeader))) org::scalegraph::io::VectorHeader();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::io::VectorHeader::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::VectorHeader::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::VectorHeader::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::io::VectorHeader::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::VectorHeader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::VectorHeader>(), 0, sizeof(org::scalegraph::io::VectorHeader))) org::scalegraph::io::VectorHeader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::VectorHeader::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::io::VectorHeader::rtt;
void org::scalegraph::io::VectorHeader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.VectorHeader",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of VectorHeader */
/*************************************************/

/*************************************************/
/* START of MatrixHeader */
#include <org/scalegraph/io/MatrixHeader.h>


//#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/MatrixHeader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::MatrixHeader* org::scalegraph::io::MatrixHeader::org__scalegraph__io__MatrixHeader____this__org__scalegraph__io__MatrixHeader(
  ) {
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/MatrixHeader.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/MatrixHeader.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::MatrixHeader::_constructor() {
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/MatrixHeader.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::MatrixHeader* org::scalegraph::io::MatrixHeader::_make(
  ) {
    org::scalegraph::io::MatrixHeader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::MatrixHeader>(), 0, sizeof(org::scalegraph::io::MatrixHeader))) org::scalegraph::io::MatrixHeader();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::io::MatrixHeader::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::MatrixHeader::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::MatrixHeader::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::io::MatrixHeader::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::MatrixHeader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::MatrixHeader>(), 0, sizeof(org::scalegraph::io::MatrixHeader))) org::scalegraph::io::MatrixHeader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::MatrixHeader::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::io::MatrixHeader::rtt;
void org::scalegraph::io::MatrixHeader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.MatrixHeader",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of MatrixHeader */
/*************************************************/

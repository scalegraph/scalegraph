/*************************************************/
/* START of Utils */
#include <org/scalegraph/util/Utils.h>


//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Utils::ensureOnFirst() {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->FMGL(id),
                                ((x10_int)0)))) {
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::BadPlaceException::_make(x10aux::makeStringLit("Here is not the first place."))));
    }
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Utils::debugPrintln(x10::lang::String* pkg, x10::lang::String* str) {
 
}

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10MethodDecl_c

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Utils* org::scalegraph::util::Utils::org__scalegraph__util__Utils____this__org__scalegraph__util__Utils(
  ) {
    
    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Utils::_constructor() {
    
    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::util::Utils* org::scalegraph::util::Utils::_make(
  ) {
    org::scalegraph::util::Utils* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Utils>(), 0, sizeof(org::scalegraph::util::Utils))) org::scalegraph::util::Utils();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::util::Utils::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::Utils::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::Utils::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::util::Utils::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::Utils* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Utils>(), 0, sizeof(org::scalegraph::util::Utils))) org::scalegraph::util::Utils();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::Utils::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::util::Utils::rtt;
void org::scalegraph::util::Utils::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.Utils",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Utils */
/*************************************************/

/*************************************************/
/* START of GraphHeader */
#include <org/scalegraph/io/GraphHeader.h>

#include <x10/lang/Long.h>
#include <x10/lang/Int.h>

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10FieldDecl_c

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10FieldDecl_c

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10FieldDecl_c

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10FieldDecl_c

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::GraphHeader::_constructor(x10_long numVertexes,
                                                    x10_long numEdges, x10_int numVertexAttributes,
                                                    x10_int numEdgeAttributes) {
    
    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.AssignPropertyCall_c
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::GraphHeader* this137888 = this;
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this137888)->FMGL(numVertexes) = ((x10_long)0ll);
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this137888)->FMGL(numEdges) = ((x10_long)0ll);
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this137888)->FMGL(numVertexAttributes) = ((x10_int)0);
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this137888)->FMGL(numEdgeAttributes) = ((x10_int)0);
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numVertexes) = numVertexes;
    
    //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numEdges) = numEdges;
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numVertexAttributes) = numVertexAttributes;
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numEdgeAttributes) = numEdgeAttributes;
}
org::scalegraph::io::GraphHeader* org::scalegraph::io::GraphHeader::_make(
  x10_long numVertexes, x10_long numEdges, x10_int numVertexAttributes,
  x10_int numEdgeAttributes) {
    org::scalegraph::io::GraphHeader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::GraphHeader>(), 0, sizeof(org::scalegraph::io::GraphHeader))) org::scalegraph::io::GraphHeader();
    this_->_constructor(numVertexes, numEdges, numVertexAttributes,
    numEdgeAttributes);
    return this_;
}



//#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::GraphHeader* org::scalegraph::io::GraphHeader::org__scalegraph__io__GraphHeader____this__org__scalegraph__io__GraphHeader(
  ) {
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::GraphHeader::__fieldInitializers137884(
  ) {
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numVertexes) = ((x10_long)0ll);
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numEdges) = ((x10_long)0ll);
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numVertexAttributes) = ((x10_int)0);
    
    //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/GraphHeader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numEdgeAttributes) = ((x10_int)0);
}
const x10aux::serialization_id_t org::scalegraph::io::GraphHeader::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::GraphHeader::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::GraphHeader::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(numVertexes));
    buf.write(this->FMGL(numEdges));
    buf.write(this->FMGL(numVertexAttributes));
    buf.write(this->FMGL(numEdgeAttributes));
    
}

x10::lang::Reference* org::scalegraph::io::GraphHeader::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::GraphHeader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::GraphHeader>(), 0, sizeof(org::scalegraph::io::GraphHeader))) org::scalegraph::io::GraphHeader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::GraphHeader::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(numVertexes) = buf.read<x10_long>();
    FMGL(numEdges) = buf.read<x10_long>();
    FMGL(numVertexAttributes) = buf.read<x10_int>();
    FMGL(numEdgeAttributes) = buf.read<x10_int>();
}

x10aux::RuntimeType org::scalegraph::io::GraphHeader::rtt;
void org::scalegraph::io::GraphHeader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.GraphHeader",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of GraphHeader */
/*************************************************/

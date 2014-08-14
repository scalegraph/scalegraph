/*************************************************/
/* START of CSV */
#include <org/scalegraph/io/CSV.h>

#include <org/scalegraph/util/SString.h>
#include <x10/array/Array.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/io/NamedDistData.h>
#include <org/scalegraph/io/impl/CSVReader.h>
#include <org/scalegraph/Config.h>
#include <x10/util/Team.h>
#include <x10/lang/String.h>
#include <org/scalegraph/io/impl/CSVWriter.h>

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::NamedDistData* org::scalegraph::io::CSV::read(org::scalegraph::util::SString path,
                                                                   x10::array::Array<x10_int>* columnDef,
                                                                   x10_boolean includeHeader) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10Return_c
    return org::scalegraph::io::impl::CSVReader::read(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                      path,
                                                      columnDef,
                                                      x10aux::class_cast_unchecked<x10::array::Array<x10::lang::String*>*>(X10_NULL),
                                                      includeHeader);
    
}

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::NamedDistData* org::scalegraph::io::CSV::read(
  org::scalegraph::util::SString path, x10::array::Array<x10_int>* columnDef,
  x10::array::Array<x10::lang::String*>* columnNames) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10Return_c
    return org::scalegraph::io::impl::CSVReader::read(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                      path,
                                                      columnDef,
                                                      columnNames,
                                                      false);
    
}

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::CSV::write(org::scalegraph::util::SString path,
                                     org::scalegraph::io::NamedDistData* data,
                                     x10_boolean setNumFlag) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::io::impl::CSVWriter::write(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                path, data,
                                                setNumFlag);
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::CSV* org::scalegraph::io::CSV::org__scalegraph__io__CSV____this__org__scalegraph__io__CSV(
  ) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::CSV::_constructor() {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/CSV.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::CSV* org::scalegraph::io::CSV::_make(
  ) {
    org::scalegraph::io::CSV* this_ = new (memset(x10aux::alloc<org::scalegraph::io::CSV>(), 0, sizeof(org::scalegraph::io::CSV))) org::scalegraph::io::CSV();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::io::CSV::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::CSV::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::CSV::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::io::CSV::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::CSV* this_ = new (memset(x10aux::alloc<org::scalegraph::io::CSV>(), 0, sizeof(org::scalegraph::io::CSV))) org::scalegraph::io::CSV();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::CSV::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::io::CSV::rtt;
void org::scalegraph::io::CSV::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.CSV",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CSV */
/*************************************************/

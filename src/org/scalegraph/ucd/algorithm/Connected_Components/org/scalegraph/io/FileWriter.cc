/*************************************************/
/* START of FileWriter */
#include <org/scalegraph/io/FileWriter.h>

#include <org/scalegraph/io/NativeFile.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Byte.h>

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10FieldDecl_c

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10FieldDecl_c

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::FileWriter::_constructor(org::scalegraph::util::SString path,
                                                   x10_int fileMode) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.AssignPropertyCall_c
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileWriter* this136278 = this;
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this136278)->FMGL(fileOffset) = ((x10_long)0ll);
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(nf) = org::scalegraph::io::NativeFile::_make(path,
                                                            fileMode,
                                                            ((x10_int)1));
    
    //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
}
org::scalegraph::io::FileWriter* org::scalegraph::io::FileWriter::_make(
  org::scalegraph::util::SString path, x10_int fileMode) {
    org::scalegraph::io::FileWriter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::FileWriter>(), 0, sizeof(org::scalegraph::io::FileWriter))) org::scalegraph::io::FileWriter();
    this_->_constructor(path, fileMode);
    return this_;
}



//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileWriter::reset() {
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10Call_c
    this->FMGL(nf)->org::scalegraph::io::NativeFile::seek(((x10_long)0ll),
                                                          0);
}

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileWriter::skip(x10_long n) {
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileWriter* x136279 = this;
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10LocalDecl_c
    x10_long y136280 = n;
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x136279)->FMGL(fileOffset) = ((x10_long) ((x10aux::nullCheck(x136279)->
                                                                   FMGL(fileOffset)) + (y136280)));
    
    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10Call_c
    this->FMGL(nf)->org::scalegraph::io::NativeFile::seek(
      n, 1);
}

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileWriter::close() {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10Call_c
    this->FMGL(nf)->org::scalegraph::io::NativeFile::close();
}

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::io::FileWriter::currentOffset() {
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10Return_c
    return this->FMGL(fileOffset);
    
}

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileWriter::write(org::scalegraph::util::MemoryChunk<x10_byte> b) {
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10Call_c
    this->FMGL(nf)->org::scalegraph::io::NativeFile::write(
      b);
}

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileWriter* org::scalegraph::io::FileWriter::org__scalegraph__io__FileWriter____this__org__scalegraph__io__FileWriter(
  ) {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileWriter::__fieldInitializers132357(
  ) {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
}
const x10aux::serialization_id_t org::scalegraph::io::FileWriter::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::FileWriter::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::FileWriter::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(fileOffset));
    
}

x10::lang::Reference* org::scalegraph::io::FileWriter::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::FileWriter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::FileWriter>(), 0, sizeof(org::scalegraph::io::FileWriter))) org::scalegraph::io::FileWriter();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::FileWriter::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(fileOffset) = buf.read<x10_long>();
}

x10aux::RuntimeType org::scalegraph::io::FileWriter::rtt;
void org::scalegraph::io::FileWriter::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.FileWriter",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of FileWriter */
/*************************************************/

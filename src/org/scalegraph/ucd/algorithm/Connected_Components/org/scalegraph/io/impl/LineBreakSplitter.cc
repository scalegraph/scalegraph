/*************************************************/
/* START of LineBreakSplitter */
#include <org/scalegraph/io/impl/LineBreakSplitter.h>

#include <org/scalegraph/io/impl/InputSplitter.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Native.h>
#include <org/scalegraph/io/FileReader.h>
#include <org/scalegraph/util/SString.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10MethodDecl_c

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::io::impl::LineBreakSplitter::nextBreak(org::scalegraph::util::MemoryChunk<x10_byte> data,
                                                                 x10_long offset) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10Return_c
    return org::scalegraph::io::impl::LineNextBreak(data, offset);
    
}

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_byte> org::scalegraph::io::impl::LineBreakSplitter::nextBreak(
  org::scalegraph::io::FileReader* reader) {
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString this133018 = x10aux::nullCheck(reader)->org::scalegraph::io::FileReader::fastReadLine();
        this133018->FMGL(content);
    }))
    ;
    
}

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::LineBreakSplitter* org::scalegraph::io::impl::LineBreakSplitter::org__scalegraph__io__impl__LineBreakSplitter____this__org__scalegraph__io__impl__LineBreakSplitter(
  ) {
    
    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::LineBreakSplitter::_constructor(
  ) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::InputSplitter* this133021 =
      this;
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/LineBreakSplitter.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::impl::LineBreakSplitter* org::scalegraph::io::impl::LineBreakSplitter::_make(
  ) {
    org::scalegraph::io::impl::LineBreakSplitter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::LineBreakSplitter>(), 0, sizeof(org::scalegraph::io::impl::LineBreakSplitter))) org::scalegraph::io::impl::LineBreakSplitter();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::io::impl::LineBreakSplitter::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::LineBreakSplitter::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::LineBreakSplitter::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::InputSplitter::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::io::impl::LineBreakSplitter::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::LineBreakSplitter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::LineBreakSplitter>(), 0, sizeof(org::scalegraph::io::impl::LineBreakSplitter))) org::scalegraph::io::impl::LineBreakSplitter();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::LineBreakSplitter::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::InputSplitter::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::io::impl::LineBreakSplitter::rtt;
void org::scalegraph::io::impl::LineBreakSplitter::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::InputSplitter>()};
    rtt.initStageTwo("org.scalegraph.io.impl.LineBreakSplitter",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of LineBreakSplitter */
/*************************************************/

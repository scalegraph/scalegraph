#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

template<class TPMGL(T)> class CSVAttributeHandler__ChunkBuffer;
template <> class CSVAttributeHandler__ChunkBuffer<void>;
template<class TPMGL(T)> class CSVAttributeHandler__ChunkBuffer : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* FMGL(buf);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(chunkSize);
    
    x10_long FMGL(offset);
    
    virtual org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>*
      org__scalegraph__io__impl__CSVAttributeHandler__ChunkBuffer____this__org__scalegraph__io__impl__CSVAttributeHandler__ChunkBuffer(
      );
    void _constructor();
    
    static org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* _make(
             );
    
    virtual void __fieldInitializers132064();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.io.impl.CSVAttributeHandler.ChunkBuffer";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class CSVAttributeHandler__ChunkBuffer<void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
template<class TPMGL(T)> class CSVAttributeHandler__ChunkBuffer;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_GENERICS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_IMPLEMENTATION
#include <org/scalegraph/io/impl/CSVAttributeHandler__ChunkBuffer.h>


//#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10FieldDecl_c

//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10FieldDecl_c

//#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10FieldDecl_c

//#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>*
  org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::org__scalegraph__io__impl__CSVAttributeHandler__ChunkBuffer____this__org__scalegraph__io__impl__CSVAttributeHandler__ChunkBuffer(
  ) {
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.AssignPropertyCall_c
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* this133610 =
      this;
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this133610)->FMGL(buf) = (x10aux::class_cast_unchecked<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>(X10_NULL));
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this133610)->FMGL(chunkSize) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this133610)->FMGL(offset) = ((x10_long)0ll);
}
template<class TPMGL(T)> org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_make(
                           ) {
    org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>))) org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::__fieldInitializers132064(
  ) {
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(buf) = (x10aux::class_cast_unchecked<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>(X10_NULL));
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(chunkSize) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offset) = ((x10_long)0ll);
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(buf));
    buf.write(this->FMGL(chunkSize));
    buf.write(this->FMGL(offset));
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>))) org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(buf) = buf.read<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>();
    FMGL(chunkSize) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(offset) = buf.read<x10_long>();
}

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CHUNKBUFFER_H_NODEPS

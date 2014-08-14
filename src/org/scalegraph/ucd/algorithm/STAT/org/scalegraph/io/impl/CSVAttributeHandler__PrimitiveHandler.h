#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_NODEPS
#include <org/scalegraph/io/impl/CSVAttributeHandler__BaseHandler.h>
#undef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVAttributeHandler;
} } } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryPointer;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

template<class TPMGL(T)> class CSVAttributeHandler__PrimitiveHandler;
template <> class CSVAttributeHandler__PrimitiveHandler<void>;
template<class TPMGL(T)> class CSVAttributeHandler__PrimitiveHandler : public org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_int typeId, x10_boolean doubleQuoated);
    
    static org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>* _make(
             x10_int typeId, x10_boolean doubleQuoated);
    
    virtual void parseElements(x10_byte * * elemPtrs, x10_int lines,
                               x10::lang::Any* outBuf);
    virtual org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>*
      org__scalegraph__io__impl__CSVAttributeHandler__PrimitiveHandler____this__org__scalegraph__io__impl__CSVAttributeHandler__PrimitiveHandler(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)> >()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.io.impl.CSVAttributeHandler.PrimitiveHandler";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class CSVAttributeHandler__PrimitiveHandler<void> : public org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<void>
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
template<class TPMGL(T)> class CSVAttributeHandler__PrimitiveHandler;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_NODEPS
#include <org/scalegraph/io/impl/CSVAttributeHandler__BaseHandler.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>
#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/lang/Byte.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Any.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_GENERICS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_IMPLEMENTATION
#include <org/scalegraph/io/impl/CSVAttributeHandler__PrimitiveHandler.h>


//#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_constructor(
                           x10_int typeId, x10_boolean doubleQuoated) {
    
    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>* this128556 =
      this;
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_int typeId128557 = typeId;
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_boolean doubleQuoated128558 = doubleQuoated;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_int typeId128554 = typeId128557;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_boolean doubleQuoated128555 = doubleQuoated128558;
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this128556)->FMGL(typeId) = typeId128554;
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this128556)->FMGL(doubleQuoated) = doubleQuoated128555;
    
    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.AssignPropertyCall_c
    
}
template<class TPMGL(T)> org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>* org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_make(
                           x10_int typeId, x10_boolean doubleQuoated)
{
    org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>();
    this_->_constructor(typeId, doubleQuoated);
    return this_;
}



//#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c

//#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::parseElements(
  x10_byte * * elemPtrs, x10_int lines, x10::lang::Any* outBuf) {
    
    //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* typedOutBuf =
      x10aux::class_cast<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>(outBuf);
    
    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::io::impl::CSVParseElements<TPMGL(T) >(elemPtrs, lines, typedOutBuf);
}

//#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>*
  org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::org__scalegraph__io__impl__CSVAttributeHandler__PrimitiveHandler____this__org__scalegraph__io__impl__CSVAttributeHandler__PrimitiveHandler(
  ) {
    
    //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return this;
    
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_serialize_body(buf);
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_deserialize_body(buf);
    
}

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__PRIMITIVEHANDLER_H_NODEPS

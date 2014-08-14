#ifndef __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H
#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T)> class MemoryChunk__Distributor;
template <> class MemoryChunk__Distributor<void>;
template<class TPMGL(T)> class MemoryChunk__Distributor : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::MemoryChunk<TPMGL(T)> FMGL(outer);
    
    x10_long FMGL(offset);
    
    void _constructor(org::scalegraph::util::MemoryChunk<TPMGL(T)> outer);
    
    static org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* _make(
             org::scalegraph::util::MemoryChunk<TPMGL(T)> outer);
    
    virtual org::scalegraph::util::MemoryChunk<TPMGL(T)> next(x10_long size);
    virtual org::scalegraph::util::MemoryChunk<TPMGL(T)> next(x10_int size);
    virtual x10_long remain();
    virtual void checkFinish();
    virtual org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>*
      org__scalegraph__util__MemoryChunk__Distributor____this__org__scalegraph__util__MemoryChunk__Distributor(
      );
    virtual void __fieldInitializers51734();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::MemoryChunk__Distributor<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.MemoryChunk.Distributor";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class MemoryChunk__Distributor<void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk__Distributor;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_IMPLEMENTATION
#include <org/scalegraph/util/MemoryChunk__Distributor.h>


//#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10FieldDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10FieldDecl_c

//#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> outer) {
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* this82390 =
      this;
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this82390)->FMGL(offset) = ((x10_long) (((x10_int)0)));
    
    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(outer) = outer;
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_make(
                           org::scalegraph::util::MemoryChunk<TPMGL(T)> outer)
{
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>))) org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>();
    this_->_constructor(outer);
    return this_;
}



//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::next(
  x10_long size) {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> mc = this->
                                                        FMGL(outer)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                                        this->
                                                          FMGL(offset),
                                                        size);
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* x82391 =
      this;
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long y82392 = size;
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x82391)->FMGL(offset) = ((x10_long) ((x10aux::nullCheck(x82391)->
                                                              FMGL(offset)) + (y82392)));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return mc;
    
}

//#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::next(
  x10_int size) {
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> mc = this->
                                                        FMGL(outer)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
                                                        this->
                                                          FMGL(offset),
                                                        ((x10_long) (size)));
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* x82393 =
      this;
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_int y82394 = size;
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x82393)->FMGL(offset) = ((x10_long) ((x10aux::nullCheck(x82393)->
                                                              FMGL(offset)) + (((x10_long) (y82394)))));
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return mc;
    
}

//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::remain(
  ) {
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((x10_long) (((__extension__ ({
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> this80271 =
          this->FMGL(outer);
        this80271->FMGL(data)->FMGL(size);
    }))
    ) - (this->FMGL(offset))));
    
}

//#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::checkFinish(
  ) {
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(this->FMGL(offset), (__extension__ ({
                                    
                                    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::util::MemoryChunk<TPMGL(T)> this80272 =
                                      this->FMGL(outer);
                                    this80272->FMGL(data)->
                                      FMGL(size);
                                }))
                                ))) {
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("Out of bounds. Please, check the offset and the size."))));
    }
    
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>*
  org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::org__scalegraph__util__MemoryChunk__Distributor____this__org__scalegraph__util__MemoryChunk__Distributor(
  ) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::__fieldInitializers51734(
  ) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offset) = ((x10_long) (((x10_int)0)));
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(outer));
    buf.write(this->FMGL(offset));
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>))) org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(outer) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
    FMGL(offset) = buf.read<x10_long>();
}

#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__DISTRIBUTOR_H_NODEPS

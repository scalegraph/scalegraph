#ifndef __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H
#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#include <org/scalegraph/util/MemoryChunkData.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#include <org/scalegraph/util/MemoryChunkData.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T)> class MemoryChunk__MCIterator;
template <> class MemoryChunk__MCIterator<void>;
template<class TPMGL(T)> class MemoryChunk__MCIterator : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static x10aux::itable_entry _itables[3];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename x10::lang::Iterator<TPMGL(T)>::template itable<org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)> > _itable_0;
    
    static x10::lang::Any::itable<org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)> > _itable_1;
    
    org::scalegraph::util::MCData_Impl<TPMGL(T) > FMGL(data);
    
    x10_long FMGL(cur);
    
    void _constructor(org::scalegraph::util::MCData_Impl<TPMGL(T) > data);
    
    static org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>* _make(
             org::scalegraph::util::MCData_Impl<TPMGL(T) > data);
    
    virtual x10_boolean hasNext();
    virtual TPMGL(T) next();
    virtual org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>*
      org__scalegraph__util__MemoryChunk__MCIterator____this__org__scalegraph__util__MemoryChunk__MCIterator(
      );
    virtual void __fieldInitializers51501();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::MemoryChunk__MCIterator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Iterator<TPMGL(T)> >()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.MemoryChunk.MCIterator";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class MemoryChunk__MCIterator<void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk__MCIterator;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_IMPLEMENTATION
#include <org/scalegraph/util/MemoryChunk__MCIterator.h>

template<class TPMGL(T)> typename x10::lang::Iterator<TPMGL(T)>::template itable<org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)> >  org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_itable_0(&org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::equals, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::hasNext, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::hashCode, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::next, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::toString, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)> >  org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_itable_1(&org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::equals, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::hashCode, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::toString, &org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<TPMGL(T)> >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)> >())};

//#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10FieldDecl_c

//#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10FieldDecl_c

//#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MCData_Impl<TPMGL(T) > data) {
    
    //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>* this81513 =
      this;
    
    //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this81513)->FMGL(cur) = ((x10_long)0ll);
    
    //#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(data) = data;
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>* org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_make(
                           org::scalegraph::util::MCData_Impl<TPMGL(T) > data)
{
    org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>))) org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>();
    this_->_constructor(data);
    return this_;
}



//#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::hasNext(
  ) {
    
    //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((this->FMGL(cur)) < (this->FMGL(data)->FMGL(size)));
    
}

//#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::next(
  ) {
    
    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (this->FMGL(data))[((x10_long) (((__extension__ ({
        
        //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>* x80603 =
          this;
        
        //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
        ;
        x10aux::nullCheck(x80603)->FMGL(cur) = ((x10_long) ((x10aux::nullCheck(x80603)->
                                                               FMGL(cur)) + (((x10_long)1ll))));
    }))
    ) - (((x10_long)1ll))))];
    
}

//#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>*
  org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::org__scalegraph__util__MemoryChunk__MCIterator____this__org__scalegraph__util__MemoryChunk__MCIterator(
  ) {
    
    //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::__fieldInitializers51501(
  ) {
    
    //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(cur) = ((x10_long)0ll);
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(data));
    buf.write(this->FMGL(cur));
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>))) org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(data) = buf.read<org::scalegraph::util::MCData_Impl<TPMGL(T) > >();
    FMGL(cur) = buf.read<x10_long>();
}

#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__MCITERATOR_H_NODEPS

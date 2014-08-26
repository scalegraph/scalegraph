#ifndef __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H
#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#include <org/scalegraph/util/MemoryChunkData.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#include <org/scalegraph/util/MemoryChunkData.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryPointer;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData__Pointer;
} } } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk__Distributor;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk__MCIterator;
} } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T)> class MemoryChunk   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::MemoryChunk<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[3];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::MemoryChunk<TPMGL(T)> > _itable_0;
    
    static typename x10::lang::Iterable<TPMGL(T)>::template itable<org::scalegraph::util::MemoryChunk<TPMGL(T)> > _itable_1;
    
    static x10aux::itable_entry _iboxitables[3];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::MemoryChunk<TPMGL(T)> _alloc(){org::scalegraph::util::MemoryChunk<TPMGL(T)> t; return t; }
    
    org::scalegraph::util::MCData_Impl<TPMGL(T) > FMGL(data);
    
    void _constructor(x10_long size, x10_int alignment, x10_boolean zeroed,
                      x10_byte * filename, x10_int num);
    
    static org::scalegraph::util::MemoryChunk<TPMGL(T)> _make(x10_long size,
                                                              x10_int alignment,
                                                              x10_boolean zeroed,
                                                              x10_byte * filename,
                                                              x10_int num);
    
    void _constructor(x10_long size, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init,
                      x10_byte * filename, x10_int num);
    
    static org::scalegraph::util::MemoryChunk<TPMGL(T)> _make(
             x10_long size, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init,
             x10_byte * filename, x10_int num);
    
    void _constructor(x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
                      x10_long offset, x10_long size);
    
    static org::scalegraph::util::MemoryChunk<TPMGL(T)> _make(
             x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
             x10_long offset, x10_long size);
    
    void _constructor(org::scalegraph::util::MCData_Impl<TPMGL(T) > data);
    
    static org::scalegraph::util::MemoryChunk<TPMGL(T)> _make(
             org::scalegraph::util::MCData_Impl<TPMGL(T) > data);
    
    void _constructor();
    
    static org::scalegraph::util::MemoryChunk<TPMGL(T)> _make(
             );
    
    void del();
    x10::lang::String* toString();
    org::scalegraph::util::MCData_Impl<TPMGL(T) > raw();
    typename org::scalegraph::util::MCData_Impl<TPMGL(T) >::ELEM*
      pointer();
    x10_long size();
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>*
      distributor();
    x10::lang::LongRange range();
    x10::lang::Iterator<TPMGL(T)>* iterator();
    x10::array::Array<TPMGL(T)>* toArray();
    org::scalegraph::util::MemoryChunk<TPMGL(T)> clone();
    org::scalegraph::util::MemoryChunk<TPMGL(T)> subpart(
      x10_long offset, x10_long size);
    TPMGL(T) __apply(x10_int index);
    TPMGL(T) __apply(x10_long index);
    TPMGL(T) __set(x10_int index, TPMGL(T) value);
    TPMGL(T) __set(x10_long index, TPMGL(T) value);
    void setUnchecked(x10_int index, TPMGL(T) value);
    void setUnchecked(x10_long index, TPMGL(T) value);
    TPMGL(T) getUnchecked(x10_int index);
    TPMGL(T) getUnchecked(x10_long index);
    TPMGL(T) atomicAdd(x10_long index, TPMGL(T) value);
    TPMGL(T) atomicOr(x10_long index, TPMGL(T) value);
    TPMGL(T) atomicAnd(x10_long index, TPMGL(T) value);
    TPMGL(T) atomicXor(x10_long index, TPMGL(T) value);
    x10_boolean atomicCAS(x10_long index, TPMGL(T) expect,
                          TPMGL(T) value);
    x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::MemoryChunk<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::MemoryChunk<TPMGL(T)> other);
    org::scalegraph::util::MemoryChunk<TPMGL(T)> org__scalegraph__util__MemoryChunk____this__org__scalegraph__util__MemoryChunk(
      );
    
    static void _serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::MemoryChunk<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::MemoryChunk<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::util::MemoryChunk<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::MemoryChunk<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[3] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Iterable<TPMGL(T)> >(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.MemoryChunk";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 3, parents, 1, params, variances);
}

template <> class MemoryChunk<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      make();
    
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc, x10_long offset,
           x10_long size);
    
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc, x10_int offset,
           x10_int size);
    
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc, x10_long offset);
    
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc, x10_int offset);
    
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc);
    
    template<class TPMGL(T)> static void copy(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                              x10_long srcIndex,
                                              org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                              x10_long dstIndex,
                                              x10_long numElems);
    
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      getNull();
    
    static x10_long getMemSize();
    
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Iterable.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/Native.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/lang/Math.h>
#include <org/scalegraph/util/MemoryChunkData__Pointer.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/MemoryChunk__Distributor.h>
#include <x10/lang/LongRange.h>
#include <x10/compiler/Inline.h>
#include <org/scalegraph/util/MemoryChunk__MCIterator.h>
#include <x10/array/Array.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_IMPLEMENTATION
#include <org/scalegraph/util/MemoryChunk.h>

#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_MemoryChunk__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, TPMGL(T)>::template itable <org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    TPMGL(T) __apply(x10_int i) {
        
        //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
        return (saved_this->FMGL(data))[i];
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_saved_this = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >(that_saved_this);
        return this_;
    }
    
    org_scalegraph_util_MemoryChunk__closure__1(org::scalegraph::util::MemoryChunk<TPMGL(T)> saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10:230";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_int, TPMGL(T)>::template itable <org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) > >org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >::__apply, &org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, TPMGL(T)> >, &org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK__CLOSURE__1_CLOSURE
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk_ibox0 : public x10::lang::IBox<org::scalegraph::util::MemoryChunk<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<MemoryChunk_ibox0<TPMGL(T)> > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class TPMGL(T)> x10::lang::Any::itable<MemoryChunk_ibox0<TPMGL(T)> >  MemoryChunk_ibox0<TPMGL(T)>::itable(&MemoryChunk_ibox0<TPMGL(T)>::equals, &MemoryChunk_ibox0<TPMGL(T)>::hashCode, &MemoryChunk_ibox0<TPMGL(T)>::toString, &MemoryChunk_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::util::MemoryChunk<TPMGL(T)> >  org::scalegraph::util::MemoryChunk<TPMGL(T)>::_itable_0(&org::scalegraph::util::MemoryChunk<TPMGL(T)>::equals, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::hashCode, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::toString, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::typeName);
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk_ibox1 : public x10::lang::IBox<org::scalegraph::util::MemoryChunk<TPMGL(T)> > {
public:
    static typename x10::lang::Iterable<TPMGL(T)>::template itable<MemoryChunk_ibox1<TPMGL(T)> > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::Iterator<TPMGL(T)>* iterator() {
        return this->value->iterator();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class TPMGL(T)> typename x10::lang::Iterable<TPMGL(T)>::template itable<MemoryChunk_ibox1<TPMGL(T)> >  MemoryChunk_ibox1<TPMGL(T)>::itable(&MemoryChunk_ibox1<TPMGL(T)>::equals, &MemoryChunk_ibox1<TPMGL(T)>::hashCode, &MemoryChunk_ibox1<TPMGL(T)>::iterator, &MemoryChunk_ibox1<TPMGL(T)>::toString, &MemoryChunk_ibox1<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> typename x10::lang::Iterable<TPMGL(T)>::template itable<org::scalegraph::util::MemoryChunk<TPMGL(T)> >  org::scalegraph::util::MemoryChunk<TPMGL(T)>::_itable_1(&org::scalegraph::util::MemoryChunk<TPMGL(T)>::equals, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::hashCode, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::iterator, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::toString, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::MemoryChunk<TPMGL(T)>::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<TPMGL(T)> >, &org::scalegraph::util::MemoryChunk<TPMGL(T)>::_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::MemoryChunk<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::MemoryChunk<TPMGL(T)>::_iboxitables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::MemoryChunk_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<TPMGL(T)> >, &org::scalegraph::util::MemoryChunk_ibox1<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::MemoryChunk<TPMGL(T)> >())};

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10FieldDecl_c

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_constructor(
                           x10_long size, x10_int alignment, x10_boolean zeroed,
                           x10_byte * filename, x10_int num) {
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
    ;
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(data) = org::scalegraph::util::MCData_Impl<TPMGL(T) >::_make(size, alignment, zeroed, (char*)filename, num);
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(
                           x10_long size, x10_int alignment,
                           x10_boolean zeroed, x10_byte * filename,
                           x10_int num) {
    org::scalegraph::util::MemoryChunk<TPMGL(T)> this_; 
    this_->_constructor(size, alignment, zeroed, filename,
    num);
    return this_;
}



//#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_constructor(
                           x10_long size, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init,
                           x10_byte * filename, x10_int num) {
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
    ;
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(data) = org::scalegraph::util::MCData_Impl<TPMGL(T) >::_make(size, ((x10_int)0), false, (char*)filename, num);
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long i41766min41791 = ((x10_long)0ll);
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long i41766max41792 = ((x10_long) ((size) - (((x10_long)1ll))));
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.For_c
    {
        x10_long i41793;
        for (
             //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
             i41793 = i41766min41791; ((i41793) <= (i41766max41792));
             
             //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
             i41793 = ((x10_long) ((i41793) + (((x10_long)1ll)))))
        {
            
            //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long i41794 = i41793;
            
            //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            ((*this)->FMGL(data)).set(i41794, x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(init), 
              i41794));
        }
    }
    
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(
                           x10_long size, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init,
                           x10_byte * filename, x10_int num)
{
    org::scalegraph::util::MemoryChunk<TPMGL(T)> this_; 
    this_->_constructor(size, init, filename, num);
    return this_;
}



//#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_constructor(
                           x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
                           x10_long offset, x10_long size) {
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
    ;
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
    if (((offset) < (((x10_long) (((x10_int)0))))) || ((((x10_long) ((offset) + (size)))) > (((x10_long) ((imc)->length())))))
    {
        
        //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("Out of bounds. Please, check the offset and the size."))));
    }
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(data) = org::scalegraph::util::MCData_Impl<TPMGL(T) >((imc)->raw() + (offset), (size), NULL);
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(
                           x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
                           x10_long offset, x10_long size)
{
    org::scalegraph::util::MemoryChunk<TPMGL(T)> this_; 
    this_->_constructor(imc, offset, size);
    return this_;
}



//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_constructor(
                           org::scalegraph::util::MCData_Impl<TPMGL(T) > data) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
    ;
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(data) = data;
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(
                           org::scalegraph::util::MCData_Impl<TPMGL(T) > data)
{
    org::scalegraph::util::MemoryChunk<TPMGL(T)> this_; 
    this_->_constructor(data);
    return this_;
}



//#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
    ;
    
    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(data) = org::scalegraph::util::MCData_Impl<TPMGL(T) >::_make(((x10_long)0ll), ((x10_int)0), false);
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(
                           ) {
    org::scalegraph::util::MemoryChunk<TPMGL(T)> this_; 
    this_->_constructor();
    return this_;
}



//#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::del(
  ) {
    
    //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    ((*this)->FMGL(data)).del();
}

//#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::MemoryChunk<TPMGL(T)>::toString(
  ) {
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10::util::StringBuilder* sb = x10::util::StringBuilder::_make();
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    sb->add(x10aux::makeStringLit("["));
    
    //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long sz = x10::lang::Math::min((*this)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                       ((x10_long)10ll));
    
    //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((((x10_long) (i))) < (sz));
             
             //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
             i = ((x10_int) ((i) + (((x10_int)1))))) {
            
            //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((i) > (((x10_int)0)))) {
                
                //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                sb->add(x10aux::makeStringLit(","));
            }
            
            //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            sb->add(x10::lang::String::__plus(x10aux::makeStringLit(""), ((*this)->
                                                                            FMGL(data))[i]));
        }
    }
    
    //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
    if (((sz) < ((*this)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        sb->add(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("...(omitted "), ((x10_long) (((*this)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) - (sz)))), x10aux::makeStringLit(" elements)")));
    }
    
    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    sb->add(x10aux::makeStringLit("]"));
    
    //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return sb->toString();
    
}

//#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MCData_Impl<TPMGL(T) >
  org::scalegraph::util::MemoryChunk<TPMGL(T)>::raw() {
    
    //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (*this)->FMGL(data);
    
}

//#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> typename org::scalegraph::util::MCData_Impl<TPMGL(T) >::ELEM*
  org::scalegraph::util::MemoryChunk<TPMGL(T)>::pointer() {
    {
        
        //#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
    }
    
    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data)).FMGL(pointer);
    
}

//#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(
  ) {
    
    //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (*this)->FMGL(data)->FMGL(size);
    
}

//#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>*
  org::scalegraph::util::MemoryChunk<TPMGL(T)>::distributor(
  ) {
    
    //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>::_make((*this));
    
}

//#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::LongRange org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(
  ) {
    
    //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) (((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size)) - (((x10_long)1ll)))));
    
}

//#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::Iterator<TPMGL(T)>* org::scalegraph::util::MemoryChunk<TPMGL(T)>::iterator(
  ) {
    
    //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::Iterator<TPMGL(T)>*>(org::scalegraph::util::MemoryChunk__MCIterator<TPMGL(T)>::_make((*this)->
                                                                                                                              FMGL(data)));
    
}

//#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::array::Array<TPMGL(T)>* org::scalegraph::util::MemoryChunk<TPMGL(T)>::toArray(
  ) {
    
    //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return x10::array::Array<TPMGL(T)>::_make(((x10_int) ((*this)->
                                                            FMGL(data)->
                                                            FMGL(size))),
                                              reinterpret_cast<x10::lang::Fun_0_1<x10_int, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, TPMGL(T)> >(sizeof(org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T)>)))org_scalegraph_util_MemoryChunk__closure__1<TPMGL(T)>((*this)))));
    
}

//#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<TPMGL(T)>::clone() {
    
    //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> ret = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make((*this)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      (*this), ((x10_long)0ll), ret, ((x10_long)0ll), (*this)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size());
    
    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ret;
    
}

//#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(x10_long offset,
                                                        x10_long size) {
    {
        
        //#line 246 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((offset) < (((x10_long) (((x10_int)0))))) ||
            ((((x10_long) ((offset) + (size)))) > ((*this)->
                                                     FMGL(data)->
                                                     FMGL(size))))
        {
            
            //#line 249 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(org::scalegraph::util::MCData_Impl<TPMGL(T) >(((*this)->
                                                                                                                FMGL(data)).FMGL(pointer) + (offset), (size), ((*this)->
                                                                                                                                                                 FMGL(data)).FMGL(memobj)));
    
}

//#line 257 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
  x10_int index) {
    {
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_int)0))) || ((((x10_long) (index))) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 264 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data))[index];
    
}

//#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
  x10_long index) {
    {
        
        //#line 272 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 274 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 277 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data))[index];
    
}

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
  x10_int index, TPMGL(T) value) {
    {
        
        //#line 285 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_int)0))) || ((((x10_long) (index))) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 288 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 290 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    ((*this)->FMGL(data)).set(index, value);
    
    //#line 291 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return value;
    
}

//#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
  x10_long index, TPMGL(T) value) {
    {
        
        //#line 299 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 300 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 302 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 304 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    ((*this)->FMGL(data)).set(index, value);
    
    //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return value;
    
}

//#line 308 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::setUnchecked(
  x10_int index, TPMGL(T) value) {
    
    //#line 308 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    ((*this)->FMGL(data)).set(index, value);
}

//#line 309 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::setUnchecked(
  x10_long index, TPMGL(T) value) {
    
    //#line 309 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    ((*this)->FMGL(data)).set(index, value);
}

//#line 311 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::getUnchecked(
  x10_int index) {
    
    //#line 311 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data))[index];
    
}

//#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::getUnchecked(
  x10_long index) {
    
    //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data))[index];
    
}

//#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::atomicAdd(
  x10_long index, TPMGL(T) value) {
    {
        
        //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 320 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 322 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data)).atomicAdd(index, value);
    
}

//#line 330 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::atomicOr(
  x10_long index, TPMGL(T) value) {
    {
        
        //#line 332 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 333 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 334 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 335 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data)).atomicOr(index, value);
    
}

//#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::atomicAnd(
  x10_long index, TPMGL(T) value) {
    {
        
        //#line 345 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 346 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 347 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 348 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 350 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data)).atomicAnd(index, value);
    
}

//#line 360 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::MemoryChunk<TPMGL(T)>::atomicXor(
  x10_long index, TPMGL(T) value) {
    {
        
        //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 364 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 365 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 367 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data)).atomicXor(index, value);
    
}

//#line 384 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::MemoryChunk<TPMGL(T)>::atomicCAS(
  x10_long index, TPMGL(T) expect, TPMGL(T) value) {
    {
        
        //#line 386 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!(((*this)->FMGL(data)).isValid())) {
            
            //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 388 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= ((*this)->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
        {
            
            //#line 389 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 391 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return ((*this)->FMGL(data)).atomicCAS(index, expect, value);
    
}

//#line 401 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 416 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 421 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 424 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::MemoryChunk<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::util::MemoryChunk<TPMGL(T)>::hashCode(
  ) {
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(data)->org::scalegraph::util::MCData_Impl<TPMGL(T) >::hashCode())));
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::MemoryChunk<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::MemoryChunk<TPMGL(T)> >(other)))
    {
        
        //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::equals(
             x10aux::class_cast<org::scalegraph::util::MemoryChunk<TPMGL(T)> >(other));
    
}

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::MemoryChunk<TPMGL(T)>::equals(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> other) {
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                         FMGL(data)));
    
}

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::MemoryChunk<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::MemoryChunk<TPMGL(T)> >(other)))
    {
        
        //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::MemoryChunk<TPMGL(T)> >(other));
    
}

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::MemoryChunk<TPMGL(T)>::_struct_equals(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> other) {
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                         FMGL(data)));
    
}

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<TPMGL(T)>::org__scalegraph__util__MemoryChunk____this__org__scalegraph__util__MemoryChunk(
  ) {
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(data));
    
}

template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(data) = buf.read<org::scalegraph::util::MCData_Impl<TPMGL(T) > >();
}


template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<void>::make() {
                                                       
                                                       //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
                                                       return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make();
                                                       
                                                   }
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<void>::make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
                                                 x10_long offset,
                                                 x10_long size)
{
    
    //#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(imc,
                                                               offset,
                                                               size);
    
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<void>::make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
                                                 x10_int offset,
                                                 x10_int size)
{
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(imc,
                                                               ((x10_long) (offset)),
                                                               ((x10_long) (size)));
    
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<void>::make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
                                                 x10_long offset)
{
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(imc,
                                                               offset,
                                                               ((x10_long) ((((x10_long) ((imc)->length()))) - (offset))));
    
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<void>::make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc,
                                                 x10_int offset)
{
    
    //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(imc,
                                                               ((x10_long) (offset)),
                                                               ((x10_long) (((x10_int) (((imc)->length()) - (offset))))));
    
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<void>::make(x10::util::IndexedMemoryChunk<TPMGL(T) > imc)
{
    
    //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make(imc,
                                                               ((x10_long)0ll),
                                                               ((x10_long) ((imc)->length())));
    
}
template<class TPMGL(T)> void org::scalegraph::util::MemoryChunk<void>::copy(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                                             x10_long srcIndex,
                                                                             org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                                             x10_long dstIndex,
                                                                             x10_long numElems)
{
    {
        
        //#line 404 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((src->FMGL(data)).isValid()) || !((dst->FMGL(data)).isValid()))
        {
            
            //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
        }
        
        //#line 406 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((numElems) < (((x10_long) (((x10_int)0))))) ||
            ((srcIndex) < (((x10_long) (((x10_int)0))))) ||
            ((dstIndex) < (((x10_long) (((x10_int)0))))))
        {
            
            //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
        }
        
        //#line 408 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) < (((x10_long) ((srcIndex) + (numElems))))) ||
            ((dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) < (((x10_long) ((dstIndex) + (numElems))))))
        {
            
            //#line 409 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("copy: out of range"))));
        }
        
    }
    
    //#line 411 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MCData_Impl<TPMGL(T) >::copy(src->
                                                          FMGL(data), srcIndex, dst->
                                                                                  FMGL(data), dstIndex, numElems);
}
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::MemoryChunk<void>::getNull() {
                                                          
                                                          //#line 416 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
                                                          return org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (((x10_int)0))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                                                          
                                                      }
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS

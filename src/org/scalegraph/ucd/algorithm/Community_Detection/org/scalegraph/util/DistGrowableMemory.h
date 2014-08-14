#ifndef __ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H
#define __ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T)> class DistGrowableMemory   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::DistGrowableMemory<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::DistGrowableMemory<TPMGL(T)> _alloc(){org::scalegraph::util::DistGrowableMemory<TPMGL(T)> t; return t; }
    
    x10::lang::PlaceLocalHandle<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>
      FMGL(plh);
    
    void _constructor(x10::array::PlaceGroup* placeGroup);
    
    static org::scalegraph::util::DistGrowableMemory<TPMGL(T)> _make(
             x10::array::PlaceGroup* placeGroup);
    
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* __apply();
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> raw(x10::array::PlaceGroup* placeGroup);
    void del();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::DistGrowableMemory<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::DistGrowableMemory<TPMGL(T)> other);
    org::scalegraph::util::DistGrowableMemory<TPMGL(T)> org__scalegraph__util__DistGrowableMemory____this__org__scalegraph__util__DistGrowableMemory(
      );
    
    static void _serialize(org::scalegraph::util::DistGrowableMemory<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::DistGrowableMemory<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::DistGrowableMemory<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::DistGrowableMemory<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.DistGrowableMemory";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class DistGrowableMemory<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistGrowableMemory;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_IMPLEMENTATION
#include <org/scalegraph/util/DistGrowableMemory.h>

#ifndef ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_DistGrowableMemory__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::template itable <org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* __apply() {
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<TPMGL(T)>* alloc125208 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>()))
            ;
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
            (alloc125208)->::org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
              ((x10_long)0ll));
            alloc125208;
        }))
        ;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_util_DistGrowableMemory__closure__1() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10:23";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::template itable <org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) > >org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >::__apply, &org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >, &org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_DistGrowableMemory__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply() {
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply())->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw();
        
    }
    
    // captured environment
    org::scalegraph::util::DistGrowableMemory<TPMGL(T)> saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistGrowableMemory<TPMGL(T)> that_saved_this = buf.read<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >();
        org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >(that_saved_this);
        return this_;
    }
    
    org_scalegraph_util_DistGrowableMemory__closure__2(org::scalegraph::util::DistGrowableMemory<TPMGL(T)> saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10:33";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) > >org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >::__apply, &org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY__CLOSURE__2_CLOSURE
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistGrowableMemory_ibox0 : public x10::lang::IBox<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<DistGrowableMemory_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> x10::lang::Any::itable<DistGrowableMemory_ibox0<TPMGL(T)> >  DistGrowableMemory_ibox0<TPMGL(T)>::itable(&DistGrowableMemory_ibox0<TPMGL(T)>::equals, &DistGrowableMemory_ibox0<TPMGL(T)>::hashCode, &DistGrowableMemory_ibox0<TPMGL(T)>::toString, &DistGrowableMemory_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >  org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_itable_0(&org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::equals, &org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::hashCode, &org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::toString, &org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::DistGrowableMemory_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >())};

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10FieldDecl_c

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_constructor(
                           x10::array::PlaceGroup* placeGroup) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.AssignPropertyCall_c
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(plh) = x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::util::GrowableMemory<TPMGL(T)>* >(
                           placeGroup, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >(sizeof(org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T)>)))org_scalegraph_util_DistGrowableMemory__closure__1<TPMGL(T)>())));
}
template<class TPMGL(T)> org::scalegraph::util::DistGrowableMemory<TPMGL(T)> org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_make(
                           x10::array::PlaceGroup* placeGroup)
{
    org::scalegraph::util::DistGrowableMemory<TPMGL(T)> this_; 
    this_->_constructor(placeGroup);
    return this_;
}



//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::GrowableMemory<TPMGL(T)>*
  org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::__apply(
  ) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return (*this)->FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply();
    
}

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::raw(
  x10::array::PlaceGroup* placeGroup) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> alloc125209 =
           org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_alloc();
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc125209)->::org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_constructor(
          placeGroup, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T)>)))org_scalegraph_util_DistGrowableMemory__closure__2<TPMGL(T)>((*this)))));
        alloc125209;
    }))
    ;
    
}

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::del(
  ) {
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply())->org::scalegraph::util::GrowableMemory<TPMGL(T)>::del();
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::toString(
  ) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.DistGrowableMemory:"), x10aux::makeStringLit(" plh=")), (*this)->
                                                                                                                                                                           FMGL(plh));
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::hashCode(
  ) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::hashCode())));
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >(other)))
    {
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistGrowableMemory<TPMGL(T)> this125212 =
          (*this);
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistGrowableMemory<TPMGL(T)> other125211 =
          x10aux::class_cast<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >(other);
        (x10aux::struct_equals(this125212->FMGL(plh), other125211->
                                                        FMGL(plh)));
    }))
    ;
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::equals(
  org::scalegraph::util::DistGrowableMemory<TPMGL(T)> other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(plh), other->
                                                        FMGL(plh)));
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >(other)))
    {
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistGrowableMemory<TPMGL(T)> this125214 =
          (*this);
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistGrowableMemory<TPMGL(T)> other125213 =
          x10aux::class_cast<org::scalegraph::util::DistGrowableMemory<TPMGL(T)> >(other);
        (x10aux::struct_equals(this125214->FMGL(plh), other125213->
                                                        FMGL(plh)));
    }))
    ;
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_struct_equals(
  org::scalegraph::util::DistGrowableMemory<TPMGL(T)> other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(plh), other->
                                                        FMGL(plh)));
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::DistGrowableMemory<TPMGL(T)>
  org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::org__scalegraph__util__DistGrowableMemory____this__org__scalegraph__util__DistGrowableMemory(
  ) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistGrowableMemory.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_serialize(org::scalegraph::util::DistGrowableMemory<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(plh));
    
}

template<class TPMGL(T)> void org::scalegraph::util::DistGrowableMemory<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(plh) = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >();
}


#endif // ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_DISTGROWABLEMEMORY_H_NODEPS

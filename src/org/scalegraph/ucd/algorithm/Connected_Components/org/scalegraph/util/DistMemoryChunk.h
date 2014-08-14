#ifndef __ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H
#define __ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H

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
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
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
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T)> class DistMemoryChunk   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::DistMemoryChunk<TPMGL(T)> _alloc(){org::scalegraph::util::DistMemoryChunk<TPMGL(T)> t; return t; }
    
    x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>
      FMGL(plh);
    
    void _constructor(x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> plh);
    
    static org::scalegraph::util::DistMemoryChunk<TPMGL(T)> _make(
             x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> plh);
    
    void _constructor(x10::array::PlaceGroup* placeGroup, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init);
    
    static org::scalegraph::util::DistMemoryChunk<TPMGL(T)> _make(
             x10::array::PlaceGroup* placeGroup, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init);
    
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply();
    void __set(org::scalegraph::util::MemoryChunk<TPMGL(T)> mc);
    void del();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> other);
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> org__scalegraph__util__DistMemoryChunk____this__org__scalegraph__util__DistMemoryChunk(
      );
    
    static void _serialize(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::DistMemoryChunk<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::DistMemoryChunk<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.DistMemoryChunk";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class DistMemoryChunk<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      make(x10::array::PlaceGroup* pg, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init);
    
    template<class TPMGL(T), class TPMGL(U)> static org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      make(x10::array::PlaceGroup* pg, x10::lang::Fun_0_1<x10_int, TPMGL(U)>* init_here,
           x10::lang::Fun_0_1<TPMGL(U), org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init_there);
    
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Cell.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Int.h>
#include <x10/lang/Zero.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_IMPLEMENTATION
#include <org/scalegraph/util/DistMemoryChunk.h>

#ifndef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_DistMemoryChunk__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::template itable <org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* __apply() {
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* alloc75264 =
               ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >()))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> x121471 =
              x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::__apply(x10aux::nullCheck(init));
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            alloc75264->FMGL(value) = x121471;
            alloc75264;
        }))
        ;
        
    }
    
    // captured environment
    x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->init);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* that_init = buf.read<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>();
        org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >(that_init);
        return this_;
    }
    
    org_scalegraph_util_DistMemoryChunk__closure__1(x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init) : init(init) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10:28";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::template itable <org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) > >org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >::__apply, &org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >, &org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_DistMemoryChunk__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::template itable <org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* __apply() {
        
        //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* alloc121474 =
               ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >()))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> x121472 =
              x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::__apply(x10aux::nullCheck(init));
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            alloc121474->FMGL(value) = x121472;
            alloc121474;
        }))
        ;
        
    }
    
    // captured environment
    x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->init);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* that_init = buf.read<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>();
        org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >(that_init);
        return this_;
    }
    
    org_scalegraph_util_DistMemoryChunk__closure__2(x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init) : init(init) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10:37";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::template itable <org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) > >org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >::__apply, &org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >, &org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T), class TPMGL(U)> class org_scalegraph_util_DistMemoryChunk__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<TPMGL(U), x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::template itable <org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* __apply(TPMGL(U) u121477) {
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* alloc121478 =
               ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >))) x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >()))
            ;
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> x121475 =
              x10::lang::Fun_0_1<TPMGL(U), org::scalegraph::util::MemoryChunk<TPMGL(T)> >::__apply(x10aux::nullCheck(init_there), 
              u121477);
            
            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            alloc121478->FMGL(value) = x121475;
            alloc121478;
        }))
        ;
        
    }
    
    // captured environment
    x10::lang::Fun_0_1<TPMGL(U), org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init_there;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->init_there);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        x10::lang::Fun_0_1<TPMGL(U), org::scalegraph::util::MemoryChunk<TPMGL(T)> >* that_init_there = buf.read<x10::lang::Fun_0_1<TPMGL(U), org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>();
        org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >* this_ = new (storage) org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >(that_init_there);
        return this_;
    }
    
    org_scalegraph_util_DistMemoryChunk__closure__3(x10::lang::Fun_0_1<TPMGL(U), org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init_there) : init_there(init_there) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<TPMGL(U), x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<TPMGL(U), x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10:46";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename x10::lang::Fun_0_1<TPMGL(U), x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::template itable <org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) > >org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >::__apply, &org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<TPMGL(U), x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >, &org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK__CLOSURE__3_CLOSURE
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk_ibox0 : public x10::lang::IBox<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<DistMemoryChunk_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> x10::lang::Any::itable<DistMemoryChunk_ibox0<TPMGL(T)> >  DistMemoryChunk_ibox0<TPMGL(T)>::itable(&DistMemoryChunk_ibox0<TPMGL(T)>::equals, &DistMemoryChunk_ibox0<TPMGL(T)>::hashCode, &DistMemoryChunk_ibox0<TPMGL(T)>::toString, &DistMemoryChunk_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >  org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_itable_0(&org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::equals, &org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::hashCode, &org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::toString, &org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::DistMemoryChunk_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >())};

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10FieldDecl_c

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_constructor(
                           x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> plh) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(plh) = plh;
}
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_make(
                           x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> plh)
{
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> this_; 
    this_->_constructor(plh);
    return this_;
}



//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_constructor(
                           x10::array::PlaceGroup* placeGroup,
                           x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init) {
    
    //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.AssignPropertyCall_c
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(plh) = x10::lang::PlaceLocalHandle<void>::template makeFlat<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* >(
                           placeGroup, reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(sizeof(org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T)>)))org_scalegraph_util_DistMemoryChunk__closure__1<TPMGL(T)>(init))));
}
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_make(
                           x10::array::PlaceGroup* placeGroup,
                           x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init)
{
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> this_; 
    this_->_constructor(placeGroup, init);
    return this_;
}



//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply(
  ) {
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* this121452 =
          (*this)->FMGL(plh)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::__apply();
        x10aux::nullCheck(this121452)->FMGL(value);
    }))
    ;
    
}

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__set(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> mc) {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* this121481 =
      (*this)->FMGL(plh)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::__apply();
    
    //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> x121482 =
      mc;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> x121479 =
      x121482;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> ret121480;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121481)->FMGL(value) = x121479;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
    ret121480 = x121479;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
    ret121480;
}

//#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::del(
  ) {
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* this121485 =
      (*this)->FMGL(plh)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::__apply();
    
    //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> x121486 =
      x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> x121483 =
      x121486;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> ret121484;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121485)->FMGL(value) = x121483;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
    ret121484 = x121483;
    
    //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
    ret121484;
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::toString(
  ) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.DistMemoryChunk:"), x10aux::makeStringLit(" plh=")), (*this)->
                                                                                                                                                                        FMGL(plh));
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::hashCode(
  ) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(plh)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>::hashCode())));
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(other)))
    {
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> this121468 =
          (*this);
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> other121467 =
          x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(other);
        (x10aux::struct_equals(this121468->FMGL(plh), other121467->
                                                        FMGL(plh)));
    }))
    ;
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::equals(
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(plh), other->
                                                        FMGL(plh)));
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(other)))
    {
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> this121470 =
          (*this);
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> other121469 =
          x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(other);
        (x10aux::struct_equals(this121470->FMGL(plh), other121469->
                                                        FMGL(plh)));
    }))
    ;
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_struct_equals(
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> other) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(plh), other->
                                                        FMGL(plh)));
    
}

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::org__scalegraph__util__DistMemoryChunk____this__org__scalegraph__util__DistMemoryChunk(
  ) {
    
    //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_serialize(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(plh));
    
}

template<class TPMGL(T)> void org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(plh) = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >();
}


template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::util::DistMemoryChunk<void>::make(x10::array::PlaceGroup* pg,
                                                     x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init)
{
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> alloc75266 =
           org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_alloc();
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> plh121473 =
          x10::lang::PlaceLocalHandle<void>::template makeFlat<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >* >(
            pg, reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(sizeof(org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T)>)))org_scalegraph_util_DistMemoryChunk__closure__2<TPMGL(T)>(init))));
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
        alloc75266->FMGL(plh) = plh121473;
        alloc75266;
    }))
    ;
    
}
template<class TPMGL(T), class TPMGL(U)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::util::DistMemoryChunk<void>::make(x10::array::PlaceGroup* pg,
                                                     x10::lang::Fun_0_1<x10_int, TPMGL(U)>* init_here,
                                                     x10::lang::Fun_0_1<TPMGL(U), org::scalegraph::util::MemoryChunk<TPMGL(T)> >* init_there)
{
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> alloc75268 =
           org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_alloc();
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> plh121476 =
          x10::lang::PlaceLocalHandle<void>::template makeFlat<x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*,
          TPMGL(U) >(pg, init_here, reinterpret_cast<x10::lang::Fun_0_1<TPMGL(U), x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<TPMGL(U), x10::lang::Cell<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*> >(sizeof(org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U)>)))org_scalegraph_util_DistMemoryChunk__closure__3<TPMGL(T),TPMGL(U)>(init_there))));
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistMemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
        alloc75268->FMGL(plh) = plh121476;
        alloc75268;
    }))
    ;
    
}
#endif // ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS

#ifndef __ORG_SCALEGRAPH_UTIL_HASHMAP_H
#define __ORG_SCALEGRAPH_UTIL_HASHMAP_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_NODEPS
#include <org/scalegraph/util/HashMap__HashEntry.h>
#undef ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class UInt;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace util { 
class NoSuchElementException;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } } 
namespace org { namespace scalegraph { namespace util { 
class ScatterGather;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3)> class Tuple3;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(K), class TPMGL(V)> class HashMap;
template <> class HashMap<void, void>;
template<class TPMGL(K), class TPMGL(V)> class HashMap : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >
      FMGL(table);
    
    x10_int FMGL(size);
    
    x10_int FMGL(logSize);
    
    x10_boolean FMGL(shouldRehash);
    
    void _constructor();
    
    static org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* _make(
             );
    
    void _constructor(x10_int sz);
    
    static org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* _make(
             x10_int sz);
    
    virtual void init(x10_int init_size);
    virtual void clear();
    virtual x10_int size();
    virtual x10_int hash(TPMGL(K) k);
    virtual x10_int hashInternal(TPMGL(K) k);
    virtual x10::util::Box<TPMGL(V)>* put(TPMGL(K) k, TPMGL(V) v);
    virtual x10::util::Box<TPMGL(V)>* putInternal(TPMGL(K) k,
                                                  TPMGL(V) v);
    virtual x10::util::Box<TPMGL(V)>* get(TPMGL(K) k);
    virtual TPMGL(V) get(TPMGL(K) k, TPMGL(V) defValue);
    virtual org::scalegraph::util::MemoryChunk<TPMGL(V)> get(
      org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, TPMGL(V) defValue);
    virtual TPMGL(V) getOrThrow(TPMGL(K) key);
    virtual x10_boolean containsKey(TPMGL(K) key);
    virtual org::scalegraph::util::MemoryChunk<TPMGL(K)> newKeys(
      org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, TPMGL(V) defValue);
    x10_int putDummyLocal(x10_int h, x10_int proper_h, TPMGL(K) key,
                          TPMGL(V) value);
    virtual x10_int getEntryIndex(TPMGL(K) k);
    virtual void put(org::scalegraph::util::MemoryChunk<TPMGL(K)> ks,
                     org::scalegraph::util::MemoryChunk<TPMGL(V)> vs);
    x10_boolean putLocal(x10_int h, x10_int proper_h, TPMGL(K) key,
                         TPMGL(V) value);
    virtual void rehash();
    virtual void rehashInternal();
    virtual org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*
      org__scalegraph__util__HashMap____this__org__scalegraph__util__HashMap(
      );
    virtual void __fieldInitializers65457();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(K), class TPMGL(V)> x10aux::RuntimeType org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::HashMap<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(K)>(), x10aux::getRTT<TPMGL(V)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.HashMap";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 2, params, variances);
}

template <> class HashMap<void, void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_int pow2floor(x10_int x);
    
    static x10_int FMGL(nChunk);
    
    static x10_int FMGL(nMaskBits);
    
    static x10_int FMGL(MAX_PROBES);
    
    static x10_int FMGL(MIN_SIZE);
    
    static x10_int hashToIndex(x10_int idx, x10_int n);
    
    static void FMGL(nChunk__do_init)();
    static void FMGL(nChunk__init)();
    static volatile x10aux::StaticInitController::status FMGL(nChunk__status);
    static x10::lang::CheckedThrowable* FMGL(nChunk__exception);
    static x10_int FMGL(nChunk__get)();
    static void FMGL(nMaskBits__do_init)();
    static void FMGL(nMaskBits__init)();
    static volatile x10aux::StaticInitController::status FMGL(nMaskBits__status);
    static x10::lang::CheckedThrowable* FMGL(nMaskBits__exception);
    static x10_int FMGL(nMaskBits__get)();
    static void FMGL(MAX_PROBES__do_init)();
    static void FMGL(MAX_PROBES__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAX_PROBES__status);
    static x10::lang::CheckedThrowable* FMGL(MAX_PROBES__exception);
    static x10_int FMGL(MAX_PROBES__get)();
    static void FMGL(MIN_SIZE__do_init)();
    static void FMGL(MIN_SIZE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MIN_SIZE__status);
    static x10::lang::CheckedThrowable* FMGL(MIN_SIZE__exception);
    static x10_int FMGL(MIN_SIZE__get)();
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_HASHMAP_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_HASHMAP_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/HashMap__HashEntry.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Runtime.h>
#include <org/scalegraph/util/MathAppend.h>
#include <x10/lang/Long.h>
#include <x10/lang/Math.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/LongRange.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Any.h>
#include <x10/lang/UInt.h>
#include <x10/util/Box.h>
#include <x10/array/Array.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/util/NoSuchElementException.h>
#include <org/scalegraph/util/Pair.h>
#include <org/scalegraph/util/ScatterGather.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/util/tuple/Tuple3.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_HASHMAP_H_GENERICS
inline x10_int org::scalegraph::util::HashMap<void, void>::FMGL(nChunk__get)() {
    if (FMGL(nChunk__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(nChunk__init)();
    }
    return org::scalegraph::util::HashMap<void, void>::FMGL(nChunk);
}

inline x10_int org::scalegraph::util::HashMap<void, void>::FMGL(nMaskBits__get)() {
    if (FMGL(nMaskBits__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(nMaskBits__init)();
    }
    return org::scalegraph::util::HashMap<void, void>::FMGL(nMaskBits);
}

inline x10_int org::scalegraph::util::HashMap<void, void>::FMGL(MAX_PROBES__get)() {
    if (FMGL(MAX_PROBES__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAX_PROBES__init)();
    }
    return org::scalegraph::util::HashMap<void, void>::FMGL(MAX_PROBES);
}

inline x10_int org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE__get)() {
    if (FMGL(MIN_SIZE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MIN_SIZE__init)();
    }
    return org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE);
}

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_HASHMAP_H_IMPLEMENTATION
#include <org/scalegraph/util/HashMap.h>

#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, x10_long>::template itable <org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_int i) {
        
        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(i, ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                     FMGL(nChunk__get)()) - (((x10_int)1)))))))
        {
            
            //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
            return ((x10_long) ((((x10_long) ((ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size()) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                            FMGL(nChunk__get)())))))) + (((x10_long) ((ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size()) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                                                                                                                    FMGL(nChunk__get)()))))))));
            
        } else {
            
            //#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
            return ((x10_long) ((ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size()) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::HashMap<void, void>::
                                                                                                                              FMGL(nChunk__get)())))));
            
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ks);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >(that_ks);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__1(org::scalegraph::util::MemoryChunk<TPMGL(K)> ks) : ks(ks) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:188-190";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_1<x10_int, x10_long>::template itable <org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, x10_long> >, &org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
        try {
            
            //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66687min67176 = offset->x10::array::Array<x10_long>::__apply(
                                        p67183);
            
            //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66687max67177 = ((x10_long) ((((x10_long) ((offset->x10::array::Array<x10_long>::__apply(
                                                                    p67183)) + (eachSize->x10::array::Array<x10_long>::__apply(
                                                                                  p67183))))) - (((x10_long) (((x10_int)1))))));
            
            //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
            {
                x10_long i67178;
                for (
                     //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                     i67178 = i66687min67176; ((i67178) <= (i66687max67177));
                     
                     //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                     i67178 = ((x10_long) ((i67178) + (((x10_long)1ll)))))
                {
                    
                    //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long i67179 = i67178;
                    
                    //#line 198 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    vs->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__set(
                      i67179, saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::get(
                                ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                  i67179), defValue));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1253) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1253)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1253);
                {
                    
                    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1253);
                {
                    
                    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int p67183;
    x10::array::Array<x10_long>* offset;
    x10::array::Array<x10_long>* eachSize;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> vs;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    TPMGL(V) defValue;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p67183);
        buf.write(this->offset);
        buf.write(this->eachSize);
        buf.write(this->vs);
        buf.write(this->ks);
        buf.write(this->defValue);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        x10_int that_p67183 = buf.read<x10_int>();
        x10::array::Array<x10_long>* that_offset = buf.read<x10::array::Array<x10_long>*>();
        x10::array::Array<x10_long>* that_eachSize = buf.read<x10::array::Array<x10_long>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_vs = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        TPMGL(V) that_defValue = buf.read<TPMGL(V)>();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >(that_p67183, that_offset, that_eachSize, that_vs, that_ks, that_defValue, that_saved_this);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__2(x10_int p67183, x10::array::Array<x10_long>* offset, x10::array::Array<x10_long>* eachSize, org::scalegraph::util::MemoryChunk<TPMGL(V)> vs, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, TPMGL(V) defValue, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this) : p67183(p67183), offset(offset), eachSize(eachSize), vs(vs), ks(ks), defValue(defValue), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:196-200";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> counts = scatterGather->org::scalegraph::util::ScatterGather::counts(
                                                                ((x10_int) (tid)));
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i66719domain67194 = r;
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66719min67195 = i66719domain67194->FMGL(min);
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66719max67196 = i66719domain67194->FMGL(max);
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67197;
            for (
                 //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67197 = i66719min67195; ((i67197) <= (i66719max67196));
                 
                 //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67197 = ((x10_long) ((i67197) + (((x10_long)1ll)))))
            {
                
                //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67198 = i67197;
                
                //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int h67192 = saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hash(
                                   ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                     i67198));
                
                //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int chunkIdx67193 = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                                 FMGL(nMaskBits__get)(),
                                                               ((x10_int)0)))
                  ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                                        h67192, org::scalegraph::util::HashMap<void, void>::
                                                  FMGL(nMaskBits__get)()));
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x67189 =
                  counts;
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int y67190 = chunkIdx67193;
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                ;
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long ret67191;
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long r67188 = ((x10_long) ((x67189->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y67190)) + (((x10_long)1ll))));
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x67189->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y67190, r67188);
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                ret67191 = r67188;
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                ret67191;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->ks);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_scatterGather = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >(that_scatterGather, that_ks, that_saved_this);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__3(org::scalegraph::util::ScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this) : scatterGather(scatterGather), ks(ks), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:222-229";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = scatterGather->org::scalegraph::util::ScatterGather::offsets(
                                                                 ((x10_int) (tid)));
        
        //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i66736domain67207 = r;
        
        //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66736min67208 = i66736domain67207->FMGL(min);
        
        //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66736max67209 = i66736domain67207->FMGL(max);
        
        //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67210;
            for (
                 //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67210 = i66736min67208; ((i67210) <= (i66736max67209));
                 
                 //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67210 = ((x10_long) ((i67210) + (((x10_long)1ll)))))
            {
                
                //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67211 = i67210;
                
                //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                TPMGL(K) k67200 = ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                    i67211);
                
                //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int h67201 = saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hash(
                                   ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                     i67211));
                
                //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int chunkIdx67202 = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                                 FMGL(nMaskBits__get)(),
                                                               ((x10_int)0)))
                  ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                                        h67201, org::scalegraph::util::HashMap<void, void>::
                                                  FMGL(nMaskBits__get)()));
                
                //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long idx67203 = ((x10_long) (((__extension__ ({
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> x67204 =
                      offsets;
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int y67205 = chunkIdx67202;
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long ret67206;
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long r67199 = ((x10_long) ((x67204->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      y67205)) + (((x10_long)1ll))));
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    x67204->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      y67205, r67199);
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    ret67206 = r67199;
                    ret67206;
                }))
                ) - (((x10_long)1ll))));
                
                //#line 240 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                chunk->org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::__set(
                  idx67203, org::scalegraph::util::Pair<x10_int, x10_long>::_make(h67201,
                                                                                  i67211));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->ks);
        buf.write(this->saved_this);
        buf.write(this->chunk);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_scatterGather = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > that_chunk = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > >();
        org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >(that_scatterGather, that_ks, that_saved_this, that_chunk);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__4(org::scalegraph::util::ScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk) : scatterGather(scatterGather), ks(ks), saved_this(saved_this), chunk(chunk) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:233-242";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* __apply(x10_int i) {
        
        //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__5() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:252";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >, &org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
        try {
            
            //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_int cnt67219 = ((x10_int)0);
            
            //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66770min67215 = offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        p67223);
            
            //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66770max67216 = ((x10_long) ((((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                    p67223)) + (counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                  p67223))))) - (((x10_long) (((x10_int)1))))));
            
            //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
            {
                x10_long i67217;
                for (
                     //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                     i67217 = i66770min67215; ((i67217) <= (i66770max67216));
                     
                     //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                     i67217 = ((x10_long) ((i67217) + (((x10_long)1ll)))))
                {
                    
                    //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long i67218 = i67217;
                    
                    //#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::Pair<x10_int, x10_long> e67212 =
                      chunk->org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::__apply(
                        i67218);
                    
                    //#line 263 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long idx67213 = e67212->FMGL(second);
                    
                    //#line 264 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int ret67214 = saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putDummyLocal(
                                         e67212->FMGL(first),
                                         e67212->FMGL(first),
                                         ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                           idx67213), defValue);
                    
                    //#line 265 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((x10aux::struct_equals(ret67214, ((x10_int)-2))))
                    {
                        
                        //#line 267 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                            ((x10_int) ((((x10_int) ((p67223) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                        FMGL(nChunk__get)())))))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::add(
                          org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int>::_make(((x10_int) ((((x10_int) ((((x10_int) ((p67223) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                           FMGL(nChunk__get)())))) << (0x1f & (((x10_int) ((((x10_int)32)) - (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                                                                                                FMGL(nMaskBits__get)()))))))),
                                                                                                  idx67213,
                                                                                                  e67212->
                                                                                                    FMGL(first)));
                    } else 
                    //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (((ret67214) >= (((x10_int)0)))) {
                        
                        //#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        cnt67219 = ((x10_int) ((cnt67219) + (((x10_int)1))));
                        
                        //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        pushed->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          i67218, ret67214);
                    }
                    
                }
            }
            
            //#line 274 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            localSize->x10::array::Array<x10_int>::__set(
              p67223, cnt67219);
        }
        catch (x10::lang::CheckedThrowable* __exc1259) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1259)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1259);
                {
                    
                    //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1259);
                {
                    
                    //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int p67223;
    org::scalegraph::util::MemoryChunk<x10_long> offsets;
    org::scalegraph::util::MemoryChunk<x10_long> counts;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    TPMGL(V) defValue;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk;
    org::scalegraph::util::MemoryChunk<x10_int> pushed;
    x10::array::Array<x10_int>* localSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p67223);
        buf.write(this->offsets);
        buf.write(this->counts);
        buf.write(this->chunk);
        buf.write(this->ks);
        buf.write(this->defValue);
        buf.write(this->saved_this);
        buf.write(this->currentChunk);
        buf.write(this->pushed);
        buf.write(this->localSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        x10_int that_p67223 = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > that_chunk = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > >();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        TPMGL(V) that_defValue = buf.read<TPMGL(V)>();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > that_currentChunk = buf.read<x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > >();
        org::scalegraph::util::MemoryChunk<x10_int> that_pushed = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10::array::Array<x10_int>* that_localSize = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >(that_p67223, that_offsets, that_counts, that_chunk, that_ks, that_defValue, that_saved_this, that_currentChunk, that_pushed, that_localSize);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__6(x10_int p67223, org::scalegraph::util::MemoryChunk<x10_long> offsets, org::scalegraph::util::MemoryChunk<x10_long> counts, org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, TPMGL(V) defValue, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk, org::scalegraph::util::MemoryChunk<x10_int> pushed, x10::array::Array<x10_int>* localSize) : p67223(p67223), offsets(offsets), counts(counts), chunk(chunk), ks(ks), defValue(defValue), saved_this(saved_this), currentChunk(currentChunk), pushed(pushed), localSize(localSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:259-275";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>::template itable <org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_boolean acc, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* x) {
        
        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals(x10aux::nullCheck(x)->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::size(),
                                      ((x10_long)0ll))) && acc;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__7() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:278";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>::template itable <org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >, &org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* __apply(x10_int i) {
        
        //#line 281 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__8() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:281";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >, &org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
        try {
            
            //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i66802domain67231 = x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                                                         p67239))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::range();
            
            //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66802min67232 = i66802domain67231->FMGL(min);
            
            //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66802max67233 = i66802domain67231->FMGL(max);
            
            //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
            {
                x10_long i67234;
                for (
                     //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                     i67234 = i66802min67232; ((i67234) <= (i66802max67233));
                     
                     //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                     i67234 = ((x10_long) ((i67234) + (((x10_long)1ll)))))
                {
                    
                    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long i67235 = i67234;
                    
                    //#line 284 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> e67228 =
                      x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                          p67239))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::__apply(
                        i67235);
                    
                    //#line 285 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long idx67229 = e67228->FMGL(val2);
                    
                    //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int ret67230 = saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putDummyLocal(
                                         e67228->FMGL(val1),
                                         e67228->FMGL(val3),
                                         ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                           idx67229), defValue);
                    
                    //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((x10aux::struct_equals(ret67230, ((x10_int)-2))))
                    {
                        
                        //#line 289 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(nextChunk->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                            ((x10_int) ((((x10_int) ((p67239) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                        FMGL(nChunk__get)())))))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::add(
                          org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int>::_make(((x10_int) ((((x10_int) ((((x10_int) ((p67239) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                           FMGL(nChunk__get)())))) << (0x1f & (((x10_int) ((((x10_int)32)) - (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                                                                                                FMGL(nMaskBits__get)()))))))),
                                                                                                  idx67229,
                                                                                                  e67228->
                                                                                                    FMGL(val3)));
                    } else {
                        
                        //#line 292 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        pushed->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          i67235, ret67230);
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10::array::Array<x10_int>* x67225 =
                          localSize;
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int y67226 = p67239;
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int ret67227;
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int r67224 = ((x10_int) ((x67225->x10::array::Array<x10_int>::__apply(
                                                        y67226)) + (((x10_int)1))));
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x67225->x10::array::Array<x10_int>::__set(
                          y67226, r67224);
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret67227 = r67224;
                        
                        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                        ret67227;
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1262) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1262)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1262);
                {
                    
                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1262);
                {
                    
                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int p67239;
    x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    TPMGL(V) defValue;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk;
    org::scalegraph::util::MemoryChunk<x10_int> pushed;
    x10::array::Array<x10_int>* localSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p67239);
        buf.write(this->currentChunk);
        buf.write(this->ks);
        buf.write(this->defValue);
        buf.write(this->saved_this);
        buf.write(this->nextChunk);
        buf.write(this->pushed);
        buf.write(this->localSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        x10_int that_p67239 = buf.read<x10_int>();
        x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > that_currentChunk = buf.read<x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > >();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        TPMGL(V) that_defValue = buf.read<TPMGL(V)>();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* that_nextChunk = buf.read<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>();
        org::scalegraph::util::MemoryChunk<x10_int> that_pushed = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10::array::Array<x10_int>* that_localSize = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >(that_p67239, that_currentChunk, that_ks, that_defValue, that_saved_this, that_nextChunk, that_pushed, that_localSize);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__9(x10_int p67239, x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, TPMGL(V) defValue, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk, org::scalegraph::util::MemoryChunk<x10_int> pushed, x10::array::Array<x10_int>* localSize) : p67239(p67239), currentChunk(currentChunk), ks(ks), defValue(defValue), saved_this(saved_this), nextChunk(nextChunk), pushed(pushed), localSize(localSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:282-296";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__10 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int acc, x10_int x) {
        
        //#line 299 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return ((x10_int) ((acc) + (x)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__10() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:299";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i66835domain67244 = r;
        
        //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66835min67245 = i66835domain67244->FMGL(min);
        
        //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66835max67246 = i66835domain67244->FMGL(max);
        
        //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67247;
            for (
                 //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67247 = i66835min67245; ((i67247) <= (i66835max67246));
                 
                 //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67247 = ((x10_long) ((i67247) + (((x10_long)1ll))))) {
                
                //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67248 = i67247;
                
                //#line 306 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (((pushed->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                        i67248)) >= (((x10_int)0)))) {
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10_int>* x67241 = counts2;
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int y67242 = ((x10_int) (tid));
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int ret67243;
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int r67240 = ((x10_int) ((x67241->x10::array::Array<x10_int>::__apply(
                                                    y67242)) + (((x10_int)1))));
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    x67241->x10::array::Array<x10_int>::__set(
                      y67242, r67240);
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    ret67243 = r67240;
                    
                    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                    ret67243;
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> pushed;
    x10::array::Array<x10_int>* counts2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->pushed);
        buf.write(this->counts2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_pushed = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10::array::Array<x10_int>* that_counts2 = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >(that_pushed, that_counts2);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__11(org::scalegraph::util::MemoryChunk<x10_int> pushed, x10::array::Array<x10_int>* counts2) : pushed(pushed), counts2(counts2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:304-310";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i66868domain67254 = r;
        
        //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66868min67255 = i66868domain67254->FMGL(min);
        
        //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66868max67256 = i66868domain67254->FMGL(max);
        
        //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67257;
            for (
                 //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67257 = i66868min67255; ((i67257) <= (i66868max67256));
                 
                 //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67257 = ((x10_long) ((i67257) + (((x10_long)1ll))))) {
                
                //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67258 = i67257;
                
                //#line 318 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (((pushed->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                        i67258)) >= (((x10_int)0)))) {
                    
                    //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> e67253 =
                      saved_this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                        pushed->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                          i67258));
                    
                    //#line 320 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    newKeys->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__set(
                      offsets2->x10::array::Array<x10_int>::__apply(
                        ((x10_int) (tid))), e67253->FMGL(key));
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10_int>* x67250 = offsets2;
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int y67251 = ((x10_int) (tid));
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int ret67252;
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int r67249 = ((x10_int) ((x67250->x10::array::Array<x10_int>::__apply(
                                                    y67251)) + (((x10_int)1))));
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    x67250->x10::array::Array<x10_int>::__set(
                      y67251, r67249);
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    ret67252 = r67249;
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                    ret67252;
                    
                    //#line 322 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    saved_this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__set(
                      pushed->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                        i67258), org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>::_make());
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> pushed;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> newKeys;
    x10::array::Array<x10_int>* offsets2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->pushed);
        buf.write(this->saved_this);
        buf.write(this->newKeys);
        buf.write(this->offsets2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_pushed = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_newKeys = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        x10::array::Array<x10_int>* that_offsets2 = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >(that_pushed, that_saved_this, that_newKeys, that_offsets2);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__12(org::scalegraph::util::MemoryChunk<x10_int> pushed, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, org::scalegraph::util::MemoryChunk<TPMGL(K)> newKeys, x10::array::Array<x10_int>* offsets2) : pushed(pushed), saved_this(saved_this), newKeys(newKeys), offsets2(offsets2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:316-325";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__13 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 406 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> counts = scatterGather->org::scalegraph::util::ScatterGather::counts(
                                                                ((x10_int) (tid)));
        
        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i66885domain67274 = r;
        
        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66885min67275 = i66885domain67274->FMGL(min);
        
        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66885max67276 = i66885domain67274->FMGL(max);
        
        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67277;
            for (
                 //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67277 = i66885min67275; ((i67277) <= (i66885max67276));
                 
                 //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67277 = ((x10_long) ((i67277) + (((x10_long)1ll)))))
            {
                
                //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67278 = i67277;
                
                //#line 408 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int h67272 = saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hash(
                                   ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                     i67278));
                
                //#line 409 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int chunkIdx67273 = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                                 FMGL(nMaskBits__get)(),
                                                               ((x10_int)0)))
                  ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                                        h67272, org::scalegraph::util::HashMap<void, void>::
                                                  FMGL(nMaskBits__get)()));
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x67269 =
                  counts;
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int y67270 = chunkIdx67273;
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                ;
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long ret67271;
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long r67268 = ((x10_long) ((x67269->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y67270)) + (((x10_long)1ll))));
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x67269->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y67270, r67268);
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                ret67271 = r67268;
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                ret67271;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->ks);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_scatterGather = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >(that_scatterGather, that_ks, that_saved_this);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__13(org::scalegraph::util::ScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this) : scatterGather(scatterGather), ks(ks), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:405-412";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 417 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = scatterGather->org::scalegraph::util::ScatterGather::offsets(
                                                                 ((x10_int) (tid)));
        
        //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i66902domain67288 = r;
        
        //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66902min67289 = i66902domain67288->FMGL(min);
        
        //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66902max67290 = i66902domain67288->FMGL(max);
        
        //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67291;
            for (
                 //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67291 = i66902min67289; ((i67291) <= (i66902max67290));
                 
                 //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67291 = ((x10_long) ((i67291) + (((x10_long)1ll)))))
            {
                
                //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67292 = i67291;
                
                //#line 419 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                TPMGL(K) k67280 = ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                    i67292);
                
                //#line 420 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                TPMGL(V) v67281 = vs->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__apply(
                                    i67292);
                
                //#line 421 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int h67282 = saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hash(
                                   ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                                     i67292));
                
                //#line 422 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_int chunkIdx67283 = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                                 FMGL(nMaskBits__get)(),
                                                               ((x10_int)0)))
                  ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                                        h67282, org::scalegraph::util::HashMap<void, void>::
                                                  FMGL(nMaskBits__get)()));
                
                //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long idx67284 = ((x10_long) (((__extension__ ({
                    
                    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> x67285 =
                      offsets;
                    
                    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int y67286 = chunkIdx67283;
                    
                    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long ret67287;
                    
                    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long r67279 = ((x10_long) ((x67285->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      y67286)) + (((x10_long)1ll))));
                    
                    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    x67285->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      y67286, r67279);
                    
                    //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    ret67287 = r67279;
                    ret67287;
                }))
                ) - (((x10_long)1ll))));
                
                //#line 424 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                chunk->org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::__set(
                  idx67284, org::scalegraph::util::Pair<x10_int, x10_long>::_make(h67282,
                                                                                  i67292));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> vs;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->ks);
        buf.write(this->vs);
        buf.write(this->saved_this);
        buf.write(this->chunk);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_scatterGather = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_vs = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > that_chunk = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > >();
        org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >(that_scatterGather, that_ks, that_vs, that_saved_this, that_chunk);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__14(org::scalegraph::util::ScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, org::scalegraph::util::MemoryChunk<TPMGL(V)> vs, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk) : scatterGather(scatterGather), ks(ks), vs(vs), saved_this(saved_this), chunk(chunk) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:416-426";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* __apply(x10_int i) {
        
        //#line 435 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__15() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:435";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >, &org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
        try {
            
            //#line 438 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_int cnt67299 = ((x10_int)0);
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66919min67295 = offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        p67303);
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66919max67296 = ((x10_long) ((((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                    p67303)) + (counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                  p67303))))) - (((x10_long) (((x10_int)1))))));
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
            {
                x10_long i67297;
                for (
                     //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                     i67297 = i66919min67295; ((i67297) <= (i66919max67296));
                     
                     //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                     i67297 = ((x10_long) ((i67297) + (((x10_long)1ll)))))
                {
                    
                    //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long i67298 = i67297;
                    
                    //#line 440 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::Pair<x10_int, x10_long> e67293 =
                      chunk->org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::__apply(
                        i67298);
                    
                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long idx67294 = e67293->FMGL(second);
                    
                    //#line 442 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (!(saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putLocal(
                            e67293->FMGL(first), e67293->
                                                   FMGL(first),
                            ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                              idx67294), vs->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__apply(
                                           idx67294)))) {
                        
                        //#line 444 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                            ((x10_int) ((((x10_int) ((p67303) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                        FMGL(nChunk__get)())))))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::add(
                          org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int>::_make(((x10_int) ((((x10_int) ((((x10_int) ((p67303) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                           FMGL(nChunk__get)())))) << (0x1f & (((x10_int) ((((x10_int)32)) - (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                                                                                                FMGL(nMaskBits__get)()))))))),
                                                                                                  idx67294,
                                                                                                  e67293->
                                                                                                    FMGL(first)));
                    } else {
                        
                        //#line 447 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        cnt67299 = ((x10_int) ((cnt67299) + (((x10_int)1))));
                    }
                    
                }
            }
            
            //#line 450 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            localSize->x10::array::Array<x10_int>::__set(
              p67303, cnt67299);
        }
        catch (x10::lang::CheckedThrowable* __exc1268) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1268)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1268);
                {
                    
                    //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1268);
                {
                    
                    //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int p67303;
    org::scalegraph::util::MemoryChunk<x10_long> offsets;
    org::scalegraph::util::MemoryChunk<x10_long> counts;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> vs;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk;
    x10::array::Array<x10_int>* localSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p67303);
        buf.write(this->offsets);
        buf.write(this->counts);
        buf.write(this->chunk);
        buf.write(this->ks);
        buf.write(this->vs);
        buf.write(this->saved_this);
        buf.write(this->currentChunk);
        buf.write(this->localSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        x10_int that_p67303 = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > that_chunk = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > >();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_vs = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > that_currentChunk = buf.read<x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > >();
        x10::array::Array<x10_int>* that_localSize = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >(that_p67303, that_offsets, that_counts, that_chunk, that_ks, that_vs, that_saved_this, that_currentChunk, that_localSize);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__16(x10_int p67303, org::scalegraph::util::MemoryChunk<x10_long> offsets, org::scalegraph::util::MemoryChunk<x10_long> counts, org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, org::scalegraph::util::MemoryChunk<TPMGL(V)> vs, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk, x10::array::Array<x10_int>* localSize) : p67303(p67303), offsets(offsets), counts(counts), chunk(chunk), ks(ks), vs(vs), saved_this(saved_this), currentChunk(currentChunk), localSize(localSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:437-451";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__17 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>::template itable <org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_boolean acc, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* x) {
        
        //#line 455 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals(x10aux::nullCheck(x)->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::size(),
                                      ((x10_long)0ll))) && acc;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__17() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:455";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>::template itable <org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >, &org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__17_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__18 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* __apply(x10_int i) {
        
        //#line 458 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__18() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:458";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >, &org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__19_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__19 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
        try {
            
            //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i66951domain67310 = x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                                                         p67318))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::range();
            
            //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66951min67311 = i66951domain67310->FMGL(min);
            
            //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i66951max67312 = i66951domain67310->FMGL(max);
            
            //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
            {
                x10_long i67313;
                for (
                     //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                     i67313 = i66951min67311; ((i67313) <= (i66951max67312));
                     
                     //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                     i67313 = ((x10_long) ((i67313) + (((x10_long)1ll)))))
                {
                    
                    //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long i67314 = i67313;
                    
                    //#line 461 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> e67308 =
                      x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                          p67318))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::__apply(
                        i67314);
                    
                    //#line 462 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long idx67309 = e67308->FMGL(val2);
                    
                    //#line 463 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (!(saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putLocal(
                            e67308->FMGL(val1), e67308->FMGL(val3),
                            ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::__apply(
                              idx67309), vs->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__apply(
                                           idx67309)))) {
                        
                        //#line 465 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(nextChunk->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                            ((x10_int) ((((x10_int) ((p67318) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                        FMGL(nChunk__get)())))))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::add(
                          org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int>::_make(((x10_int) ((((x10_int) ((((x10_int) ((p67318) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                           FMGL(nChunk__get)())))) << (0x1f & (((x10_int) ((((x10_int)32)) - (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                                                                                                FMGL(nMaskBits__get)()))))))),
                                                                                                  idx67309,
                                                                                                  e67308->
                                                                                                    FMGL(val3)));
                    } else {
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10::array::Array<x10_int>* x67305 =
                          localSize;
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int y67306 = p67318;
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int ret67307;
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int r67304 = ((x10_int) ((x67305->x10::array::Array<x10_int>::__apply(
                                                        y67306)) + (((x10_int)1))));
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x67305->x10::array::Array<x10_int>::__set(
                          y67306, r67304);
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret67307 = r67304;
                        
                        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                        ret67307;
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1271) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1271)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1271);
                {
                    
                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1271);
                {
                    
                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int p67318;
    x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk;
    org::scalegraph::util::MemoryChunk<TPMGL(K)> ks;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> vs;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk;
    x10::array::Array<x10_int>* localSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p67318);
        buf.write(this->currentChunk);
        buf.write(this->ks);
        buf.write(this->vs);
        buf.write(this->saved_this);
        buf.write(this->nextChunk);
        buf.write(this->localSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        x10_int that_p67318 = buf.read<x10_int>();
        x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > that_currentChunk = buf.read<x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > >();
        org::scalegraph::util::MemoryChunk<TPMGL(K)> that_ks = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(K)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_vs = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* that_nextChunk = buf.read<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>();
        x10::array::Array<x10_int>* that_localSize = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >(that_p67318, that_currentChunk, that_ks, that_vs, that_saved_this, that_nextChunk, that_localSize);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__19(x10_int p67318, x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk, org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, org::scalegraph::util::MemoryChunk<TPMGL(V)> vs, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk, x10::array::Array<x10_int>* localSize) : p67318(p67318), currentChunk(currentChunk), ks(ks), vs(vs), saved_this(saved_this), nextChunk(nextChunk), localSize(localSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:459-471";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__19_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__20_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__20 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int acc67321, x10_int x67322) {
        
        //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return ((x10_int) ((acc67321) + (x67322)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__20() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:474";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__20_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__21_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__21 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 514 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> counts = scatterGather->org::scalegraph::util::ScatterGather::counts(
                                                                ((x10_int) (tid)));
        
        //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i66984domain67330 = r;
        
        //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66984min67331 = i66984domain67330->FMGL(min);
        
        //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i66984max67332 = i66984domain67330->FMGL(max);
        
        //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67333;
            for (
                 //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67333 = i66984min67331; ((i67333) <= (i66984max67332));
                 
                 //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67333 = ((x10_long) ((i67333) + (((x10_long)1ll)))))
            {
                
                //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67334 = i67333;
                
                //#line 516 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> e67327 =
                  t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                    i67334);
                
                //#line 517 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(e67327->FMGL(flag),
                                           org::scalegraph::util::HashMap__HashEntry<void, void>::
                                             FMGL(OCCUPIED__get)())))
                {
                    
                    //#line 518 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int h67328 = e67327->FMGL(hash);
                    
                    //#line 519 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int chunkIdx67329 = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                                     FMGL(nMaskBits__get)(),
                                                                   ((x10_int)0)))
                      ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                                            h67328, org::scalegraph::util::HashMap<void, void>::
                                                      FMGL(nMaskBits__get)()));
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> x67324 =
                      counts;
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int y67325 = chunkIdx67329;
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long ret67326;
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long r67323 = ((x10_long) ((x67324->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      y67325)) + (((x10_long)1ll))));
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    x67324->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      y67325, r67323);
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    ret67326 = r67323;
                    
                    //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                    ret67326;
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->t);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_scatterGather = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > that_t = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > >();
        org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >(that_scatterGather, that_t);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__21(org::scalegraph::util::ScatterGather scatterGather, org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t) : scatterGather(scatterGather), t(t) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:513-523";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__21_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__22_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__22 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = scatterGather->org::scalegraph::util::ScatterGather::offsets(
                                                                 ((x10_int) (tid)));
        
        //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i67001domain67343 = r;
        
        //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i67001min67344 = i67001domain67343->FMGL(min);
        
        //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10_long i67001max67345 = i67001domain67343->FMGL(max);
        
        //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
        {
            x10_long i67346;
            for (
                 //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                 i67346 = i67001min67344; ((i67346) <= (i67001max67345));
                 
                 //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                 i67346 = ((x10_long) ((i67346) + (((x10_long)1ll)))))
            {
                
                //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long i67347 = i67346;
                
                //#line 532 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> e67336 =
                  t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                    i67347);
                
                //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(e67336->FMGL(flag),
                                           org::scalegraph::util::HashMap__HashEntry<void, void>::
                                             FMGL(OCCUPIED__get)())))
                {
                    
                    //#line 534 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int h67337 = e67336->FMGL(hash);
                    
                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int chunkIdx67338 = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                                     FMGL(nMaskBits__get)(),
                                                                   ((x10_int)0)))
                      ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                                            h67337, org::scalegraph::util::HashMap<void, void>::
                                                      FMGL(nMaskBits__get)()));
                    
                    //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long idx67339 = ((x10_long) (((__extension__ ({
                        
                        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> x67340 =
                          offsets;
                        
                        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int y67341 = chunkIdx67338;
                        
                        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_long ret67342;
                        
                        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_long r67335 = ((x10_long) ((x67340->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                          y67341)) + (((x10_long)1ll))));
                        
                        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x67340->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                          y67341, r67335);
                        
                        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret67342 = r67335;
                        ret67342;
                    }))
                    ) - (((x10_long)1ll))));
                    
                    //#line 537 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                    chunk->org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::__set(
                      idx67339, org::scalegraph::util::Pair<x10_int, x10_long>::_make(h67337,
                                                                                      i67347));
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->t);
        buf.write(this->chunk);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_scatterGather = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > that_t = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > that_chunk = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > >();
        org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >(that_scatterGather, that_t, that_chunk);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__22(org::scalegraph::util::ScatterGather scatterGather, org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t, org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk) : scatterGather(scatterGather), t(t), chunk(chunk) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:529-540";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__22_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__23_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__23 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* __apply(x10_int i) {
        
        //#line 549 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__23() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:549";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >, &org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__23_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__24_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__24 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
        try {
            
            //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_int cnt67354 = ((x10_int)0);
            
            //#line 554 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i67018min67350 = offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        p67358);
            
            //#line 554 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i67018max67351 = ((x10_long) ((((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                    p67358)) + (counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                  p67358))))) - (((x10_long) (((x10_int)1))))));
            
            //#line 554 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
            {
                x10_long i67352;
                for (
                     //#line 554 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                     i67352 = i67018min67350; ((i67352) <= (i67018max67351));
                     
                     //#line 554 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                     i67352 = ((x10_long) ((i67352) + (((x10_long)1ll)))))
                {
                    
                    //#line 554 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long i67353 = i67352;
                    
                    //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::Pair<x10_int, x10_long> e67348 =
                      chunk->org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::__apply(
                        i67353);
                    
                    //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long idx67349 = e67348->FMGL(second);
                    
                    //#line 557 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (!(saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putLocal(
                            e67348->FMGL(first), e67348->
                                                   FMGL(first),
                            t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                              idx67349)->FMGL(key), t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                                                      idx67349)->
                                                      FMGL(value))))
                    {
                        
                        //#line 559 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                            ((x10_int) ((((x10_int) ((p67358) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                        FMGL(nChunk__get)())))))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::add(
                          org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int>::_make(((x10_int) ((((x10_int) ((((x10_int) ((p67358) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                           FMGL(nChunk__get)())))) << (0x1f & (((x10_int) ((((x10_int)32)) - (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                                                                                                FMGL(nMaskBits__get)()))))))),
                                                                                                  idx67349,
                                                                                                  e67348->
                                                                                                    FMGL(first)));
                    } else {
                        
                        //#line 562 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        cnt67354 = ((x10_int) ((cnt67354) + (((x10_int)1))));
                    }
                    
                }
            }
            
            //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            localSize->x10::array::Array<x10_int>::__set(
              p67358, cnt67354);
        }
        catch (x10::lang::CheckedThrowable* __exc1277) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1277)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1277);
                {
                    
                    //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1277);
                {
                    
                    //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int p67358;
    org::scalegraph::util::MemoryChunk<x10_long> offsets;
    org::scalegraph::util::MemoryChunk<x10_long> counts;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk;
    x10::array::Array<x10_int>* localSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p67358);
        buf.write(this->offsets);
        buf.write(this->counts);
        buf.write(this->chunk);
        buf.write(this->t);
        buf.write(this->saved_this);
        buf.write(this->currentChunk);
        buf.write(this->localSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        x10_int that_p67358 = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > that_chunk = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > that_t = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > that_currentChunk = buf.read<x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > >();
        x10::array::Array<x10_int>* that_localSize = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >(that_p67358, that_offsets, that_counts, that_chunk, that_t, that_saved_this, that_currentChunk, that_localSize);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__24(x10_int p67358, org::scalegraph::util::MemoryChunk<x10_long> offsets, org::scalegraph::util::MemoryChunk<x10_long> counts, org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk, org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk, x10::array::Array<x10_int>* localSize) : p67358(p67358), offsets(offsets), counts(counts), chunk(chunk), t(t), saved_this(saved_this), currentChunk(currentChunk), localSize(localSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:552-566";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__24_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__25_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__25 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>::template itable <org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_boolean acc, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* x) {
        
        //#line 570 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals(x10aux::nullCheck(x)->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::size(),
                                      ((x10_long)0ll))) && acc;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__25() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:570";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>::template itable <org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >, &org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__25_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__26_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__26 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >* __apply(x10_int i) {
        
        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__26() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:573";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::template itable <org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >, &org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__26_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__27_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__27 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
        try {
            
            //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i67050domain67365 = x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                                                         p67373))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::range();
            
            //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i67050min67366 = i67050domain67365->FMGL(min);
            
            //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i67050max67367 = i67050domain67365->FMGL(max);
            
            //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
            {
                x10_long i67368;
                for (
                     //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                     i67368 = i67050min67366; ((i67368) <= (i67050max67367));
                     
                     //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                     i67368 = ((x10_long) ((i67368) + (((x10_long)1ll)))))
                {
                    
                    //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long i67369 = i67368;
                    
                    //#line 576 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> e67363 =
                      x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                          p67373))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::__apply(
                        i67369);
                    
                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10_long idx67364 = e67363->FMGL(val2);
                    
                    //#line 578 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (!(saved_this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putLocal(
                            e67363->FMGL(val1), e67363->FMGL(val3),
                            t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                              idx67364)->FMGL(key), t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                                                      idx67364)->
                                                      FMGL(value))))
                    {
                        
                        //#line 580 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(nextChunk->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                            ((x10_int) ((((x10_int) ((p67373) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                        FMGL(nChunk__get)())))))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::add(
                          org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int>::_make(((x10_int) ((((x10_int) ((((x10_int) ((p67373) + (((x10_int)1))))) % x10aux::zeroCheck(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                           FMGL(nChunk__get)())))) << (0x1f & (((x10_int) ((((x10_int)32)) - (org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                                                                                                                                FMGL(nMaskBits__get)()))))))),
                                                                                                  idx67364,
                                                                                                  e67363->
                                                                                                    FMGL(val3)));
                    } else {
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10::array::Array<x10_int>* x67360 =
                          localSize;
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int y67361 = p67373;
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int ret67362;
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int r67359 = ((x10_int) ((x67360->x10::array::Array<x10_int>::__apply(
                                                        y67361)) + (((x10_int)1))));
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x67360->x10::array::Array<x10_int>::__set(
                          y67361, r67359);
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret67362 = r67359;
                        
                        //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Local_c
                        ret67362;
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1280) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1280)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1280);
                {
                    
                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1280);
                {
                    
                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int p67373;
    x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t;
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this;
    x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk;
    x10::array::Array<x10_int>* localSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p67373);
        buf.write(this->currentChunk);
        buf.write(this->t);
        buf.write(this->saved_this);
        buf.write(this->nextChunk);
        buf.write(this->localSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        x10_int that_p67373 = buf.read<x10_int>();
        x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > that_currentChunk = buf.read<x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > that_t = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > >();
        org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* that_saved_this = buf.read<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*>();
        x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* that_nextChunk = buf.read<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>();
        x10::array::Array<x10_int>* that_localSize = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >(that_p67373, that_currentChunk, that_t, that_saved_this, that_nextChunk, that_localSize);
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__27(x10_int p67373, x10aux::captured_ref_lval<x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> > currentChunk, org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t, org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* saved_this, x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk, x10::array::Array<x10_int>* localSize) : p67373(p67373), currentChunk(currentChunk), t(t), saved_this(saved_this), nextChunk(nextChunk), localSize(localSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:574-586";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__27_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__28_CLOSURE
#define ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(K), class TPMGL(V)> class org_scalegraph_util_HashMap__closure__28 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int acc67376, x10_int x67377) {
        
        //#line 590 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return ((x10_int) ((acc67376) + (x67377)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) > >();
        buf.record_reference(storage);
        org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >* this_ = new (storage) org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >();
        return this_;
    }
    
    org_scalegraph_util_HashMap__closure__28() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10:590";
    }

};

template<class TPMGL(K), class TPMGL(V)> typename x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::template itable <org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) > >org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >::__apply, &org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__CLOSURE__28_CLOSURE

//#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c

//#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c
/** The actual table, must be of size 2**n */

//#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c
/** Number of non-null, non-removed entries in the table. */

//#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           ) {
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers65457();
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::init(
      org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE__get)());
}
template<class TPMGL(K), class TPMGL(V)> org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_make(
                                           ) {
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)> >(), 0, sizeof(org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>))) org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>();
    this_->_constructor();
    return this_;
}



//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           x10_int sz) {
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers65457();
    
    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int pow2 = org::scalegraph::util::HashMap<void, void>::pow2floor(
                     sz);
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::init(
      x10::lang::Math::max(pow2, org::scalegraph::util::HashMap<void, void>::
                                   FMGL(MIN_SIZE__get)()));
}
template<class TPMGL(K), class TPMGL(V)> org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_make(
                                           x10_int sz) {
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)> >(), 0, sizeof(org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>))) org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>();
    this_->_constructor(sz);
    return this_;
}



//#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::init(
  x10_int init_size) {
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(((x10_int) ((init_size) & (((x10_int) -(init_size))))),
                                                   init_size)));
    #endif//NO_ASSERTIONS
    
    //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((init_size) >= (org::scalegraph::util::HashMap<void, void>::
                                               FMGL(MIN_SIZE__get)())));
    #endif//NO_ASSERTIONS
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                  FMGL(nChunk__get)()) & (((x10_int) -(org::scalegraph::util::HashMap<void, void>::
                                                                                                         FMGL(nChunk__get)()))))),
                                                   org::scalegraph::util::HashMap<void, void>::
                                                     FMGL(nChunk__get)())));
    #endif//NO_ASSERTIONS
    
    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(table) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::_make(((x10_long) (init_size)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(logSize) = 63 - __builtin_clzl(((this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size()) << 1) - 1);
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_int)0);
    
    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(shouldRehash) = false;
}

//#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::clear(
  ) {
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i66654domain67170 = this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::range();
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_long i66654min67171 = i66654domain67170->FMGL(min);
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_long i66654max67172 = i66654domain67170->FMGL(max);
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_long i67173;
        for (
             //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             i67173 = i66654min67171; ((i67173) <= (i66654max67172));
             
             //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
             i67173 = ((x10_long) ((i67173) + (((x10_long)1ll)))))
        {
            
            //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i67174 = i67173;
            
            //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__set(
              i67174, org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>::_make());
        }
    }
    
    //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_int)0);
    
    //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(logSize) = 63 - __builtin_clzl(((this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size()) << 1) - 1);
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(shouldRehash) = false;
}

//#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::size(
  ) {
    
    //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return this->FMGL(size);
    
}

//#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hash(
  TPMGL(K) k) {
    
    //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hashInternal(
             k);
    
}

//#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hashInternal(
  TPMGL(K) k) {
    
    //#line 136 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return ((x10_int) ((x10aux::hash_code(k)) * (((x10_int)200000000))));
    
}

//#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c

//#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10::util::Box<TPMGL(V)>*
  org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::put(
  TPMGL(K) k, TPMGL(V) v) {
    
    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putInternal(
             k, v);
    
}

//#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10::util::Box<TPMGL(V)>*
  org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putInternal(
  TPMGL(K) k, TPMGL(V) v) {
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (this->FMGL(shouldRehash) && ((((x10_long) (this->
                                                     FMGL(size)))) >= (((x10_long) ((this->
                                                                                       FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size()) / x10aux::zeroCheck(((x10_long) (((x10_int)2)))))))))
    {
        
        //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::rehashInternal();
    }
    
    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int h = this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hashInternal(
                  k);
    
    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int sz = this->FMGL(logSize);
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i = org::scalegraph::util::HashMap<void, void>::hashToIndex(
                  h, sz);
    
    //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int cnt = ((x10_int)0);
    
    //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> e =
          this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
            i);
        
        //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(e->FMGL(flag), org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                    FMGL(EMPTY__get)())))
        {
            
            //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (((cnt) > (org::scalegraph::util::HashMap<void, void>::
                            FMGL(MAX_PROBES__get)()))) {
                
                //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(shouldRehash) = true;
            }
            
            //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__set(
              i, org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>::_make(k,
                                                                                      v,
                                                                                      h));
            
            //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* x67175 =
              this;
            
            //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
            ;
            
            //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(x67175)->FMGL(size) = ((x10_int) ((x10aux::nullCheck(x67175)->
                                                                   FMGL(size)) + (((x10_int)1))));
            
            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
            return x10aux::class_cast_unchecked<x10::util::Box<TPMGL(V)>*>(X10_NULL);
            
        } else 
        //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(e->FMGL(hash), h)) && x10aux::equals(k,x10aux::class_cast_unchecked<x10::lang::Any*>(e->
                                                                                                                          FMGL(key))))
        {
            
            //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            TPMGL(V) old = e->FMGL(value);
            
            //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__set(
              i, org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>::_make(e->
                                                                                        FMGL(key),
                                                                                      v,
                                                                                      e->
                                                                                        FMGL(hash)));
            
            //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
            return x10::util::Box<TPMGL(V)>::_make(old);
            
        }
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        cnt = ((x10_int) ((cnt) + (((x10_int)1))));
        
        //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((((x10_int) ((i) + (((x10_int)1))))) % x10aux::zeroCheck(((x10_int) (this->
                                                                                               FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size())))));
    }
    
}

//#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10::util::Box<TPMGL(V)>*
  org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::get(
  TPMGL(K) k) {
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int idx = this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::getEntryIndex(
                    k);
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (((idx) < (((x10_int)0)))) {
        
        //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return x10aux::class_cast_unchecked<x10::util::Box<TPMGL(V)>*>(X10_NULL);
        
    }
    
    //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return x10::util::Box<TPMGL(V)>::_make(this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
                                             idx)->FMGL(value));
    
}

//#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::get(
  TPMGL(K) k, TPMGL(V) defValue) {
    
    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int idx = this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::getEntryIndex(
                    k);
    
    //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (((idx) < (((x10_int)0)))) {
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return defValue;
        
    }
    
    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
             idx)->FMGL(value);
    
}

//#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> org::scalegraph::util::MemoryChunk<TPMGL(V)>
  org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::get(
  org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, TPMGL(V) defValue) {
    
    //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(V)> vs = org::scalegraph::util::MemoryChunk<TPMGL(V) >::_make(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* eachSize = x10::array::Array<x10_long>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                 FMGL(nChunk__get)(),
                                                                               reinterpret_cast<x10::lang::Fun_0_1<x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, x10_long> >(sizeof(org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__1<TPMGL(K),TPMGL(V)>(ks))));
    
    //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* offset = x10::array::Array<x10_long>::_make(((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                                            FMGL(nChunk__get)()) + (((x10_int)1)))));
    
    //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i66671min67184 = ((x10_int)1);
    
    //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i66671max67185 = org::scalegraph::util::HashMap<void, void>::
                               FMGL(nChunk__get)();
    
    //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_int i67186;
        for (
             //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             i67186 = i66671min67184; ((i67186) <= (i66671max67185));
             
             //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
             i67186 = ((x10_int) ((i67186) + (((x10_int)1)))))
        {
            
            //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_int i67187 = i67186;
            
            //#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            offset->x10::array::Array<x10_long>::__set(i67187,
                                                       ((x10_long) ((offset->x10::array::Array<x10_long>::__apply(
                                                                       ((x10_int) ((i67187) - (((x10_int)1)))))) + (eachSize->x10::array::Array<x10_long>::__apply(
                                                                                                                      ((x10_int) ((i67187) - (((x10_int)1)))))))));
        }
    }
    {
        
        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var72 = x10::lang::Runtime::startFinish();
        {
            
            //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable67410 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
            try {
                
                //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i66703min67180 = ((x10_int)0);
                        
                        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i66703max67181 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                FMGL(nChunk__get)()) - (((x10_int)1))));
                        
                        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
                        {
                            x10_int i67182;
                            for (
                                 //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                 i67182 = i66703min67180;
                                 ((i67182) <= (i66703max67181));
                                 
                                 //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                 i67182 = ((x10_int) ((i67182) + (((x10_int)1)))))
                            {
                                
                                //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int p67183 = i67182;
                                
                                //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__2<TPMGL(K),TPMGL(V)>(p67183, offset, eachSize, vs, ks, defValue, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1254) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1254);
                        {
                            
                            //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1255) {
                if (true) {
                    x10::lang::CheckedThrowable* formal67411 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1255);
                    {
                        
                        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable67410 = formal67411;
                    }
                } else
                throw;
            }
            
            //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67410)))
            {
                
                //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable67410))
                {
                    
                    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67410));
                }
                
            }
            
            //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var72);
            }
            
            //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67410)))
            {
                
                //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable67410)))
                {
                    
                    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67410));
                }
                
            }
            
        }
    }
    
    //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return vs;
    
}

//#line 204 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::getOrThrow(
  TPMGL(K) key) {
    
    //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int idx = this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::getEntryIndex(
                    key);
    
    //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (((idx) < (((x10_int)0)))) {
        
        //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::util::NoSuchElementException::_make(x10aux::makeStringLit("Not Found"))));
    }
    
    //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
             idx)->FMGL(value);
    
}

//#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_boolean org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::containsKey(
  TPMGL(K) key) {
    
    //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return ((this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::getEntryIndex(
               key)) >= (((x10_int)0)));
    
}

//#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> org::scalegraph::util::MemoryChunk<TPMGL(K)>
  org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::newKeys(
  org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, TPMGL(V) defValue) {
    
    //#line 215 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (((((x10_long) ((((x10_long) (this->FMGL(size)))) + (ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size())))) >= (((x10_long) ((this->
                                                                                                                                             FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size()) / x10aux::zeroCheck(((x10_long) (((x10_int)2)))))))))
    {
        
        //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::rehashInternal();
    }
    
    //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::_make(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather scatterGather = org::scalegraph::util::ScatterGather::_make(((x10_long) (org::scalegraph::util::HashMap<void, void>::
                                                                                                                    FMGL(nChunk__get)())));
    
    //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__3<TPMGL(K),TPMGL(V)>(scatterGather, ks, this))));
    
    //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::ScatterGather::sum();
    
    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__4<TPMGL(K),TPMGL(V)>(scatterGather, ks, this, chunk))));
    
    //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets =
      scatterGather->org::scalegraph::util::ScatterGather::offsets();
    
    //#line 245 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> counts =
      scatterGather->org::scalegraph::util::ScatterGather::counts();
    
    //#line 249 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* localSize = x10::array::Array<x10_int>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                FMGL(nChunk__get)());
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* currentChunk =
      x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                            FMGL(nChunk__get)(),
                                                                                                                                          reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(sizeof(org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__5<TPMGL(K),TPMGL(V)>())));
    
    //#line 254 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> pushed = org::scalegraph::util::MemoryChunk<x10_int >::_make(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i66753domain67259 = pushed->org::scalegraph::util::MemoryChunk<x10_int>::range();
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_long i66753min67260 = i66753domain67259->FMGL(min);
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_long i66753max67261 = i66753domain67259->FMGL(max);
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_long i67262;
        for (
             //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             i67262 = i66753min67260; ((i67262) <= (i66753max67261));
             
             //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
             i67262 = ((x10_long) ((i67262) + (((x10_long)1ll)))))
        {
            
            //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long i67263 = i67262;
            
            //#line 256 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            pushed->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              i67263, ((x10_int) (((x10_long)-1ll))));
        }
    }
    {
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var73 = x10::lang::Runtime::startFinish();
        {
            
            //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable67413 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
            try {
                
                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i66786min67220 = ((x10_int)0);
                        
                        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i66786max67221 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                FMGL(nChunk__get)()) - (((x10_int)1))));
                        
                        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
                        {
                            x10_int i67222;
                            for (
                                 //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                 i67222 = i66786min67220;
                                 ((i67222) <= (i66786max67221));
                                 
                                 //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                 i67222 = ((x10_int) ((i67222) + (((x10_int)1)))))
                            {
                                
                                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int p67223 = i67222;
                                
                                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__6<TPMGL(K),TPMGL(V)>(p67223, offsets, counts, chunk, ks, defValue, this, &(currentChunk), pushed, localSize))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1260) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1260);
                        {
                            
                            //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1261) {
                if (true) {
                    x10::lang::CheckedThrowable* formal67414 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1261);
                    {
                        
                        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable67413 = formal67414;
                    }
                } else
                throw;
            }
            
            //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67413)))
            {
                
                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable67413))
                {
                    
                    //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67413));
                }
                
            }
            
            //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var73);
            }
            
            //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67413)))
            {
                
                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable67413)))
                {
                    
                    //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67413));
                }
                
            }
            
        }
    }
    
    //#line 277 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_int count;
        for (
             //#line 277 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             count = ((x10_int)0); ((count) < (((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                              FMGL(nChunk__get)()) - (((x10_int)1)))))) &&
                                   !(x10aux::nullCheck(currentChunk)->template reduce<x10_boolean >(
                                       reinterpret_cast<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(sizeof(org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__7<TPMGL(K),TPMGL(V)>())),
                                       true)); 
                                               //#line 279 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                               count = ((x10_int) ((count) + (((x10_int)1)))))
        {
            
            //#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk =
              x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                    FMGL(nChunk__get)(),
                                                                                                                                                  reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(sizeof(org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__8<TPMGL(K),TPMGL(V)>())));
            {
                
                //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var74 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable67416 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int i66819min67236 = ((x10_int)0);
                                
                                //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int i66819max67237 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                        FMGL(nChunk__get)()) - (((x10_int)1))));
                                
                                //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
                                {
                                    x10_int i67238;
                                    for (
                                         //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                         i67238 = i66819min67236;
                                         ((i67238) <= (i66819max67237));
                                         
                                         //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                         i67238 = ((x10_int) ((i67238) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                        x10_int p67239 = i67238;
                                        
                                        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__9<TPMGL(K),TPMGL(V)>(p67239, &(currentChunk), ks, defValue, this, nextChunk, pushed, localSize))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1263) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1263);
                                {
                                    
                                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc1264) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal67417 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1264);
                            {
                                
                                //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable67416 = formal67417;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable67416)))
                    {
                        
                        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable67416))
                        {
                            
                            //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable67416));
                        }
                        
                    }
                    
                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var74);
                    }
                    
                    //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable67416)))
                    {
                        
                        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable67416)))
                        {
                            
                            //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable67416));
                        }
                        
                    }
                    
                }
            }
            
            //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
            currentChunk = nextChunk;
        }
    }
    
    //#line 299 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int dummysize = localSize->template reduce<x10_int >(
                          reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__10<TPMGL(K),TPMGL(V)>())),
                          ((x10_int)0));
    
    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(K)> newKeys =
      org::scalegraph::util::MemoryChunk<TPMGL(K) >::_make(((x10_long) (dummysize)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 303 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* counts2 = x10::array::Array<x10_int>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                              FMGL(nChunk__get)(),
                                                                            ((x10_int)0));
    
    //#line 304 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(pushed->org::scalegraph::util::MemoryChunk<x10_int>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__11<TPMGL(K),TPMGL(V)>(pushed, counts2))));
    
    //#line 311 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* offsets2 = x10::array::Array<x10_int>::_make(((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                                            FMGL(nChunk__get)()) + (((x10_int)1)))),
                                                                             ((x10_int)0));
    
    //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i66852min67264 = ((x10_int)1);
    
    //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i66852max67265 = org::scalegraph::util::HashMap<void, void>::
                               FMGL(nChunk__get)();
    
    //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_int i67266;
        for (
             //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             i67266 = i66852min67264; ((i67266) <= (i66852max67265));
             
             //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
             i67266 = ((x10_int) ((i67266) + (((x10_int)1)))))
        {
            
            //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_int i67267 = i67266;
            
            //#line 313 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            offsets2->x10::array::Array<x10_int>::__set(i67267,
                                                        ((x10_int) ((offsets2->x10::array::Array<x10_int>::__apply(
                                                                       ((x10_int) ((i67267) - (((x10_int)1)))))) + (counts2->x10::array::Array<x10_int>::__apply(
                                                                                                                      ((x10_int) ((i67267) - (((x10_int)1)))))))));
        }
    }
    
    //#line 316 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(pushed->org::scalegraph::util::MemoryChunk<x10_int>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__12<TPMGL(K),TPMGL(V)>(pushed, this, newKeys, offsets2))));
    
    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return newKeys;
    
}

//#line 329 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putDummyLocal(
  x10_int h, x10_int proper_h, TPMGL(K) key, TPMGL(V) value) {
    
    //#line 331 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int currentBits = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                   FMGL(nMaskBits__get)(),
                                                 ((x10_int)0)))
      ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                            h, org::scalegraph::util::HashMap<void, void>::
                                 FMGL(nMaskBits__get)()));
    
    //#line 333 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int sz = this->FMGL(logSize);
    
    //#line 335 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int cur = org::scalegraph::util::HashMap<void, void>::hashToIndex(
                    h, sz);
    
    //#line 336 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int cnt = ((x10_int)0);
    
    //#line 339 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10While_c
    while ((x10aux::struct_equals(((x10_int) ((cur) >> (0x1f & (((x10_int) ((sz) - (org::scalegraph::util::HashMap<void, void>::
                                                                                      FMGL(nMaskBits__get)()))))))),
                                  currentBits))) {
        
        //#line 340 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> e =
          this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
            cur);
        
        //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(e->FMGL(flag), org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                    FMGL(EMPTY__get)())))
        {
            
            //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (((cnt) > (org::scalegraph::util::HashMap<void, void>::
                            FMGL(MAX_PROBES__get)()))) {
                
                //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(shouldRehash) = true;
            }
            
            //#line 346 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__set(
              cur, org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>::_make(key,
                                                                                        value,
                                                                                        proper_h,
                                                                                        org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                                                          FMGL(DUMMY__get)()));
            
            //#line 347 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
            return cur;
            
        } else 
        //#line 348 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(e->FMGL(flag), org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                    FMGL(OCCUPIED__get)())) ||
            (x10aux::struct_equals(e->FMGL(flag), org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                    FMGL(DUMMY__get)())))
        {
            
            //#line 349 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(e->FMGL(key), key)))
            {
                
                //#line 350 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
                return ((x10_int)-1);
                
            }
            
        }
        
        //#line 353 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        cur = ((x10_int) ((((x10_int) ((cur) + (((x10_int)1))))) % x10aux::zeroCheck(((x10_int) (this->
                                                                                                   FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size())))));
        
        //#line 354 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        cnt = ((x10_int) ((cnt) + (((x10_int)1))));
    }
    
    //#line 356 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return ((x10_int)-2);
    
}

//#line 359 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::getEntryIndex(
  TPMGL(K) k) {
    
    //#line 360 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(this->FMGL(size), ((x10_int)0))))
    {
        
        //#line 361 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return ((x10_int)-1);
        
    }
    
    //#line 367 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int h = this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::hash(
                  k);
    
    //#line 368 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int sz = this->FMGL(logSize);
    
    //#line 370 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i = org::scalegraph::util::HashMap<void, void>::hashToIndex(
                  h, sz);
    
    //#line 371 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int cnt = ((x10_int)0);
    
    //#line 373 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 374 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> e =
          this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
            i);
        
        //#line 375 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(e->FMGL(flag), org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                    FMGL(EMPTY__get)())))
        {
            
            //#line 376 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (((cnt) > (org::scalegraph::util::HashMap<void, void>::
                            FMGL(MAX_PROBES__get)()))) {
                
                //#line 377 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(shouldRehash) = true;
            }
            
            //#line 378 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
            return ((x10_int)-1);
            
        }
        
        //#line 380 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(e->FMGL(flag), org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                    FMGL(OCCUPIED__get)())))
        {
            
            //#line 381 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(e->FMGL(hash), h)) &&
                x10aux::equals(k,x10aux::class_cast_unchecked<x10::lang::Any*>(e->
                                                                                 FMGL(key))))
            {
                
                //#line 382 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (((cnt) > (org::scalegraph::util::HashMap<void, void>::
                                FMGL(MAX_PROBES__get)())))
                {
                    
                    //#line 383 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
                    this->FMGL(shouldRehash) = true;
                }
                
                //#line 384 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
                return i;
                
            }
            
            //#line 386 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (((((x10_long) (cnt))) > (this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size())))
            {
                
                //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (((cnt) > (org::scalegraph::util::HashMap<void, void>::
                                FMGL(MAX_PROBES__get)())))
                {
                    
                    //#line 388 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
                    this->FMGL(shouldRehash) = true;
                }
                
                //#line 389 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
                return ((x10_int)-1);
                
            }
            
        }
        
        //#line 392 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((((x10_int) ((i) + (((x10_int)1))))) % x10aux::zeroCheck(((x10_int) (this->
                                                                                               FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size())))));
        
        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        cnt = ((x10_int) ((cnt) + (((x10_int)1))));
    }
    
}

//#line 397 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::put(
  org::scalegraph::util::MemoryChunk<TPMGL(K)> ks, org::scalegraph::util::MemoryChunk<TPMGL(V)> vs) {
    
    //#line 398 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (((((x10_long) ((((x10_long) (this->FMGL(size)))) + (ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size())))) >= (((x10_long) ((this->
                                                                                                                                             FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size()) / x10aux::zeroCheck(((x10_long) (((x10_int)2)))))))))
    {
        
        //#line 399 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::rehashInternal();
    }
    
    //#line 401 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size(),
                                                   vs->org::scalegraph::util::MemoryChunk<TPMGL(V)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 402 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::_make(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 404 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather scatterGather = org::scalegraph::util::ScatterGather::_make(((x10_long) (org::scalegraph::util::HashMap<void, void>::
                                                                                                                    FMGL(nChunk__get)())));
    
    //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__13<TPMGL(K),TPMGL(V)>(scatterGather, ks, this))));
    
    //#line 413 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::ScatterGather::sum();
    
    //#line 416 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(ks->org::scalegraph::util::MemoryChunk<TPMGL(K)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__14<TPMGL(K),TPMGL(V)>(scatterGather, ks, vs, this, chunk))));
    
    //#line 428 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets =
      scatterGather->org::scalegraph::util::ScatterGather::offsets();
    
    //#line 429 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> counts =
      scatterGather->org::scalegraph::util::ScatterGather::counts();
    
    //#line 432 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* localSize = x10::array::Array<x10_int>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                FMGL(nChunk__get)());
    
    //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* currentChunk =
      x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                            FMGL(nChunk__get)(),
                                                                                                                                          reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(sizeof(org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__15<TPMGL(K),TPMGL(V)>())));
    {
        
        //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var75 = x10::lang::Runtime::startFinish();
        {
            
            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable67419 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
            try {
                
                //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i66935min67300 = ((x10_int)0);
                        
                        //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i66935max67301 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                FMGL(nChunk__get)()) - (((x10_int)1))));
                        
                        //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
                        {
                            x10_int i67302;
                            for (
                                 //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                 i67302 = i66935min67300;
                                 ((i67302) <= (i66935max67301));
                                 
                                 //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                 i67302 = ((x10_int) ((i67302) + (((x10_int)1)))))
                            {
                                
                                //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int p67303 = i67302;
                                
                                //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__16<TPMGL(K),TPMGL(V)>(p67303, offsets, counts, chunk, ks, vs, this, &(currentChunk), localSize))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1269) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1269);
                        {
                            
                            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1270) {
                if (true) {
                    x10::lang::CheckedThrowable* formal67420 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1270);
                    {
                        
                        //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable67419 = formal67420;
                    }
                } else
                throw;
            }
            
            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67419)))
            {
                
                //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable67419))
                {
                    
                    //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67419));
                }
                
            }
            
            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var75);
            }
            
            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67419)))
            {
                
                //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable67419)))
                {
                    
                    //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67419));
                }
                
            }
            
        }
    }
    
    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_int count;
        for (
             //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             count = ((x10_int)0); ((count) < (((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                              FMGL(nChunk__get)()) - (((x10_int)1)))))) &&
                                   !(x10aux::nullCheck(currentChunk)->template reduce<x10_boolean >(
                                       reinterpret_cast<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(sizeof(org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__17<TPMGL(K),TPMGL(V)>())),
                                       true)); 
                                               //#line 456 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                               count = ((x10_int) ((count) + (((x10_int)1)))))
        {
            
            //#line 457 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk =
              x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                    FMGL(nChunk__get)(),
                                                                                                                                                  reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(sizeof(org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__18<TPMGL(K),TPMGL(V)>())));
            {
                
                //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var76 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable67422 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int i66968min67315 = ((x10_int)0);
                                
                                //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int i66968max67316 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                        FMGL(nChunk__get)()) - (((x10_int)1))));
                                
                                //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
                                {
                                    x10_int i67317;
                                    for (
                                         //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                         i67317 = i66968min67315;
                                         ((i67317) <= (i66968max67316));
                                         
                                         //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                         i67317 = ((x10_int) ((i67317) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                        x10_int p67318 = i67317;
                                        
                                        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__19<TPMGL(K),TPMGL(V)>(p67318, &(currentChunk), ks, vs, this, nextChunk, localSize))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1272) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1272);
                                {
                                    
                                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc1273) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal67423 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1273);
                            {
                                
                                //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable67422 = formal67423;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable67422)))
                    {
                        
                        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable67422))
                        {
                            
                            //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable67422));
                        }
                        
                    }
                    
                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var76);
                    }
                    
                    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable67422)))
                    {
                        
                        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable67422)))
                        {
                            
                            //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable67422));
                        }
                        
                    }
                    
                }
            }
            
            //#line 472 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
            currentChunk = nextChunk;
        }
    }
    
    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* x67319 =
      this;
    
    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int y67320 = localSize->template reduce<x10_int >(
                       reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__20<TPMGL(K),TPMGL(V)>())),
                       ((x10_int)0));
    
    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x67319)->FMGL(size) = ((x10_int) ((x10aux::nullCheck(x67319)->
                                                           FMGL(size)) + (y67320)));
}

//#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_boolean org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::putLocal(
  x10_int h, x10_int proper_h, TPMGL(K) key, TPMGL(V) value) {
    
    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int currentBits = (x10aux::struct_equals(org::scalegraph::util::HashMap<void, void>::
                                                   FMGL(nMaskBits__get)(),
                                                 ((x10_int)0)))
      ? (((x10_int)0)) : (org::scalegraph::util::HashMap<void, void>::hashToIndex(
                            h, org::scalegraph::util::HashMap<void, void>::
                                 FMGL(nMaskBits__get)()));
    
    //#line 481 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int sz = this->FMGL(logSize);
    
    //#line 483 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int cur = org::scalegraph::util::HashMap<void, void>::hashToIndex(
                    h, sz);
    
    //#line 484 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int cnt = ((x10_int)0);
    
    //#line 487 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10While_c
    while ((x10aux::struct_equals(((x10_int) ((cur) >> (0x1f & (((x10_int) ((sz) - (org::scalegraph::util::HashMap<void, void>::
                                                                                      FMGL(nMaskBits__get)()))))))),
                                  currentBits))) {
        
        //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> e =
          this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__apply(
            cur);
        
        //#line 490 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(e->FMGL(flag), org::scalegraph::util::HashMap__HashEntry<void, void>::
                                                    FMGL(EMPTY__get)())))
        {
            
            //#line 491 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (((cnt) > (org::scalegraph::util::HashMap<void, void>::
                            FMGL(MAX_PROBES__get)()))) {
                
                //#line 492 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(shouldRehash) = true;
            }
            
            //#line 494 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::__set(
              cur, org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>::_make(key,
                                                                                        value,
                                                                                        proper_h));
            
            //#line 495 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
            return true;
            
        }
        
        //#line 497 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        cur = ((x10_int) ((((x10_int) ((cur) + (((x10_int)1))))) % x10aux::zeroCheck(((x10_int) (this->
                                                                                                   FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size())))));
        
        //#line 498 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
        cnt = ((x10_int) ((cnt) + (((x10_int)1))));
    }
    
    //#line 500 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::rehash(
  ) {
    
    //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::rehashInternal();
}

//#line 504 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::rehashInternal(
  ) {
    
    //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > t =
      this->FMGL(table);
    
    //#line 506 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int oldSize = this->FMGL(size);
    
    //#line 507 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_int)0);
    
    //#line 508 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(table) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::_make(((x10_long) ((t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size()) * (((x10_long) (((x10_int)2)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 509 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(logSize) = 63 - __builtin_clzl(((this->FMGL(table)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::size()) << 1) - 1);
    
    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather scatterGather = org::scalegraph::util::ScatterGather::_make(((x10_long) (org::scalegraph::util::HashMap<void, void>::
                                                                                                                    FMGL(nChunk__get)())));
    
    //#line 513 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__21<TPMGL(K),TPMGL(V)>(scatterGather, t))));
    
    //#line 524 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::ScatterGather::sum();
    
    //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> > chunk =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::Pair<x10_int, x10_long> >::_make(scatterGather->org::scalegraph::util::ScatterGather::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 529 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(t->org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> >::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__22<TPMGL(K),TPMGL(V)>(scatterGather, t, chunk))));
    
    //#line 542 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets =
      scatterGather->org::scalegraph::util::ScatterGather::offsets();
    
    //#line 543 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> counts =
      scatterGather->org::scalegraph::util::ScatterGather::counts();
    
    //#line 546 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* localSize = x10::array::Array<x10_int>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                FMGL(nChunk__get)());
    
    //#line 547 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* currentChunk =
      x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                            FMGL(nChunk__get)(),
                                                                                                                                          reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(sizeof(org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__23<TPMGL(K),TPMGL(V)>())));
    {
        
        //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var77 = x10::lang::Runtime::startFinish();
        {
            
            //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable67425 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
            try {
                
                //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i67034min67355 = ((x10_int)0);
                        
                        //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int i67034max67356 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                FMGL(nChunk__get)()) - (((x10_int)1))));
                        
                        //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
                        {
                            x10_int i67357;
                            for (
                                 //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                 i67357 = i67034min67355;
                                 ((i67357) <= (i67034max67356));
                                 
                                 //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                 i67357 = ((x10_int) ((i67357) + (((x10_int)1)))))
                            {
                                
                                //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int p67358 = i67357;
                                
                                //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__24<TPMGL(K),TPMGL(V)>(p67358, offsets, counts, chunk, t, this, &(currentChunk), localSize))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1278) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1278);
                        {
                            
                            //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1279) {
                if (true) {
                    x10::lang::CheckedThrowable* formal67426 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1279);
                    {
                        
                        //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable67425 = formal67426;
                    }
                } else
                throw;
            }
            
            //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67425)))
            {
                
                //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable67425))
                {
                    
                    //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67425));
                }
                
            }
            
            //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var77);
            }
            
            //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable67425)))
            {
                
                //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable67425)))
                {
                    
                    //#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable67425));
                }
                
            }
            
        }
    }
    
    //#line 569 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_int count;
        for (
             //#line 569 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             count = ((x10_int)0); ((count) < (((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                              FMGL(nChunk__get)()) - (((x10_int)1)))))) &&
                                   !(x10aux::nullCheck(currentChunk)->template reduce<x10_boolean >(
                                       reinterpret_cast<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_boolean, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*, x10_boolean> >(sizeof(org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__25<TPMGL(K),TPMGL(V)>())),
                                       true)); 
                                               //#line 571 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                               count = ((x10_int) ((count) + (((x10_int)1)))))
        {
            
            //#line 572 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>* nextChunk =
              x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::_make(org::scalegraph::util::HashMap<void, void>::
                                                                                                                                                    FMGL(nChunk__get)(),
                                                                                                                                                  reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*> >(sizeof(org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__26<TPMGL(K),TPMGL(V)>())));
            {
                
                //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var78 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable67428 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int i67067min67370 = ((x10_int)0);
                                
                                //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                x10_int i67067max67371 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                                                        FMGL(nChunk__get)()) - (((x10_int)1))));
                                
                                //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
                                {
                                    x10_int i67372;
                                    for (
                                         //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                         i67372 = i67067min67370;
                                         ((i67372) <= (i67067max67371));
                                         
                                         //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                         i67372 = ((x10_int) ((i67372) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                        x10_int p67373 = i67372;
                                        
                                        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__27<TPMGL(K),TPMGL(V)>(p67373, &(currentChunk), t, this, nextChunk, localSize))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1281) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1281);
                                {
                                    
                                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc1282) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal67429 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1282);
                            {
                                
                                //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable67428 = formal67429;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable67428)))
                    {
                        
                        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable67428))
                        {
                            
                            //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable67428));
                        }
                        
                    }
                    
                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var78);
                    }
                    
                    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable67428)))
                    {
                        
                        //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable67428)))
                        {
                            
                            //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable67428));
                        }
                        
                    }
                    
                }
            }
            
            //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
            currentChunk = nextChunk;
        }
    }
    
    //#line 590 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* x67374 =
      this;
    
    //#line 590 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int y67375 = localSize->template reduce<x10_int >(
                       reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V)>)))org_scalegraph_util_HashMap__closure__28<TPMGL(K),TPMGL(V)>())),
                       ((x10_int)0));
    
    //#line 590 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x67374)->FMGL(size) = ((x10_int) ((x10aux::nullCheck(x67374)->
                                                           FMGL(size)) + (y67375)));
    
    //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i67083min67378 = ((x10_int)0);
    
    //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int i67083max67379 = ((x10_int) ((org::scalegraph::util::HashMap<void, void>::
                                            FMGL(nChunk__get)()) - (((x10_int)1))));
    
    //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.For_c
    {
        x10_int i67380;
        for (
             //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
             i67380 = i67083min67378; ((i67380) <= (i67083max67379));
             
             //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
             i67380 = ((x10_int) ((i67380) + (((x10_int)1)))))
        {
            
            //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_int p67381 = i67380;
            
            //#line 593 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(currentChunk)->x10::array::Array<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >*>::__apply(
                                                                               p67381))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple3<x10_int, x10_long, x10_int> >::size(),
                                                           ((x10_long)0ll))));
            #endif//NO_ASSERTIONS
            
        }
    }
    
    //#line 595 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(this->
                                                     FMGL(size),
                                                   oldSize)));
    #endif//NO_ASSERTIONS
    
}

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>*
  org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::org__scalegraph__util__HashMap____this__org__scalegraph__util__HashMap(
  ) {
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers65457(
  ) {
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(table) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > >();
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_int)0);
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(logSize) = ((x10_int)0);
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(shouldRehash) = false;
}
template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(table));
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(logSize));
    buf.write(this->FMGL(shouldRehash));
    
}

template<class TPMGL(K), class TPMGL(V)> x10::lang::Reference* org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)> >(), 0, sizeof(org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>))) org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(K), class TPMGL(V)> void org::scalegraph::util::HashMap<TPMGL(K), TPMGL(V)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(table) = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)> > >();
    FMGL(size) = buf.read<x10_int>();
    FMGL(logSize) = buf.read<x10_int>();
    FMGL(shouldRehash) = buf.read<x10_boolean>();
    
}

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_HASHMAP_H_NODEPS

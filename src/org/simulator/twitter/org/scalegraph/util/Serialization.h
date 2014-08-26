#ifndef __ORG_SCALEGRAPH_UTIL_SERIALIZATION_H
#define __ORG_SCALEGRAPH_UTIL_SERIALIZATION_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Runtime;
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
namespace org { namespace scalegraph { namespace util { 

class Serialization : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static x10_boolean needToSerialize();
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<x10_byte>
      serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data, x10_int data_offset,
                x10_int data_count);
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<x10_byte>
      serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data,
                org::scalegraph::util::MemoryChunk<x10_int> data_offsets,
                org::scalegraph::util::MemoryChunk<x10_int> data_counts,
                org::scalegraph::util::MemoryChunk<x10_int> ser_offsets,
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts);
    template<class TPMGL(T)> static void deserialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data,
                                                     x10_int data_offset,
                                                     x10_int data_count,
                                                     org::scalegraph::util::MemoryChunk<x10_byte> deser_data,
                                                     x10_int deser_offset,
                                                     x10_int deser_count);
    template<class TPMGL(T)> static void deserialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data,
                                                     org::scalegraph::util::MemoryChunk<x10_int> data_offsets,
                                                     org::scalegraph::util::MemoryChunk<x10_int> data_counts,
                                                     org::scalegraph::util::MemoryChunk<x10_byte> deser_data,
                                                     org::scalegraph::util::MemoryChunk<x10_int> deser_offsets,
                                                     org::scalegraph::util::MemoryChunk<x10_int> deser_counts);
    virtual org::scalegraph::util::Serialization* org__scalegraph__util__Serialization____this__org__scalegraph__util__Serialization(
      );
    void _constructor();
    
    static org::scalegraph::util::Serialization* _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H

namespace org { namespace scalegraph { namespace util { 
class Serialization;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_NODEPS
#include <x10/lang/Long.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Serialization__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Serialization__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
        try {
            
            //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
            ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              p69305, x10aux::count_ser_size<TPMGL(T) >((data)->pointer() , data_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                              p69305), data_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                         p69305)));
            
            //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
            ser_size = ((x10_int) ((ser_size) + (ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   p69305))));
        }
        catch (x10::lang::CheckedThrowable* __exc1407) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1407)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1407);
                {
                    
                    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1407);
                {
                    
                    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> ser_counts;
    x10_long p69305;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> data;
    org::scalegraph::util::MemoryChunk<x10_int> data_offsets;
    org::scalegraph::util::MemoryChunk<x10_int> data_counts;
    x10aux::captured_struct_lval<x10_int> ser_size;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_counts);
        buf.write(this->p69305);
        buf.write(this->data);
        buf.write(this->data_offsets);
        buf.write(this->data_counts);
        buf.write(this->ser_size);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Serialization__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Serialization__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_ser_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10_long that_p69305 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_data = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10aux::captured_struct_lval<x10_int> that_ser_size = buf.read<x10aux::captured_struct_lval<x10_int> >();
        org_scalegraph_util_Serialization__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Serialization__closure__1<TPMGL(T) >(that_ser_counts, that_p69305, that_data, that_data_offsets, that_data_counts, that_ser_size);
        return this_;
    }
    
    org_scalegraph_util_Serialization__closure__1(org::scalegraph::util::MemoryChunk<x10_int> ser_counts, x10_long p69305, org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets, org::scalegraph::util::MemoryChunk<x10_int> data_counts, x10aux::captured_struct_lval<x10_int> ser_size) : ser_counts(ser_counts), p69305(p69305), data(data), data_offsets(data_offsets), data_counts(data_counts), ser_size(ser_size) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10:44-47";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Serialization__closure__1<TPMGL(T) > >org_scalegraph_util_Serialization__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Serialization__closure__1<TPMGL(T) >::__apply, &org_scalegraph_util_Serialization__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Serialization__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Serialization__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Serialization__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Serialization__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Serialization__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Serialization__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
        try {
            
            //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
            x10aux::write_ser_data<TPMGL(T) >((data)->pointer() , data_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                    p69309), data_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                               p69309), (ser_data)->pointer(), ser_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                                 p69309), ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                                            p69309));
        }
        catch (x10::lang::CheckedThrowable* __exc1410) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1410)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1410);
                {
                    
                    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1410);
                {
                    
                    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long p69309;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> data;
    org::scalegraph::util::MemoryChunk<x10_int> data_offsets;
    org::scalegraph::util::MemoryChunk<x10_int> data_counts;
    org::scalegraph::util::MemoryChunk<x10_byte> ser_data;
    org::scalegraph::util::MemoryChunk<x10_int> ser_offsets;
    org::scalegraph::util::MemoryChunk<x10_int> ser_counts;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p69309);
        buf.write(this->data);
        buf.write(this->data_offsets);
        buf.write(this->data_counts);
        buf.write(this->ser_data);
        buf.write(this->ser_offsets);
        buf.write(this->ser_counts);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Serialization__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Serialization__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_p69309 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_data = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_data = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_ser_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_ser_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Serialization__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Serialization__closure__2<TPMGL(T) >(that_p69309, that_data, that_data_offsets, that_data_counts, that_ser_data, that_ser_offsets, that_ser_counts);
        return this_;
    }
    
    org_scalegraph_util_Serialization__closure__2(x10_long p69309, org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets, org::scalegraph::util::MemoryChunk<x10_int> data_counts, org::scalegraph::util::MemoryChunk<x10_byte> ser_data, org::scalegraph::util::MemoryChunk<x10_int> ser_offsets, org::scalegraph::util::MemoryChunk<x10_int> ser_counts) : p69309(p69309), data(data), data_offsets(data_offsets), data_counts(data_counts), ser_data(ser_data), ser_offsets(ser_offsets), ser_counts(ser_counts) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10:52-54";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Serialization__closure__2<TPMGL(T) > >org_scalegraph_util_Serialization__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Serialization__closure__2<TPMGL(T) >::__apply, &org_scalegraph_util_Serialization__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Serialization__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Serialization__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Serialization__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Serialization__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Serialization__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Serialization__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
        try {
            
            //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
            x10aux::read_deser_data<TPMGL(T) >((data)->pointer(), data_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                    p69317), data_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                               p69317), (deser_data)->pointer(), deser_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                                   p69317), deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                                              p69317));
        }
        catch (x10::lang::CheckedThrowable* __exc1415) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1415)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1415);
                {
                    
                    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1415);
                {
                    
                    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long p69317;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> data;
    org::scalegraph::util::MemoryChunk<x10_int> data_offsets;
    org::scalegraph::util::MemoryChunk<x10_int> data_counts;
    org::scalegraph::util::MemoryChunk<x10_byte> deser_data;
    org::scalegraph::util::MemoryChunk<x10_int> deser_offsets;
    org::scalegraph::util::MemoryChunk<x10_int> deser_counts;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p69317);
        buf.write(this->data);
        buf.write(this->data_offsets);
        buf.write(this->data_counts);
        buf.write(this->deser_data);
        buf.write(this->deser_offsets);
        buf.write(this->deser_counts);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Serialization__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Serialization__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_p69317 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_data = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_byte> that_deser_data = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_deser_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_deser_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Serialization__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Serialization__closure__3<TPMGL(T) >(that_p69317, that_data, that_data_offsets, that_data_counts, that_deser_data, that_deser_offsets, that_deser_counts);
        return this_;
    }
    
    org_scalegraph_util_Serialization__closure__3(x10_long p69317, org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets, org::scalegraph::util::MemoryChunk<x10_int> data_counts, org::scalegraph::util::MemoryChunk<x10_byte> deser_data, org::scalegraph::util::MemoryChunk<x10_int> deser_offsets, org::scalegraph::util::MemoryChunk<x10_int> deser_counts) : p69317(p69317), data(data), data_offsets(data_offsets), data_counts(data_counts), deser_data(deser_data), deser_offsets(deser_offsets), deser_counts(deser_counts) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10:67-69";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Serialization__closure__3<TPMGL(T) > >org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::__apply, &org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_needToSerialize_1404
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_needToSerialize_1404
template<class TPMGL(T)> x10_boolean org::scalegraph::util::Serialization::needToSerialize(
  ) {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10Return_c
    return false;
    
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_needToSerialize_1404
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1405
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1405
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_byte>
  org::scalegraph::util::Serialization::serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data,
                                                  x10_int data_offset,
                                                  x10_int data_count) {
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_int ser_count = x10aux::count_ser_size<TPMGL(T) >((data)->pointer() , data_offset, data_count);
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> ser_data =
      org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (ser_count)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
    x10aux::write_ser_data<TPMGL(T) >((data)->pointer() , data_offset, data_count, (ser_data)->pointer(), ((x10_int)0), ser_count);
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10Return_c
    return ser_data;
    
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1405
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1406
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1406
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_byte>
  org::scalegraph::util::Serialization::serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data,
                                                  org::scalegraph::util::MemoryChunk<x10_int> data_offsets,
                                                  org::scalegraph::util::MemoryChunk<x10_int> data_counts,
                                                  org::scalegraph::util::MemoryChunk<x10_int> ser_offsets,
                                                  org::scalegraph::util::MemoryChunk<x10_int> ser_counts) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long places = data_counts->org::scalegraph::util::MemoryChunk<x10_int>::size();
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_int ser_size = ((x10_int)0);
    {
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var79 = x10::lang::Runtime::startFinish();
        {
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable69330 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
            try {
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i69239min69302 = ((x10_long) (((x10_int)0)));
                        
                        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i69239max69303 = ((x10_long) ((places) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
                        {
                            x10_long i69304;
                            for (
                                 //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                 i69304 = i69239min69302;
                                 ((i69304) <= (i69239max69303));
                                 
                                 //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                                 i69304 = ((x10_long) ((i69304) + (((x10_long)1ll)))))
                            {
                                
                                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                x10_long p69305 = i69304;
                                
                                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Serialization__closure__1<TPMGL(T)>)))org_scalegraph_util_Serialization__closure__1<TPMGL(T)>(ser_counts, p69305, data, data_offsets, data_counts, &(ser_size)))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1408) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1408);
                        {
                            
                            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1409) {
                if (true) {
                    x10::lang::CheckedThrowable* formal69331 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1409);
                    {
                        
                        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable69330 = formal69331;
                    }
                } else
                throw;
            }
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable69330)))
            {
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable69330))
                {
                    
                    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable69330));
                }
                
            }
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var79);
            }
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable69330)))
            {
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable69330)))
                {
                    
                    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable69330));
                }
                
            }
            
        }
    }
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
    ser_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), ((x10_int)0));
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long i69255min69310 = ((x10_long) (((x10_int)0)));
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long i69255max69311 = ((x10_long) ((places) - (((x10_long) (((x10_int)2))))));
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
    {
        x10_long i69312;
        for (
             //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
             i69312 = i69255min69310; ((i69312) <= (i69255max69311));
             
             //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
             i69312 = ((x10_long) ((i69312) + (((x10_long)1ll)))))
        {
            
            //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10_long i69313 = i69312;
            
            //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
            ser_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_long) ((i69313) + (((x10_long) (((x10_int)1)))))),
              ((x10_int) ((ser_offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                             i69313)) + (ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                           i69313)))));
        }
    }
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> ser_data =
      org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (ser_size)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var80 = x10::lang::Runtime::startFinish();
        {
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable69333 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
            try {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i69271min69306 = ((x10_long) (((x10_int)0)));
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i69271max69307 = ((x10_long) ((places) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
                        {
                            x10_long i69308;
                            for (
                                 //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                 i69308 = i69271min69306;
                                 ((i69308) <= (i69271max69307));
                                 
                                 //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                                 i69308 = ((x10_long) ((i69308) + (((x10_long)1ll)))))
                            {
                                
                                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                x10_long p69309 = i69308;
                                
                                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Serialization__closure__2<TPMGL(T)>)))org_scalegraph_util_Serialization__closure__2<TPMGL(T)>(p69309, data, data_offsets, data_counts, ser_data, ser_offsets, ser_counts))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1411) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1411);
                        {
                            
                            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1412) {
                if (true) {
                    x10::lang::CheckedThrowable* formal69334 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1412);
                    {
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable69333 = formal69334;
                    }
                } else
                throw;
            }
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable69333)))
            {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable69333))
                {
                    
                    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable69333));
                }
                
            }
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var80);
            }
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable69333)))
            {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable69333)))
                {
                    
                    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable69333));
                }
                
            }
            
        }
    }
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10Return_c
    return ser_data;
    
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1406
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1413
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1413
template<class TPMGL(T)> void org::scalegraph::util::Serialization::deserialize(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> data, x10_int data_offset,
  x10_int data_count, org::scalegraph::util::MemoryChunk<x10_byte> deser_data,
  x10_int deser_offset, x10_int deser_count) {
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
    x10aux::read_deser_data<TPMGL(T) >((data)->pointer(), data_offset, data_count, (deser_data)->pointer(), deser_offset, deser_count);
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1413
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1414
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1414
template<class TPMGL(T)> void org::scalegraph::util::Serialization::deserialize(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets,
  org::scalegraph::util::MemoryChunk<x10_int> data_counts,
  org::scalegraph::util::MemoryChunk<x10_byte> deser_data,
  org::scalegraph::util::MemoryChunk<x10_int> deser_offsets,
  org::scalegraph::util::MemoryChunk<x10_int> deser_counts) {
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long places = data_counts->org::scalegraph::util::MemoryChunk<x10_int>::size();
    {
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var81 = x10::lang::Runtime::startFinish();
        {
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable69336 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
            try {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i69287min69314 = ((x10_long) (((x10_int)0)));
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i69287max69315 = ((x10_long) ((places) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
                        {
                            x10_long i69316;
                            for (
                                 //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                 i69316 = i69287min69314;
                                 ((i69316) <= (i69287max69315));
                                 
                                 //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                                 i69316 = ((x10_long) ((i69316) + (((x10_long)1ll)))))
                            {
                                
                                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                x10_long p69317 = i69316;
                                
                                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Serialization__closure__3<TPMGL(T)>)))org_scalegraph_util_Serialization__closure__3<TPMGL(T)>(p69317, data, data_offsets, data_counts, deser_data, deser_offsets, deser_counts))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1416) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1416);
                        {
                            
                            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1417) {
                if (true) {
                    x10::lang::CheckedThrowable* formal69337 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1417);
                    {
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable69336 = formal69337;
                    }
                } else
                throw;
            }
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable69336)))
            {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable69336))
                {
                    
                    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable69336));
                }
                
            }
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var81);
            }
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable69336)))
            {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable69336)))
                {
                    
                    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable69336));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1414
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_NODEPS

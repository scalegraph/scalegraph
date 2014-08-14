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
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace lang { 
class Place;
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
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
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
#include <org/scalegraph/util/MemoryChunkData.h>
#include <org/scalegraph/util/StopWatch.h>
#include <org/scalegraph/Config.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
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
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
        try {
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index135797 = p135809;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value135798 = x10aux::count_ser_size<TPMGL(T) >((data)->pointer() , (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135799 = p135809;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135800;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((data_offsets->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135799) < (((x10_long) (((x10_int)0))))) ||
                        ((index135799) >= (data_offsets->FMGL(data)->FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135799), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135800 = (data_offsets->FMGL(data))[index135799];
                ret135800;
            }))
            , (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135801 = p135809;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135802;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((data_counts->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135801) < (((x10_long) (((x10_int)0))))) ||
                        ((index135801) >= (data_counts->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135801), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135802 = (data_counts->FMGL(data))[index135801];
                ret135802;
            }))
            );
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret135803;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((ser_counts->FMGL(data)).isValid())) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index135797) < (((x10_long) (((x10_int)0))))) ||
                    ((index135797) >= (ser_counts->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135797), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (ser_counts->FMGL(data)).set(index135797, value135798);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret135803 = value135798;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret135803;
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
            ser_size = ((x10_int) ((ser_size) + ((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135804 = p135809;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135805;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((ser_counts->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135804) < (((x10_long) (((x10_int)0))))) ||
                        ((index135804) >= (ser_counts->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135804), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135805 = (ser_counts->FMGL(data))[index135804];
                ret135805;
            }))
            )));
        }
        catch (x10::lang::CheckedThrowable* __exc1810) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1810)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1810);
                {
                    
                    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1810);
                {
                    
                    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long p135809;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> data;
    org::scalegraph::util::MemoryChunk<x10_int> data_offsets;
    org::scalegraph::util::MemoryChunk<x10_int> data_counts;
    org::scalegraph::util::MemoryChunk<x10_int> ser_counts;
    x10aux::captured_struct_lval<x10_int> ser_size;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->p135809);
        buf.write(this->data);
        buf.write(this->data_offsets);
        buf.write(this->data_counts);
        buf.write(this->ser_counts);
        buf.write(this->ser_size);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Serialization__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Serialization__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_p135809 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_data = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_ser_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10aux::captured_struct_lval<x10_int> that_ser_size = buf.read<x10aux::captured_struct_lval<x10_int> >();
        org_scalegraph_util_Serialization__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Serialization__closure__1<TPMGL(T) >(that_p135809, that_data, that_data_offsets, that_data_counts, that_ser_counts, that_ser_size);
        return this_;
    }
    
    org_scalegraph_util_Serialization__closure__1(x10_long p135809, org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets, org::scalegraph::util::MemoryChunk<x10_int> data_counts, org::scalegraph::util::MemoryChunk<x10_int> ser_counts, x10aux::captured_struct_lval<x10_int> ser_size) : p135809(p135809), data(data), data_offsets(data_offsets), data_counts(data_counts), ser_counts(ser_counts), ser_size(ser_size) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10:46-49";
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
        
        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
        try {
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
            x10aux::write_ser_data<TPMGL(T) >((data)->pointer() , (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135817 = p135828;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135818;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((data_offsets->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135817) < (((x10_long) (((x10_int)0))))) ||
                        ((index135817) >= (data_offsets->FMGL(data)->FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135817), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135818 = (data_offsets->FMGL(data))[index135817];
                ret135818;
            }))
            , (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135819 = p135828;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135820;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((data_counts->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135819) < (((x10_long) (((x10_int)0))))) ||
                        ((index135819) >= (data_counts->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135819), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135820 = (data_counts->FMGL(data))[index135819];
                ret135820;
            }))
            , (ser_data)->pointer(), (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135821 = p135828;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135822;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((ser_offsets->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135821) < (((x10_long) (((x10_int)0))))) ||
                        ((index135821) >= (ser_offsets->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135821), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135822 = (ser_offsets->FMGL(data))[index135821];
                ret135822;
            }))
            , (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135823 = p135828;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135824;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((ser_counts->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135823) < (((x10_long) (((x10_int)0))))) ||
                        ((index135823) >= (ser_counts->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135823), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135824 = (ser_counts->FMGL(data))[index135823];
                ret135824;
            }))
            );
        }
        catch (x10::lang::CheckedThrowable* __exc1813) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1813)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1813);
                {
                    
                    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1813);
                {
                    
                    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long p135828;
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
        buf.write(this->p135828);
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
        x10_long that_p135828 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_data = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_data = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_ser_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_ser_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Serialization__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Serialization__closure__2<TPMGL(T) >(that_p135828, that_data, that_data_offsets, that_data_counts, that_ser_data, that_ser_offsets, that_ser_counts);
        return this_;
    }
    
    org_scalegraph_util_Serialization__closure__2(x10_long p135828, org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets, org::scalegraph::util::MemoryChunk<x10_int> data_counts, org::scalegraph::util::MemoryChunk<x10_byte> ser_data, org::scalegraph::util::MemoryChunk<x10_int> ser_offsets, org::scalegraph::util::MemoryChunk<x10_int> ser_counts) : p135828(p135828), data(data), data_offsets(data_offsets), data_counts(data_counts), ser_data(ser_data), ser_offsets(ser_offsets), ser_counts(ser_counts) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10:56-58";
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
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
        try {
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
            x10aux::read_deser_data<TPMGL(T) >((data)->pointer(), (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135834 = p135845;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135835;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((data_offsets->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135834) < (((x10_long) (((x10_int)0))))) ||
                        ((index135834) >= (data_offsets->FMGL(data)->FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135834), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135835 = (data_offsets->FMGL(data))[index135834];
                ret135835;
            }))
            , (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135836 = p135845;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135837;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((data_counts->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135836) < (((x10_long) (((x10_int)0))))) ||
                        ((index135836) >= (data_counts->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135836), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135837 = (data_counts->FMGL(data))[index135836];
                ret135837;
            }))
            , (deser_data)->pointer(), (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135838 = p135845;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135839;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((deser_offsets->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135838) < (((x10_long) (((x10_int)0))))) ||
                        ((index135838) >= (deser_offsets->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135838), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135839 = (deser_offsets->FMGL(data))[index135838];
                ret135839;
            }))
            , (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135840 = p135845;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135841;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((deser_counts->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135840) < (((x10_long) (((x10_int)0))))) ||
                        ((index135840) >= (deser_counts->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135840), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135841 = (deser_counts->FMGL(data))[index135840];
                ret135841;
            }))
            );
        }
        catch (x10::lang::CheckedThrowable* __exc1818) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1818)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1818);
                {
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1818);
                {
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long p135845;
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
        buf.write(this->p135845);
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
        x10_long that_p135845 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_data = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_data_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_byte> that_deser_data = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_deser_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_deser_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Serialization__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Serialization__closure__3<TPMGL(T) >(that_p135845, that_data, that_data_offsets, that_data_counts, that_deser_data, that_deser_offsets, that_deser_counts);
        return this_;
    }
    
    org_scalegraph_util_Serialization__closure__3(x10_long p135845, org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets, org::scalegraph::util::MemoryChunk<x10_int> data_counts, org::scalegraph::util::MemoryChunk<x10_byte> deser_data, org::scalegraph::util::MemoryChunk<x10_int> deser_offsets, org::scalegraph::util::MemoryChunk<x10_int> deser_counts) : p135845(p135845), data(data), data_offsets(data_offsets), data_counts(data_counts), deser_data(deser_data), deser_offsets(deser_offsets), deser_counts(deser_counts) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10:72-74";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Serialization__closure__3<TPMGL(T) > >org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::__apply, &org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Serialization__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_needToSerialize_1807
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_needToSerialize_1807
template<class TPMGL(T)> x10_boolean org::scalegraph::util::Serialization::needToSerialize(
  ) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10Return_c
    return false;
    
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_needToSerialize_1807
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1808
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1808
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_byte>
  org::scalegraph::util::Serialization::serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data,
                                                  x10_int data_offset,
                                                  x10_int data_count) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_int ser_count = x10aux::count_ser_size<TPMGL(T) >((data)->pointer() , data_offset, data_count);
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> ser_data =
      org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (ser_count)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
    x10aux::write_ser_data<TPMGL(T) >((data)->pointer() , data_offset, data_count, (ser_data)->pointer(), ((x10_int)0), ser_count);
    
    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10Return_c
    return ser_data;
    
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1808
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1809
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1809
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_byte>
  org::scalegraph::util::Serialization::serialize(org::scalegraph::util::MemoryChunk<TPMGL(T)> data,
                                                  org::scalegraph::util::MemoryChunk<x10_int> data_offsets,
                                                  org::scalegraph::util::MemoryChunk<x10_int> data_counts,
                                                  org::scalegraph::util::MemoryChunk<x10_int> ser_offsets,
                                                  org::scalegraph::util::MemoryChunk<x10_int> ser_counts) {
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long places = (__extension__ ({
        data_counts->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_int ser_size = ((x10_int)0);
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("before finish for async"));
    }
    {
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var186 = x10::lang::Runtime::startFinish();
        {
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable135858 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
            try {
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i100747min135806 = ((x10_long) (((x10_int)0)));
                        
                        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i100747max135807 = ((x10_long) ((places) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
                        {
                            x10_long i135808;
                            for (
                                 //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                 i135808 = i100747min135806;
                                 ((i135808) <= (i100747max135807));
                                 
                                 //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                                 i135808 = ((x10_long) ((i135808) + (((x10_long)1ll)))))
                            {
                                
                                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                x10_long p135809 = i135808;
                                
                                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Serialization__closure__1<TPMGL(T)>)))org_scalegraph_util_Serialization__closure__1<TPMGL(T)>(p135809, data, data_offsets, data_counts, ser_counts, &(ser_size)))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1811) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1811);
                        {
                            
                            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1812) {
                if (true) {
                    x10::lang::CheckedThrowable* formal135859 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1812);
                    {
                        
                        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable135858 = formal135859;
                    }
                } else
                throw;
            }
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable135858)))
            {
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable135858))
                {
                    
                    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable135858));
                }
                
            }
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var186);
            }
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable135858)))
            {
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable135858)))
                {
                    
                    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable135858));
                }
                
            }
            
        }
    }
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("after finish for async"));
    }
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_int ret135829;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((ser_offsets->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (ser_offsets->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (ser_offsets->FMGL(data)).set(((x10_int)0), ((x10_int)0));
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret135829 = ((x10_int)0);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret135829;
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long i100765min135830 = ((x10_long) (((x10_int)0)));
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long i100765max135831 = ((x10_long) ((places) - (((x10_long) (((x10_int)2))))));
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
    {
        x10_long i135832;
        for (
             //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
             i135832 = i100765min135830; ((i135832) <= (i100765max135831));
             
             //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
             i135832 = ((x10_long) ((i135832) + (((x10_long)1ll)))))
        {
            
            //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10_long i135833 = i135832;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index135810 = ((x10_long) ((i135833) + (((x10_long) (((x10_int)1))))));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value135811 = ((x10_int) (((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135812 = i135833;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135813;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((ser_offsets->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135812) < (((x10_long) (((x10_int)0))))) ||
                        ((index135812) >= (ser_offsets->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135812), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135813 = (ser_offsets->FMGL(data))[index135812];
                ret135813;
            }))
            ) + ((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135814 = i135833;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret135815;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((ser_counts->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135814) < (((x10_long) (((x10_int)0))))) ||
                        ((index135814) >= (ser_counts->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135814), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135815 = (ser_counts->FMGL(data))[index135814];
                ret135815;
            }))
            )));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret135816;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((ser_offsets->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index135810) < (((x10_long) (((x10_int)0))))) ||
                    ((index135810) >= (ser_offsets->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135810), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (ser_offsets->FMGL(data)).set(index135810, value135811);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret135816 = value135811;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret135816;
        }
    }
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> ser_data =
      org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (ser_size)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("before finish for async"));
    }
    {
        
        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var187 = x10::lang::Runtime::startFinish();
        {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable135861 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
            try {
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i100783min135825 = ((x10_long) (((x10_int)0)));
                        
                        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i100783max135826 = ((x10_long) ((places) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
                        {
                            x10_long i135827;
                            for (
                                 //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                 i135827 = i100783min135825;
                                 ((i135827) <= (i100783max135826));
                                 
                                 //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                                 i135827 = ((x10_long) ((i135827) + (((x10_long)1ll)))))
                            {
                                
                                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                x10_long p135828 = i135827;
                                
                                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Serialization__closure__2<TPMGL(T)>)))org_scalegraph_util_Serialization__closure__2<TPMGL(T)>(p135828, data, data_offsets, data_counts, ser_data, ser_offsets, ser_counts))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1814) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1814);
                        {
                            
                            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1815) {
                if (true) {
                    x10::lang::CheckedThrowable* formal135862 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1815);
                    {
                        
                        //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable135861 = formal135862;
                    }
                } else
                throw;
            }
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable135861)))
            {
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable135861))
                {
                    
                    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable135861));
                }
                
            }
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var187);
            }
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable135861)))
            {
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable135861)))
                {
                    
                    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable135861));
                }
                
            }
            
        }
    }
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("after finish for async"));
    }
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10Return_c
    return ser_data;
    
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_serialize_1809
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1816
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1816
template<class TPMGL(T)> void org::scalegraph::util::Serialization::deserialize(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> data, x10_int data_offset,
  x10_int data_count, org::scalegraph::util::MemoryChunk<x10_byte> deser_data,
  x10_int deser_offset, x10_int deser_count) {
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
    x10aux::read_deser_data<TPMGL(T) >((data)->pointer(), data_offset, data_count, (deser_data)->pointer(), deser_offset, deser_count);
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1816
#ifndef ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1817
#define ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1817
template<class TPMGL(T)> void org::scalegraph::util::Serialization::deserialize(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> data, org::scalegraph::util::MemoryChunk<x10_int> data_offsets,
  org::scalegraph::util::MemoryChunk<x10_int> data_counts,
  org::scalegraph::util::MemoryChunk<x10_byte> deser_data,
  org::scalegraph::util::MemoryChunk<x10_int> deser_offsets,
  org::scalegraph::util::MemoryChunk<x10_int> deser_counts) {
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
    x10_long places = (__extension__ ({
        data_counts->FMGL(data)->FMGL(size);
    }))
    ;
    {
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var188 = x10::lang::Runtime::startFinish();
        {
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable135864 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
            try {
                
                //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i100801min135842 = ((x10_long) (((x10_int)0)));
                        
                        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                        x10_long i100801max135843 = ((x10_long) ((places) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.For_c
                        {
                            x10_long i135844;
                            for (
                                 //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                 i135844 = i100801min135842;
                                 ((i135844) <= (i100801max135843));
                                 
                                 //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                                 i135844 = ((x10_long) ((i135844) + (((x10_long)1ll)))))
                            {
                                
                                //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10LocalDecl_c
                                x10_long p135845 = i135844;
                                
                                //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Serialization__closure__3<TPMGL(T)>)))org_scalegraph_util_Serialization__closure__3<TPMGL(T)>(p135845, data, data_offsets, data_counts, deser_data, deser_offsets, deser_counts))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1819) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1819);
                        {
                            
                            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1820) {
                if (true) {
                    x10::lang::CheckedThrowable* formal135865 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1820);
                    {
                        
                        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable135864 = formal135865;
                    }
                } else
                throw;
            }
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable135864)))
            {
                
                //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable135864))
                {
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable135864));
                }
                
            }
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var188);
            }
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable135864)))
            {
                
                //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable135864)))
                {
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Serialization.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable135864));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_deserialize_1817
#endif // ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_SERIALIZATION_H_NODEPS

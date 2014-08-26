#ifndef __ORG_SCALEGRAPH_UTIL_REMOTE_H
#define __ORG_SCALEGRAPH_UTIL_REMOTE_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3)> class VoidFun_0_3;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
class DistScatterGather;
} } } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Boolean;
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
class Parallel;
} } } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 

class Remote : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void debugprint(x10::lang::String* tag);
    static x10::array::Array<x10_long>* splitChunks(x10::lang::LongRange range);
    template<class TPMGL(T)> static void get(x10::util::Team* team, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                             org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                             x10::lang::LongRange range,
                                             x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f);
    template<class TPMGL(T)> static void get(x10::util::Team* team,
                                             org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
                                             x10::lang::LongRange range,
                                             x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f);
    template<class TPMGL(T)> static void get(x10::util::Team* team,
                                             x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter,
                                             x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter,
                                             x10::lang::LongRange range,
                                             x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f);
    template<class TPMGL(T)> static void put(x10::util::Team* team,
                                             org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
                                             x10::lang::LongRange range,
                                             x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f);
    template<class TPMGL(T)> static void put(x10::util::Team* team,
                                             x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter,
                                             x10::lang::LongRange range,
                                             x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f);
    virtual org::scalegraph::util::Remote* org__scalegraph__util__Remote____this__org__scalegraph__util__Remote(
      );
    void _constructor();
    
    static org::scalegraph::util::Remote* _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_REMOTE_H

namespace org { namespace scalegraph { namespace util { 
class Remote;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_NODEPS
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/LongRange.h>
#include <x10/array/Array.h>
#include <x10/lang/Long.h>
#include <x10/lang/Math.h>
#include <x10/util/Team.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/VoidFun_0_3.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/DistScatterGather.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Fun_0_1.h>
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long local_ind64275, x10_int remote_role64276, x10_long remote_ind64277) {
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x64263 = counts64273;
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y64264 = remote_role64276;
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
        ;
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret64265;
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r64262 = ((x10_int) ((x64263->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        y64264)) + (((x10_int)1))));
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x64263->org::scalegraph::util::MemoryChunk<x10_int>::__set(
          y64264, r64262);
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret64265 = r64262;
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret64265;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts64273;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts64273);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts64273 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__2<TPMGL(T) >(that_counts64273);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__2(org::scalegraph::util::MemoryChunk<x10_int> counts64273) : counts64273(counts64273) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:57-59";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__2<TPMGL(T) > >org_scalegraph_util_Remote__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__2<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >, &org_scalegraph_util_Remote__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts64273 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (i64281)));
            
            //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>* get64274 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__2<TPMGL(T)>)))org_scalegraph_util_Remote__closure__2<TPMGL(T)>(counts64273)));
            
            //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i63849domain64266 = i_range64272;
            
            //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63849min64267 = i63849domain64266->FMGL(min);
            
            //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63849max64268 = i63849domain64266->FMGL(max);
            
            //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64269;
                for (
                     //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64269 = i63849min64267; ((i64269) <= (i63849max64268));
                     
                     //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64269 = ((x10_long) ((i64269) + (((x10_long)1ll)))))
                {
                    
                    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64270 = i64269;
                    
                    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i64270, get64274);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1170) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1170)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1170);
                {
                    
                    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1170);
                {
                    
                    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64281;
    x10::lang::LongRange i_range64272;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64281);
        buf.write(this->i_range64272);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64281 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range64272 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__1<TPMGL(T) >(that_scatterGather, that_i64281, that_i_range64272, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__1(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64281, x10::lang::LongRange i_range64272, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i64281(i64281), i_range64272(i_range64272), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:55-61";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__1<TPMGL(T) > >org_scalegraph_util_Remote__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__1<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__4<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long local_ind64292, x10_int remote_role64293, x10_long remote_ind64294) {
        
        //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off64295 = ((x10_int) (((__extension__ ({
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x64296 = offsets64290;
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y64297 = remote_role64293;
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret64298;
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r64282 = ((x10_int) ((x64296->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                            y64297)) + (((x10_int)1))));
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x64296->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              y64297, r64282);
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret64298 = r64282;
            ret64298;
        }))
        ) - (((x10_int)1))));
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        requests->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          off64295, remote_ind64294);
        
        //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        reqIdx->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          off64295, local_ind64292);
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets64290;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets64290);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets64290 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__4<TPMGL(T) >(that_offsets64290, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__4(org::scalegraph::util::MemoryChunk<x10_int> offsets64290, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets64290(offsets64290), requests(requests), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:72-76";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__4<TPMGL(T) > >org_scalegraph_util_Remote__closure__4<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__4<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__4<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__4<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >, &org_scalegraph_util_Remote__closure__4<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__4<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__4<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets64290 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (i64302)));
            
            //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>* get64291 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__4<TPMGL(T)>)))org_scalegraph_util_Remote__closure__4<TPMGL(T)>(offsets64290, requests, reqIdx)));
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i63882domain64283 = i_range64289;
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63882min64284 = i63882domain64283->FMGL(min);
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63882max64285 = i63882domain64283->FMGL(max);
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64286;
                for (
                     //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64286 = i63882min64284; ((i64286) <= (i63882max64285));
                     
                     //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64286 = ((x10_long) ((i64286) + (((x10_long)1ll)))))
                {
                    
                    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64287 = i64286;
                    
                    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i64287, get64291);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1173) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1173)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1173);
                {
                    
                    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1173);
                {
                    
                    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64302;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    x10::lang::LongRange i_range64289;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64302);
        buf.write(this->requests);
        buf.write(this->reqIdx);
        buf.write(this->i_range64289);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64302 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10::lang::LongRange that_i_range64289 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__3<TPMGL(T) >(that_scatterGather, that_i64302, that_requests, that_reqIdx, that_i_range64289, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__3(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64302, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, x10::lang::LongRange i_range64289, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i64302(i64302), requests(requests), reqIdx(reqIdx), i_range64289(i_range64289), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:70-78";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__3<TPMGL(T) > >org_scalegraph_util_Remote__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__3<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__5<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i63915domain64303 = r;
        
        //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i63915min64304 = i63915domain64303->FMGL(min);
        
        //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i63915max64305 = i63915domain64303->FMGL(max);
        
        //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
        {
            x10_long i64306;
            for (
                 //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                 i64306 = i63915min64304; ((i64306) <= (i63915max64305));
                 
                 //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                 i64306 = ((x10_long) ((i64306) + (((x10_long)1ll))))) {
                
                //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long i64307 = i64306;
                
                //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                reply->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                  i64307, src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                            recvRequests->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                              i64307)));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->reply);
        buf.write(this->recvRequests);
        buf.write(this->src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__5<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_src = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__5<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__5<TPMGL(T) >(that_reply, that_recvRequests, that_src);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__5(org::scalegraph::util::MemoryChunk<TPMGL(T)> reply, org::scalegraph::util::MemoryChunk<x10_long> recvRequests, org::scalegraph::util::MemoryChunk<TPMGL(T)> src) : reply(reply), recvRequests(recvRequests), src(src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:83-86";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__5<TPMGL(T) > >org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__5<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__5<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__5<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__6<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i63932domain64308 = r;
        
        //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i63932min64309 = i63932domain64308->FMGL(min);
        
        //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i63932max64310 = i63932domain64308->FMGL(max);
        
        //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
        {
            x10_long i64311;
            for (
                 //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                 i64311 = i63932min64309; ((i64311) <= (i63932max64310));
                 
                 //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                 i64311 = ((x10_long) ((i64311) + (((x10_long)1ll))))) {
                
                //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long i64312 = i64311;
                
                //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                  reqIdx->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                    i64312), recvData->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                               i64312));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->dst);
        buf.write(this->reqIdx);
        buf.write(this->recvData);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__6<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_dst = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__6<TPMGL(T) >(that_dst, that_reqIdx, that_recvData);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__6(org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData) : dst(dst), reqIdx(reqIdx), recvData(recvData) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:88-91";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__6<TPMGL(T) > >org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__6<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__6<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__6<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__8<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long local_ind64326, x10_int remote_role64327, x10_long remote_ind64328) {
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x64314 = counts64324;
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y64315 = remote_role64327;
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
        ;
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret64316;
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r64313 = ((x10_int) ((x64314->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        y64315)) + (((x10_int)1))));
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x64314->org::scalegraph::util::MemoryChunk<x10_int>::__set(
          y64315, r64313);
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret64316 = r64313;
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret64316;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts64324;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts64324);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__8<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts64324 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__8<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__8<TPMGL(T) >(that_counts64324);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__8(org::scalegraph::util::MemoryChunk<x10_int> counts64324) : counts64324(counts64324) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:113-115";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__8<TPMGL(T) > >org_scalegraph_util_Remote__closure__8<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__8<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__8<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__8<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >, &org_scalegraph_util_Remote__closure__8<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__8<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__8<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__7<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts64324 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (i64332)));
            
            //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>* get64325 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__8<TPMGL(T)>)))org_scalegraph_util_Remote__closure__8<TPMGL(T)>(counts64324)));
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i63949domain64317 = i_range64323;
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63949min64318 = i63949domain64317->FMGL(min);
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63949max64319 = i63949domain64317->FMGL(max);
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64320;
                for (
                     //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64320 = i63949min64318; ((i64320) <= (i63949max64319));
                     
                     //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64320 = ((x10_long) ((i64320) + (((x10_long)1ll)))))
                {
                    
                    //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64321 = i64320;
                    
                    //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i64321, get64325);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1178) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1178)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1178);
                {
                    
                    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1178);
                {
                    
                    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64332;
    x10::lang::LongRange i_range64323;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64332);
        buf.write(this->i_range64323);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64332 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range64323 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__7<TPMGL(T) >(that_scatterGather, that_i64332, that_i_range64323, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__7(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64332, x10::lang::LongRange i_range64323, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i64332(i64332), i_range64323(i_range64323), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:111-117";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__7<TPMGL(T) > >org_scalegraph_util_Remote__closure__7<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__7<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__7<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__7<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__7<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__7<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__7<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__10 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__10<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long local_ind64343, x10_int remote_role64344, x10_long remote_ind64345) {
        
        //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off64346 = ((x10_int) (((__extension__ ({
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x64347 = offsets64341;
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y64348 = remote_role64344;
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret64349;
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r64333 = ((x10_int) ((x64347->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                            y64348)) + (((x10_int)1))));
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x64347->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              y64348, r64333);
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret64349 = r64333;
            ret64349;
        }))
        ) - (((x10_int)1))));
        
        //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        requests->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          off64346, remote_ind64345);
        
        //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        reqIdx->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          off64346, local_ind64343);
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets64341;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets64341);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__10<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets64341 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__10<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__10<TPMGL(T) >(that_offsets64341, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__10(org::scalegraph::util::MemoryChunk<x10_int> offsets64341, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets64341(offsets64341), requests(requests), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:128-132";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__10<TPMGL(T) > >org_scalegraph_util_Remote__closure__10<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__10<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__10<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__10<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >, &org_scalegraph_util_Remote__closure__10<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__10<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__10<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__9<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets64341 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (i64353)));
            
            //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>* get64342 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__10<TPMGL(T)>)))org_scalegraph_util_Remote__closure__10<TPMGL(T)>(offsets64341, requests, reqIdx)));
            
            //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i63982domain64334 = i_range64340;
            
            //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63982min64335 = i63982domain64334->FMGL(min);
            
            //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i63982max64336 = i63982domain64334->FMGL(max);
            
            //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64337;
                for (
                     //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64337 = i63982min64335; ((i64337) <= (i63982max64336));
                     
                     //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64337 = ((x10_long) ((i64337) + (((x10_long)1ll)))))
                {
                    
                    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64338 = i64337;
                    
                    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i64338, get64342);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1181) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1181)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1181);
                {
                    
                    //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1181);
                {
                    
                    //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64353;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    x10::lang::LongRange i_range64340;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64353);
        buf.write(this->requests);
        buf.write(this->reqIdx);
        buf.write(this->i_range64340);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64353 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10::lang::LongRange that_i_range64340 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__9<TPMGL(T) >(that_scatterGather, that_i64353, that_requests, that_reqIdx, that_i_range64340, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__9(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64353, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, x10::lang::LongRange i_range64340, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i64353(i64353), requests(requests), reqIdx(reqIdx), i_range64340(i_range64340), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:126-134";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__9<TPMGL(T) > >org_scalegraph_util_Remote__closure__9<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__9<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__9<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__9<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__9<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__9<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__9<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__11<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i64015domain64354 = r;
        
        //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64015min64355 = i64015domain64354->FMGL(min);
        
        //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64015max64356 = i64015domain64354->FMGL(max);
        
        //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
        {
            x10_long i64357;
            for (
                 //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                 i64357 = i64015min64355; ((i64357) <= (i64015max64356));
                 
                 //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                 i64357 = ((x10_long) ((i64357) + (((x10_long)1ll))))) {
                
                //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long i64358 = i64357;
                
                //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                reply->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                  i64358, x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(getter), 
                    recvRequests->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                      i64358)));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests;
    x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->reply);
        buf.write(this->recvRequests);
        buf.write(this->getter);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__11<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_getter = buf.read<x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        org_scalegraph_util_Remote__closure__11<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__11<TPMGL(T) >(that_reply, that_recvRequests, that_getter);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__11(org::scalegraph::util::MemoryChunk<TPMGL(T)> reply, org::scalegraph::util::MemoryChunk<x10_long> recvRequests, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter) : reply(reply), recvRequests(recvRequests), getter(getter) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:139-142";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__11<TPMGL(T) > >org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__11<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__11<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__11<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__12<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i64032domain64359 = r;
        
        //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64032min64360 = i64032domain64359->FMGL(min);
        
        //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64032max64361 = i64032domain64359->FMGL(max);
        
        //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
        {
            x10_long i64362;
            for (
                 //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                 i64362 = i64032min64360; ((i64362) <= (i64032max64361));
                 
                 //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                 i64362 = ((x10_long) ((i64362) + (((x10_long)1ll))))) {
                
                //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long i64363 = i64362;
                
                //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(setter), 
                  reqIdx->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                    i64363), recvData->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                               i64363));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData;
    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->reqIdx);
        buf.write(this->recvData);
        buf.write(this->setter);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__12<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__12<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* that_setter = buf.read<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>*>();
        org_scalegraph_util_Remote__closure__12<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__12<TPMGL(T) >(that_reqIdx, that_recvData, that_setter);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__12(org::scalegraph::util::MemoryChunk<x10_long> reqIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter) : reqIdx(reqIdx), recvData(recvData), setter(setter) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:144-147";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__12<TPMGL(T) > >org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__12<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__12<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__12<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__14<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role64377, x10_long dst_ind64378, TPMGL(T) value64379) {
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x64365 = counts64375;
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y64366 = dst_role64377;
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
        ;
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret64367;
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r64364 = ((x10_int) ((x64365->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        y64366)) + (((x10_int)1))));
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x64365->org::scalegraph::util::MemoryChunk<x10_int>::__set(
          y64366, r64364);
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret64367 = r64364;
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret64367;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts64375;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts64375);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__14<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts64375 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__14<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__14<TPMGL(T) >(that_counts64375);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__14(org::scalegraph::util::MemoryChunk<x10_int> counts64375) : counts64375(counts64375) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:167-169";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__14<TPMGL(T) > >org_scalegraph_util_Remote__closure__14<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__14<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__14<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__14<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__14<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__14<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__14<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__13 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__13<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts64375 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (i64383)));
            
            //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put64376 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__14<TPMGL(T)>)))org_scalegraph_util_Remote__closure__14<TPMGL(T)>(counts64375)));
            
            //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i64049domain64368 = i_range64374;
            
            //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64049min64369 = i64049domain64368->FMGL(min);
            
            //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64049max64370 = i64049domain64368->FMGL(max);
            
            //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64371;
                for (
                     //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64371 = i64049min64369; ((i64371) <= (i64049max64370));
                     
                     //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64371 = ((x10_long) ((i64371) + (((x10_long)1ll)))))
                {
                    
                    //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64372 = i64371;
                    
                    //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i64372, put64376);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1185) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1185)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1185);
                {
                    
                    //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1185);
                {
                    
                    //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64383;
    x10::lang::LongRange i_range64374;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64383);
        buf.write(this->i_range64374);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__13<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64383 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range64374 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__13<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__13<TPMGL(T) >(that_scatterGather, that_i64383, that_i_range64374, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__13(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64383, x10::lang::LongRange i_range64374, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i64383(i64383), i_range64374(i_range64374), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:165-171";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__13<TPMGL(T) > >org_scalegraph_util_Remote__closure__13<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__13<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__13<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__13<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__13<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__13<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__13<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__16<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role64394, x10_long dst_ind64395, TPMGL(T) value64396) {
        
        //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off64397 = ((x10_int) (((__extension__ ({
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x64398 = offsets64392;
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y64399 = dst_role64394;
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret64400;
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r64384 = ((x10_int) ((x64398->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                            y64399)) + (((x10_int)1))));
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x64398->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              y64399, r64384);
            
            //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret64400 = r64384;
            ret64400;
        }))
        ) - (((x10_int)1))));
        
        //#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        reqVal->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          off64397, value64396);
        
        //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        reqIdx->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          off64397, dst_ind64395);
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets64392;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets64392);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__16<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets64392 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__16<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__16<TPMGL(T) >(that_offsets64392, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__16(org::scalegraph::util::MemoryChunk<x10_int> offsets64392, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets64392(offsets64392), reqVal(reqVal), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:182-186";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__16<TPMGL(T) > >org_scalegraph_util_Remote__closure__16<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__16<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__16<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__16<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__16<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__16<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__16<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__15<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets64392 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (i64404)));
            
            //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put64393 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__16<TPMGL(T)>)))org_scalegraph_util_Remote__closure__16<TPMGL(T)>(offsets64392, reqVal, reqIdx)));
            
            //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i64082domain64385 = i_range64391;
            
            //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64082min64386 = i64082domain64385->FMGL(min);
            
            //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64082max64387 = i64082domain64385->FMGL(max);
            
            //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64388;
                for (
                     //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64388 = i64082min64386; ((i64388) <= (i64082max64387));
                     
                     //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64388 = ((x10_long) ((i64388) + (((x10_long)1ll)))))
                {
                    
                    //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64389 = i64388;
                    
                    //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i64389, put64393);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1188) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1188)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1188);
                {
                    
                    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1188);
                {
                    
                    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64404;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    x10::lang::LongRange i_range64391;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64404);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
        buf.write(this->i_range64391);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__15<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64404 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10::lang::LongRange that_i_range64391 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__15<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__15<TPMGL(T) >(that_scatterGather, that_i64404, that_reqVal, that_reqIdx, that_i_range64391, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__15(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64404, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, x10::lang::LongRange i_range64391, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i64404(i64404), reqVal(reqVal), reqIdx(reqIdx), i_range64391(i_range64391), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:180-188";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__15<TPMGL(T) > >org_scalegraph_util_Remote__closure__15<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__15<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__15<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__15<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__15<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__15<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__15<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__17 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__17<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i64115domain64405 = r;
        
        //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64115min64406 = i64115domain64405->FMGL(min);
        
        //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64115max64407 = i64115domain64405->FMGL(max);
        
        //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
        {
            x10_long i64408;
            for (
                 //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                 i64408 = i64115min64406; ((i64408) <= (i64115max64407));
                 
                 //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                 i64408 = ((x10_long) ((i64408) + (((x10_long)1ll))))) {
                
                //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long i64409 = i64408;
                
                //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                array->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                  recvIdx->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                    i64409), recvVal->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                               i64409));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> array;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->array);
        buf.write(this->recvIdx);
        buf.write(this->recvVal);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__17<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_array = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__17<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__17<TPMGL(T) >(that_array, that_recvIdx, that_recvVal);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__17(org::scalegraph::util::MemoryChunk<TPMGL(T)> array, org::scalegraph::util::MemoryChunk<x10_long> recvIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal) : array(array), recvIdx(recvIdx), recvVal(recvVal) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:193-196";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__17<TPMGL(T) > >org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__17<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__17<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__17<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__17_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__19_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__19 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__19<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role64423, x10_long dst_ind64424, TPMGL(T) value64425) {
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x64411 = counts64421;
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y64412 = dst_role64423;
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
        ;
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret64413;
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r64410 = ((x10_int) ((x64411->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        y64412)) + (((x10_int)1))));
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x64411->org::scalegraph::util::MemoryChunk<x10_int>::__set(
          y64412, r64410);
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret64413 = r64410;
        
        //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret64413;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts64421;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts64421);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__19<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__19<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts64421 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__19<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__19<TPMGL(T) >(that_counts64421);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__19(org::scalegraph::util::MemoryChunk<x10_int> counts64421) : counts64421(counts64421) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:210-212";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__19<TPMGL(T) > >org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__19<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__19<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__19<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__19_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__18 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__18<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts64421 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (i64429)));
            
            //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put64422 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__19<TPMGL(T)>)))org_scalegraph_util_Remote__closure__19<TPMGL(T)>(counts64421)));
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i64132domain64414 = i_range64420;
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64132min64415 = i64132domain64414->FMGL(min);
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64132max64416 = i64132domain64414->FMGL(max);
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64417;
                for (
                     //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64417 = i64132min64415; ((i64417) <= (i64132max64416));
                     
                     //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64417 = ((x10_long) ((i64417) + (((x10_long)1ll)))))
                {
                    
                    //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64418 = i64417;
                    
                    //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i64418, put64422);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1192) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1192)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1192);
                {
                    
                    //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1192);
                {
                    
                    //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64429;
    x10::lang::LongRange i_range64420;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64429);
        buf.write(this->i_range64420);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__18<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__18<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64429 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range64420 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__18<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__18<TPMGL(T) >(that_scatterGather, that_i64429, that_i_range64420, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__18(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64429, x10::lang::LongRange i_range64420, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i64429(i64429), i_range64420(i_range64420), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:208-214";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__18<TPMGL(T) > >org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__18<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__18<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__18<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__21_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__21 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__21<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role64440, x10_long dst_ind64441, TPMGL(T) value64442) {
        
        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off64443 = ((x10_int) (((__extension__ ({
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x64444 = offsets64438;
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y64445 = dst_role64440;
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret64446;
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r64430 = ((x10_int) ((x64444->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                            y64445)) + (((x10_int)1))));
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x64444->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              y64445, r64430);
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret64446 = r64430;
            ret64446;
        }))
        ) - (((x10_int)1))));
        
        //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        reqVal->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          off64443, value64442);
        
        //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        reqIdx->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          off64443, dst_ind64441);
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets64438;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets64438);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__21<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__21<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets64438 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__21<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__21<TPMGL(T) >(that_offsets64438, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__21(org::scalegraph::util::MemoryChunk<x10_int> offsets64438, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets64438(offsets64438), reqVal(reqVal), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:225-230";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__21<TPMGL(T) > >org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__21<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__21<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__21<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__21_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__20_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__20 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__20<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets64438 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (i64450)));
            
            //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put64439 =
              reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__21<TPMGL(T)>)))org_scalegraph_util_Remote__closure__21<TPMGL(T)>(offsets64438, reqVal, reqIdx)));
            
            //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i64165domain64431 = i_range64437;
            
            //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64165min64432 = i64165domain64431->FMGL(min);
            
            //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i64165max64433 = i64165domain64431->FMGL(max);
            
            //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i64434;
                for (
                     //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i64434 = i64165min64432; ((i64434) <= (i64165max64433));
                     
                     //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i64434 = ((x10_long) ((i64434) + (((x10_long)1ll)))))
                {
                    
                    //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i64435 = i64434;
                    
                    //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i64435, put64439);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1195) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1195)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1195);
                {
                    
                    //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1195);
                {
                    
                    //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i64450;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    x10::lang::LongRange i_range64437;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i64450);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
        buf.write(this->i_range64437);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__20<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__20<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i64450 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10::lang::LongRange that_i_range64437 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__20<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__20<TPMGL(T) >(that_scatterGather, that_i64450, that_reqVal, that_reqIdx, that_i_range64437, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__20(org::scalegraph::util::DistScatterGather scatterGather, x10_long i64450, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, x10::lang::LongRange i_range64437, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i64450(i64450), reqVal(reqVal), reqIdx(reqIdx), i_range64437(i_range64437), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:223-232";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__20<TPMGL(T) > >org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__20<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__20<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__20<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__20_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__22_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__22 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__22<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i64198domain64451 = r;
        
        //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64198min64452 = i64198domain64451->FMGL(min);
        
        //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long i64198max64453 = i64198domain64451->FMGL(max);
        
        //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
        {
            x10_long i64454;
            for (
                 //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                 i64454 = i64198min64452; ((i64454) <= (i64198max64453));
                 
                 //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                 i64454 = ((x10_long) ((i64454) + (((x10_long)1ll))))) {
                
                //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long i64455 = i64454;
                
                //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(setter), 
                  recvIdx->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                    i64455), recvVal->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                               i64455));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal;
    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->recvIdx);
        buf.write(this->recvVal);
        buf.write(this->setter);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__22<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* that_setter = buf.read<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>*>();
        org_scalegraph_util_Remote__closure__22<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__22<TPMGL(T) >(that_recvIdx, that_recvVal, that_setter);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__22(org::scalegraph::util::MemoryChunk<x10_long> recvIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter) : recvIdx(recvIdx), recvVal(recvVal), setter(setter) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10:237-240";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Remote__closure__22<TPMGL(T) > >org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__22<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__22<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__22<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__22_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1169
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1169
template<class TPMGL(T)> void org::scalegraph::util::Remote::get(x10::util::Team* team,
                                                                 org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                                 org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                                 x10::lang::LongRange range,
                                                                 x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) {
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather scatterGather =
      org::scalegraph::util::DistScatterGather::_make(team);
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id8795 = org::scalegraph::util::Remote::splitChunks(
                                            range);
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long nthreads = x10aux::nullCheck(id8795)->x10::array::Array<x10_long>::__apply(
                          ((x10_int)0));
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10aux::nullCheck(id8795)->x10::array::Array<x10_long>::__apply(
                            ((x10_int)1));
    {
        
        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var64 = x10::lang::Runtime::startFinish();
        {
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64488 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63866min64278 = ((x10_long) (((x10_int)0)));
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63866max64279 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64280;
                            for (
                                 //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64280 = i63866min64278;
                                 ((i64280) <= (i63866max64279));
                                 
                                 //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64280 = ((x10_long) ((i64280) + (((x10_long)1ll)))))
                            {
                                
                                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64281 = i64280;
                                
                                //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64271 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64281) * (chunk_size))))));
                                
                                //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64272 =
                                  x10::lang::LongRange::_make(i_start64271, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64271) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__1<TPMGL(T)>)))org_scalegraph_util_Remote__closure__1<TPMGL(T)>(scatterGather, i64281, i_range64272, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1171) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1171);
                        {
                            
                            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1172) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64489 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1172);
                    {
                        
                        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64488 = formal64489;
                    }
                } else
                throw;
            }
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64488)))
            {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64488))
                {
                    
                    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64488));
                }
                
            }
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var64);
            }
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64488)))
            {
                
                //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64488)))
                {
                    
                    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64488));
                }
                
            }
            
        }
    }
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::DistScatterGather::sum();
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> requests =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var65 = x10::lang::Runtime::startFinish();
        {
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64491 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63899min64299 = ((x10_long) (((x10_int)0)));
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63899max64300 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64301;
                            for (
                                 //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64301 = i63899min64299;
                                 ((i64301) <= (i63899max64300));
                                 
                                 //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64301 = ((x10_long) ((i64301) + (((x10_long)1ll)))))
                            {
                                
                                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64302 = i64301;
                                
                                //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64288 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64302) * (chunk_size))))));
                                
                                //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64289 =
                                  x10::lang::LongRange::_make(i_start64288, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64288) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__3<TPMGL(T)>)))org_scalegraph_util_Remote__closure__3<TPMGL(T)>(scatterGather, i64302, requests, reqIdx, i_range64289, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1174) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1174);
                        {
                            
                            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1175) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64492 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1175);
                    {
                        
                        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64491 = formal64492;
                    }
                } else
                throw;
            }
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64491)))
            {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64491))
                {
                    
                    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64491));
                }
                
            }
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var65);
            }
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64491)))
            {
                
                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64491)))
                {
                    
                    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64491));
                }
                
            }
            
        }
    }
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests =
      scatterGather->template scatter<x10_long >(requests);
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (recvCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(recvRequests->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Remote__closure__5<TPMGL(T)>)))org_scalegraph_util_Remote__closure__5<TPMGL(T)>(reply, recvRequests, src))));
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData =
      scatterGather->template gather<TPMGL(T) >(reply);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(requests->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Remote__closure__6<TPMGL(T)>)))org_scalegraph_util_Remote__closure__6<TPMGL(T)>(dst, reqIdx, recvData))));
}
#endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1169
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1176
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1176
template<class TPMGL(T)> void org::scalegraph::util::Remote::get(
  x10::util::Team* team, org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
  x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) {
    
    //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(array->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      array, ((x10_long)0ll), src, ((x10_long)0ll), array->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size());
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Remote::template get<TPMGL(T) >(
      team, src, array, range, f);
}
#endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1176
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1177
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1177
template<class TPMGL(T)> void org::scalegraph::util::Remote::get(
  x10::util::Team* team, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter,
  x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter, x10::lang::LongRange range,
  x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) {
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather scatterGather =
      org::scalegraph::util::DistScatterGather::_make(team);
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id8802 = org::scalegraph::util::Remote::splitChunks(
                                            range);
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long nthreads = x10aux::nullCheck(id8802)->x10::array::Array<x10_long>::__apply(
                          ((x10_int)0));
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10aux::nullCheck(id8802)->x10::array::Array<x10_long>::__apply(
                            ((x10_int)1));
    {
        
        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var66 = x10::lang::Runtime::startFinish();
        {
            
            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64494 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63966min64329 = ((x10_long) (((x10_int)0)));
                        
                        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63966max64330 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64331;
                            for (
                                 //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64331 = i63966min64329;
                                 ((i64331) <= (i63966max64330));
                                 
                                 //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64331 = ((x10_long) ((i64331) + (((x10_long)1ll)))))
                            {
                                
                                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64332 = i64331;
                                
                                //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64322 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64332) * (chunk_size))))));
                                
                                //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64323 =
                                  x10::lang::LongRange::_make(i_start64322, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64322) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__7<TPMGL(T)>)))org_scalegraph_util_Remote__closure__7<TPMGL(T)>(scatterGather, i64332, i_range64323, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1179) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1179);
                        {
                            
                            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1180) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64495 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1180);
                    {
                        
                        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64494 = formal64495;
                    }
                } else
                throw;
            }
            
            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64494)))
            {
                
                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64494))
                {
                    
                    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64494));
                }
                
            }
            
            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var66);
            }
            
            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64494)))
            {
                
                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64494)))
                {
                    
                    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64494));
                }
                
            }
            
        }
    }
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::DistScatterGather::sum();
    
    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
    
    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> requests =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var67 = x10::lang::Runtime::startFinish();
        {
            
            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64497 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63999min64350 = ((x10_long) (((x10_int)0)));
                        
                        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i63999max64351 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64352;
                            for (
                                 //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64352 = i63999min64350;
                                 ((i64352) <= (i63999max64351));
                                 
                                 //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64352 = ((x10_long) ((i64352) + (((x10_long)1ll)))))
                            {
                                
                                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64353 = i64352;
                                
                                //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64339 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64353) * (chunk_size))))));
                                
                                //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64340 =
                                  x10::lang::LongRange::_make(i_start64339, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64339) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__9<TPMGL(T)>)))org_scalegraph_util_Remote__closure__9<TPMGL(T)>(scatterGather, i64353, requests, reqIdx, i_range64340, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1182) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1182);
                        {
                            
                            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1183) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64498 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1183);
                    {
                        
                        //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64497 = formal64498;
                    }
                } else
                throw;
            }
            
            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64497)))
            {
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64497))
                {
                    
                    //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64497));
                }
                
            }
            
            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var67);
            }
            
            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64497)))
            {
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64497)))
                {
                    
                    //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64497));
                }
                
            }
            
        }
    }
    
    //#line 136 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests =
      scatterGather->template scatter<x10_long >(requests);
    
    //#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
    
    //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (recvCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(recvRequests->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Remote__closure__11<TPMGL(T)>)))org_scalegraph_util_Remote__closure__11<TPMGL(T)>(reply, recvRequests, getter))));
    
    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData =
      scatterGather->template gather<TPMGL(T) >(reply);
    
    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(requests->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Remote__closure__12<TPMGL(T)>)))org_scalegraph_util_Remote__closure__12<TPMGL(T)>(reqIdx, recvData, setter))));
}
#endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1177
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1184
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1184
template<class TPMGL(T)> void org::scalegraph::util::Remote::put(
  x10::util::Team* team, org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
  x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) {
    
    //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather scatterGather =
      org::scalegraph::util::DistScatterGather::_make(team);
    
    //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id8806 = org::scalegraph::util::Remote::splitChunks(
                                            range);
    
    //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long nthreads = x10aux::nullCheck(id8806)->x10::array::Array<x10_long>::__apply(
                          ((x10_int)0));
    
    //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10aux::nullCheck(id8806)->x10::array::Array<x10_long>::__apply(
                            ((x10_int)1));
    {
        
        //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var68 = x10::lang::Runtime::startFinish();
        {
            
            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64500 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64066min64380 = ((x10_long) (((x10_int)0)));
                        
                        //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64066max64381 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64382;
                            for (
                                 //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64382 = i64066min64380;
                                 ((i64382) <= (i64066max64381));
                                 
                                 //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64382 = ((x10_long) ((i64382) + (((x10_long)1ll)))))
                            {
                                
                                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64383 = i64382;
                                
                                //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64373 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64383) * (chunk_size))))));
                                
                                //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64374 =
                                  x10::lang::LongRange::_make(i_start64373, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64373) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__13<TPMGL(T)>)))org_scalegraph_util_Remote__closure__13<TPMGL(T)>(scatterGather, i64383, i_range64374, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1186) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1186);
                        {
                            
                            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1187) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64501 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1187);
                    {
                        
                        //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64500 = formal64501;
                    }
                } else
                throw;
            }
            
            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64500)))
            {
                
                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64500))
                {
                    
                    //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64500));
                }
                
            }
            
            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var68);
            }
            
            //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64500)))
            {
                
                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64500)))
                {
                    
                    //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64500));
                }
                
            }
            
        }
    }
    
    //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::DistScatterGather::sum();
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var69 = x10::lang::Runtime::startFinish();
        {
            
            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64503 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64099min64401 = ((x10_long) (((x10_int)0)));
                        
                        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64099max64402 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64403;
                            for (
                                 //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64403 = i64099min64401;
                                 ((i64403) <= (i64099max64402));
                                 
                                 //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64403 = ((x10_long) ((i64403) + (((x10_long)1ll)))))
                            {
                                
                                //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64404 = i64403;
                                
                                //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64390 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64404) * (chunk_size))))));
                                
                                //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64391 =
                                  x10::lang::LongRange::_make(i_start64390, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64390) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__15<TPMGL(T)>)))org_scalegraph_util_Remote__closure__15<TPMGL(T)>(scatterGather, i64404, reqVal, reqIdx, i_range64391, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1189) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1189);
                        {
                            
                            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1190) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64504 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1190);
                    {
                        
                        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64503 = formal64504;
                    }
                } else
                throw;
            }
            
            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64503)))
            {
                
                //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64503))
                {
                    
                    //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64503));
                }
                
            }
            
            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var69);
            }
            
            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64503)))
            {
                
                //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64503)))
                {
                    
                    //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64503));
                }
                
            }
            
        }
    }
    
    //#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal =
      scatterGather->template scatter<TPMGL(T) >(reqVal);
    
    //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx =
      scatterGather->template scatter<x10_long >(reqIdx);
    
    //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
    
    //#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(recvVal->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Remote__closure__17<TPMGL(T)>)))org_scalegraph_util_Remote__closure__17<TPMGL(T)>(array, recvIdx, recvVal))));
}
#endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1184
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1191
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1191
template<class TPMGL(T)> void org::scalegraph::util::Remote::put(
  x10::util::Team* team, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter,
  x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) {
    
    //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather scatterGather =
      org::scalegraph::util::DistScatterGather::_make(team);
    
    //#line 204 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id8810 = org::scalegraph::util::Remote::splitChunks(
                                            range);
    
    //#line 204 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long nthreads = x10aux::nullCheck(id8810)->x10::array::Array<x10_long>::__apply(
                          ((x10_int)0));
    
    //#line 204 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10aux::nullCheck(id8810)->x10::array::Array<x10_long>::__apply(
                            ((x10_int)1));
    {
        
        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var70 = x10::lang::Runtime::startFinish();
        {
            
            //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64506 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64149min64426 = ((x10_long) (((x10_int)0)));
                        
                        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64149max64427 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64428;
                            for (
                                 //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64428 = i64149min64426;
                                 ((i64428) <= (i64149max64427));
                                 
                                 //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64428 = ((x10_long) ((i64428) + (((x10_long)1ll)))))
                            {
                                
                                //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64429 = i64428;
                                
                                //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64419 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64429) * (chunk_size))))));
                                
                                //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64420 =
                                  x10::lang::LongRange::_make(i_start64419, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64419) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__18<TPMGL(T)>)))org_scalegraph_util_Remote__closure__18<TPMGL(T)>(scatterGather, i64429, i_range64420, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1193) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1193);
                        {
                            
                            //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1194) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64507 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1194);
                    {
                        
                        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64506 = formal64507;
                    }
                } else
                throw;
            }
            
            //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64506)))
            {
                
                //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64506))
                {
                    
                    //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64506));
                }
                
            }
            
            //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var70);
            }
            
            //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64506)))
            {
                
                //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64506)))
                {
                    
                    //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64506));
                }
                
            }
            
        }
    }
    
    //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::DistScatterGather::sum();
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
    
    //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var71 = x10::lang::Runtime::startFinish();
        {
            
            //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable64509 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64182min64447 = ((x10_long) (((x10_int)0)));
                        
                        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i64182max64448 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i64449;
                            for (
                                 //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i64449 = i64182min64447;
                                 ((i64449) <= (i64182max64448));
                                 
                                 //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i64449 = ((x10_long) ((i64449) + (((x10_long)1ll)))))
                            {
                                
                                //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i64450 = i64449;
                                
                                //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start64436 = ((x10_long) ((range->
                                                                        FMGL(min)) + (((x10_long) ((i64450) * (chunk_size))))));
                                
                                //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range64437 =
                                  x10::lang::LongRange::_make(i_start64436, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start64436) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__20<TPMGL(T)>)))org_scalegraph_util_Remote__closure__20<TPMGL(T)>(scatterGather, i64450, reqVal, reqIdx, i_range64437, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1196) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1196);
                        {
                            
                            //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1197) {
                if (true) {
                    x10::lang::CheckedThrowable* formal64510 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1197);
                    {
                        
                        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable64509 = formal64510;
                    }
                } else
                throw;
            }
            
            //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64509)))
            {
                
                //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable64509))
                {
                    
                    //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64509));
                }
                
            }
            
            //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var71);
            }
            
            //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable64509)))
            {
                
                //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable64509)))
                {
                    
                    //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable64509));
                }
                
            }
            
        }
    }
    
    //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal =
      scatterGather->template scatter<TPMGL(T) >(reqVal);
    
    //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx =
      scatterGather->template scatter<x10_long >(reqIdx);
    
    //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
    
    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(recvVal->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Remote__closure__22<TPMGL(T)>)))org_scalegraph_util_Remote__closure__22<TPMGL(T)>(recvIdx, recvVal, setter))));
}
#endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1191
#endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_REMOTE_H_NODEPS

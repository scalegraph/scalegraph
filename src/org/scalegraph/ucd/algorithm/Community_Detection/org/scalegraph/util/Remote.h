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
class Boolean;
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
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace array { 
class Region;
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
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
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
#include <x10/lang/Boolean.h>
#include <x10/util/Team.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/VoidFun_0_3.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/DistScatterGather.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/array/Region.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
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
    void __apply(x10_long local_ind127242, x10_int remote_role127243, x10_long remote_ind127244) {
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x127239 = counts127254;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y127240 = remote_role127243;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret127241;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r127236 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127237 = y127240;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127238;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127239->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127237) < (((x10_int)0))) || ((((x10_long) (index127237))) >= (x127239->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127237), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127238 = (x127239->FMGL(data))[index127237];
            ret127238;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127233 = y127240;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value127234 = r127236;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret127235;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x127239->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127233) < (((x10_int)0))) || ((((x10_long) (index127233))) >= (x127239->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127233), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x127239->FMGL(data)).set(index127233, value127234);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127235 = value127234;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127235;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret127241 = r127236;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret127241;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts127254;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts127254);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts127254 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__2<TPMGL(T) >(that_counts127254);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__2(org::scalegraph::util::MemoryChunk<x10_int> counts127254) : counts127254(counts127254) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:57-59";
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
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts127254 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i127258)));
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88480domain127245 = i_range127251;
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88480min127246 = i88480domain127245->FMGL(min);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88480max127247 = i88480domain127245->FMGL(max);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127248;
                for (
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127248 = i88480min127246; ((i127248) <= (i88480max127247));
                     
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127248 = ((x10_long) ((i127248) + (((x10_long)1ll)))))
                {
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127249 = i127248;
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i127249, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__2<TPMGL(T)>)))org_scalegraph_util_Remote__closure__2<TPMGL(T)>(counts127254))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1354) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1354)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1354);
                {
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1354);
                {
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127258;
    x10::lang::LongRange i_range127251;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127258);
        buf.write(this->i_range127251);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127258 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127251 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__1<TPMGL(T) >(that_scatterGather, that_i127258, that_i_range127251, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__1(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127258, x10::lang::LongRange i_range127251, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i127258(i127258), i_range127251(i_range127251), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:55-61";
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
    void __apply(x10_long local_ind127271, x10_int remote_role127272, x10_long remote_ind127273) {
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off127274 = ((x10_int) (((__extension__ ({
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x127275 = offsets127287;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y127276 = remote_role127272;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret127277;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r127262 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index127263 = y127276;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret127264;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x127275->FMGL(data)).isValid())) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index127263) < (((x10_int)0))) || ((((x10_long) (index127263))) >= (x127275->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127263), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret127264 = (x127275->FMGL(data))[index127263];
                ret127264;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127259 = y127276;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value127260 = r127262;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127261;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127275->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127259) < (((x10_int)0))) || ((((x10_long) (index127259))) >= (x127275->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127259), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x127275->FMGL(data)).set(index127259, value127260);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127261 = value127260;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret127261;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret127277 = r127262;
            ret127277;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127265 = off127274;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127266 = remote_ind127273;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127267;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((requests->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127265) < (((x10_int)0))) || ((((x10_long) (index127265))) >= (requests->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127265), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (requests->FMGL(data)).set(index127265, value127266);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127267 = value127266;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127267;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127268 = off127274;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127269 = local_ind127271;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127270;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqIdx->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127268) < (((x10_int)0))) || ((((x10_long) (index127268))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127268), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index127268, value127269);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127270 = value127269;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127270;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets127287;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets127287);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets127287 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__4<TPMGL(T) >(that_offsets127287, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__4(org::scalegraph::util::MemoryChunk<x10_int> offsets127287, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets127287(offsets127287), requests(requests), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:72-76";
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
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets127287 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i127291)));
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88517domain127278 = i_range127284;
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88517min127279 = i88517domain127278->FMGL(min);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88517max127280 = i88517domain127278->FMGL(max);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127281;
                for (
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127281 = i88517min127279; ((i127281) <= (i88517max127280));
                     
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127281 = ((x10_long) ((i127281) + (((x10_long)1ll)))))
                {
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127282 = i127281;
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i127282, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__4<TPMGL(T)>)))org_scalegraph_util_Remote__closure__4<TPMGL(T)>(offsets127287, requests, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1357) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1357)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1357);
                {
                    
                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1357);
                {
                    
                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127291;
    x10::lang::LongRange i_range127284;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127291);
        buf.write(this->i_range127284);
        buf.write(this->f);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127291 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127284 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__3<TPMGL(T) >(that_scatterGather, that_i127291, that_i_range127284, that_f, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__3(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127291, x10::lang::LongRange i_range127284, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i127291(i127291), i_range127284(i_range127284), f(f), requests(requests), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:70-78";
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
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__5<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127304 = ((x10_long) (idx127306));
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127305 = i_range127310;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88554domain127299 = r127305;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88554min127300 = i88554domain127299->FMGL(min);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88554max127301 = i88554domain127299->FMGL(max);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127302;
                for (
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127302 = i88554min127300; ((i127302) <= (i88554max127301));
                     
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127302 = ((x10_long) ((i127302) + (((x10_long)1ll)))))
                {
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127303 = i127302;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index127292 = i127303;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value127293 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127294 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index127295 = i127303;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret127296;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((recvRequests->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index127295) < (((x10_long) (((x10_int)0))))) ||
                                    ((index127295) >= (recvRequests->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127295), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127296 = (recvRequests->FMGL(data))[index127295];
                            ret127296;
                        }))
                        ;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret127297;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((src->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127294) < (((x10_long) (((x10_int)0))))) ||
                                ((index127294) >= (src->FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127294), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127297 = (src->FMGL(data))[index127294];
                        ret127297;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret127298;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reply->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index127292) < (((x10_long) (((x10_int)0))))) ||
                            ((index127292) >= (reply->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127292), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reply->FMGL(data)).set(index127292, value127293);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127298 = value127293;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret127298;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1360) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1360)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1360);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1360);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__3__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127306;
    x10::lang::LongRange i_range127310;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127306);
        buf.write(this->i_range127310);
        buf.write(this->recvRequests);
        buf.write(this->src);
        buf.write(this->reply);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__5<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127306 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127310 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_src = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__5<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__5<TPMGL(T) >(that_idx127306, that_i_range127310, that_recvRequests, that_src, that_reply);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__5(x10_int idx127306, x10::lang::LongRange i_range127310, org::scalegraph::util::MemoryChunk<x10_long> recvRequests, org::scalegraph::util::MemoryChunk<TPMGL(T)> src, org::scalegraph::util::MemoryChunk<TPMGL(T)> reply) : idx127306(idx127306), i_range127310(i_range127310), recvRequests(recvRequests), src(src), reply(reply) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__5<TPMGL(T) > >org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__5<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__5<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__5<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__5<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__6<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127332 = ((x10_long) (idx127334));
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127333 = i_range127338;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88573domain127327 = r127333;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88573min127328 = i88573domain127327->FMGL(min);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88573max127329 = i88573domain127327->FMGL(max);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127330;
                for (
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127330 = i88573min127328; ((i127330) <= (i88573max127329));
                     
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127330 = ((x10_long) ((i127330) + (((x10_long)1ll)))))
                {
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127331 = i127330;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index127320 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127321 = i127331;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret127322;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((reqIdx->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127321) < (((x10_long) (((x10_int)0))))) ||
                                ((index127321) >= (reqIdx->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127321), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127322 = (reqIdx->FMGL(data))[index127321];
                        ret127322;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value127323 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127324 = i127331;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret127325;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvData->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127324) < (((x10_long) (((x10_int)0))))) ||
                                ((index127324) >= (recvData->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127324), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127325 = (recvData->FMGL(data))[index127324];
                        ret127325;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret127326;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((dst->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index127320) < (((x10_long) (((x10_int)0))))) ||
                            ((index127320) >= (dst->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127320), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (dst->FMGL(data)).set(index127320, value127323);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127326 = value127323;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret127326;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1363) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1363)) {
                x10::lang::Error* __lowerer__var__3__ = static_cast<x10::lang::Error*>(__exc1363);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__3__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__4__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1363);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__4__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127334;
    x10::lang::LongRange i_range127338;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127334);
        buf.write(this->i_range127338);
        buf.write(this->reqIdx);
        buf.write(this->recvData);
        buf.write(this->dst);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__6<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127334 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127338 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_dst = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__6<TPMGL(T) >(that_idx127334, that_i_range127338, that_reqIdx, that_recvData, that_dst);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__6(x10_int idx127334, x10::lang::LongRange i_range127338, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) : idx127334(idx127334), i_range127338(i_range127338), reqIdx(reqIdx), recvData(recvData), dst(dst) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__6<TPMGL(T) > >org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__6<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__6<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__6<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__6<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

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
    void __apply(x10_long local_ind127359, x10_int remote_role127360, x10_long remote_ind127361) {
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x127356 = counts127371;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y127357 = remote_role127360;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret127358;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r127353 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127354 = y127357;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127355;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127356->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127354) < (((x10_int)0))) || ((((x10_long) (index127354))) >= (x127356->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127354), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127355 = (x127356->FMGL(data))[index127354];
            ret127355;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127350 = y127357;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value127351 = r127353;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret127352;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x127356->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127350) < (((x10_int)0))) || ((((x10_long) (index127350))) >= (x127356->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127350), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x127356->FMGL(data)).set(index127350, value127351);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127352 = value127351;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127352;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret127358 = r127353;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret127358;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts127371;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts127371);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__8<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts127371 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__8<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__8<TPMGL(T) >(that_counts127371);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__8(org::scalegraph::util::MemoryChunk<x10_int> counts127371) : counts127371(counts127371) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:57-59";
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
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts127371 = scatterGather127468->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i127375)));
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88480domain127362 = i_range127368;
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88480min127363 = i88480domain127362->FMGL(min);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88480max127364 = i88480domain127362->FMGL(max);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127365;
                for (
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127365 = i88480min127363; ((i127365) <= (i88480max127364));
                     
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127365 = ((x10_long) ((i127365) + (((x10_long)1ll)))))
                {
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127366 = i127365;
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f127487), 
                      i127366, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__8<TPMGL(T)>)))org_scalegraph_util_Remote__closure__8<TPMGL(T)>(counts127371))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1367) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1367)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1367);
                {
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1367);
                {
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather127468;
    x10_long i127375;
    x10::lang::LongRange i_range127368;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f127487;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather127468);
        buf.write(this->i127375);
        buf.write(this->i_range127368);
        buf.write(this->f127487);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather127468 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127375 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127368 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f127487 = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__7<TPMGL(T) >(that_scatterGather127468, that_i127375, that_i_range127368, that_f127487);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__7(org::scalegraph::util::DistScatterGather scatterGather127468, x10_long i127375, x10::lang::LongRange i_range127368, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f127487) : scatterGather127468(scatterGather127468), i127375(i127375), i_range127368(i_range127368), f127487(f127487) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:55-61";
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
    void __apply(x10_long local_ind127388, x10_int remote_role127389, x10_long remote_ind127390) {
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off127391 = ((x10_int) (((__extension__ ({
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x127392 = offsets127404;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y127393 = remote_role127389;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret127394;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r127379 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index127380 = y127393;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret127381;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x127392->FMGL(data)).isValid())) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index127380) < (((x10_int)0))) || ((((x10_long) (index127380))) >= (x127392->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127380), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret127381 = (x127392->FMGL(data))[index127380];
                ret127381;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127376 = y127393;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value127377 = r127379;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127378;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127392->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127376) < (((x10_int)0))) || ((((x10_long) (index127376))) >= (x127392->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127376), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x127392->FMGL(data)).set(index127376, value127377);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127378 = value127377;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret127378;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret127394 = r127379;
            ret127394;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127382 = off127391;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127383 = remote_ind127390;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127384;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((requests127477->FMGL(data)).isValid()))
            {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127382) < (((x10_int)0))) || ((((x10_long) (index127382))) >= (requests127477->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127382), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (requests127477->FMGL(data)).set(index127382, value127383);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127384 = value127383;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127384;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127385 = off127391;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127386 = local_ind127388;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127387;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqIdx127478->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127385) < (((x10_int)0))) || ((((x10_long) (index127385))) >= (reqIdx127478->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127385), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx127478->FMGL(data)).set(index127385, value127386);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127387 = value127386;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127387;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets127404;
    org::scalegraph::util::MemoryChunk<x10_long> requests127477;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx127478;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets127404);
        buf.write(this->requests127477);
        buf.write(this->reqIdx127478);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__10<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets127404 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests127477 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx127478 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__10<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__10<TPMGL(T) >(that_offsets127404, that_requests127477, that_reqIdx127478);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__10(org::scalegraph::util::MemoryChunk<x10_int> offsets127404, org::scalegraph::util::MemoryChunk<x10_long> requests127477, org::scalegraph::util::MemoryChunk<x10_long> reqIdx127478) : offsets127404(offsets127404), requests127477(requests127477), reqIdx127478(reqIdx127478) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:72-76";
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
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets127404 = scatterGather127468->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i127408)));
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88517domain127395 = i_range127401;
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88517min127396 = i88517domain127395->FMGL(min);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88517max127397 = i88517domain127395->FMGL(max);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127398;
                for (
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127398 = i88517min127396; ((i127398) <= (i88517max127397));
                     
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127398 = ((x10_long) ((i127398) + (((x10_long)1ll)))))
                {
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127399 = i127398;
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f127487), 
                      i127399, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__10<TPMGL(T)>)))org_scalegraph_util_Remote__closure__10<TPMGL(T)>(offsets127404, requests127477, reqIdx127478))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1370) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1370)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1370);
                {
                    
                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1370);
                {
                    
                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather127468;
    x10_long i127408;
    x10::lang::LongRange i_range127401;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f127487;
    org::scalegraph::util::MemoryChunk<x10_long> requests127477;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx127478;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather127468);
        buf.write(this->i127408);
        buf.write(this->i_range127401);
        buf.write(this->f127487);
        buf.write(this->requests127477);
        buf.write(this->reqIdx127478);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather127468 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127408 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127401 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f127487 = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests127477 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx127478 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__9<TPMGL(T) >(that_scatterGather127468, that_i127408, that_i_range127401, that_f127487, that_requests127477, that_reqIdx127478);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__9(org::scalegraph::util::DistScatterGather scatterGather127468, x10_long i127408, x10::lang::LongRange i_range127401, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f127487, org::scalegraph::util::MemoryChunk<x10_long> requests127477, org::scalegraph::util::MemoryChunk<x10_long> reqIdx127478) : scatterGather127468(scatterGather127468), i127408(i127408), i_range127401(i_range127401), f127487(f127487), requests127477(requests127477), reqIdx127478(reqIdx127478) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:70-78";
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
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__11<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127421 = ((x10_long) (idx127423));
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127422 = i_range127427;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88554domain127416 = r127422;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88554min127417 = i88554domain127416->FMGL(min);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88554max127418 = i88554domain127416->FMGL(max);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127419;
                for (
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127419 = i88554min127417; ((i127419) <= (i88554max127418));
                     
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127419 = ((x10_long) ((i127419) + (((x10_long)1ll)))))
                {
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127420 = i127419;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index127409 = i127420;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value127410 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127411 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index127412 = i127420;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret127413;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((recvRequests127479->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index127412) < (((x10_long) (((x10_int)0))))) ||
                                    ((index127412) >= (recvRequests127479->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127412), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127413 = (recvRequests127479->
                                           FMGL(data))[index127412];
                            ret127413;
                        }))
                        ;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret127414;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((src127484->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127411) < (((x10_long) (((x10_int)0))))) ||
                                ((index127411) >= (src127484->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127411), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127414 = (src127484->FMGL(data))[index127411];
                        ret127414;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret127415;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reply127481->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index127409) < (((x10_long) (((x10_int)0))))) ||
                            ((index127409) >= (reply127481->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127409), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reply127481->FMGL(data)).set(index127409, value127410);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127415 = value127410;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret127415;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1373) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1373)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1373);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1373);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__3__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127423;
    x10::lang::LongRange i_range127427;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests127479;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src127484;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply127481;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127423);
        buf.write(this->i_range127427);
        buf.write(this->recvRequests127479);
        buf.write(this->src127484);
        buf.write(this->reply127481);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__11<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127423 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127427 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests127479 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_src127484 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply127481 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__11<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__11<TPMGL(T) >(that_idx127423, that_i_range127427, that_recvRequests127479, that_src127484, that_reply127481);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__11(x10_int idx127423, x10::lang::LongRange i_range127427, org::scalegraph::util::MemoryChunk<x10_long> recvRequests127479, org::scalegraph::util::MemoryChunk<TPMGL(T)> src127484, org::scalegraph::util::MemoryChunk<TPMGL(T)> reply127481) : idx127423(idx127423), i_range127427(i_range127427), recvRequests127479(recvRequests127479), src127484(src127484), reply127481(reply127481) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__11<TPMGL(T) > >org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__11<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__11<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__11<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__11<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__12<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127449 = ((x10_long) (idx127451));
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127450 = i_range127455;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88573domain127444 = r127450;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88573min127445 = i88573domain127444->FMGL(min);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88573max127446 = i88573domain127444->FMGL(max);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127447;
                for (
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127447 = i88573min127445; ((i127447) <= (i88573max127446));
                     
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127447 = ((x10_long) ((i127447) + (((x10_long)1ll)))))
                {
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127448 = i127447;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index127437 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127438 = i127448;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret127439;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((reqIdx127478->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127438) < (((x10_long) (((x10_int)0))))) ||
                                ((index127438) >= (reqIdx127478->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127438), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127439 = (reqIdx127478->FMGL(data))[index127438];
                        ret127439;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value127440 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127441 = i127448;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret127442;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvData127482->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127441) < (((x10_long) (((x10_int)0))))) ||
                                ((index127441) >= (recvData127482->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127441), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127442 = (recvData127482->FMGL(data))[index127441];
                        ret127442;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret127443;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((dst127485->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index127437) < (((x10_long) (((x10_int)0))))) ||
                            ((index127437) >= (dst127485->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127437), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (dst127485->FMGL(data)).set(index127437, value127440);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127443 = value127440;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret127443;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1376) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1376)) {
                x10::lang::Error* __lowerer__var__3__ = static_cast<x10::lang::Error*>(__exc1376);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__3__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__4__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1376);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__4__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127451;
    x10::lang::LongRange i_range127455;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx127478;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData127482;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst127485;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127451);
        buf.write(this->i_range127455);
        buf.write(this->reqIdx127478);
        buf.write(this->recvData127482);
        buf.write(this->dst127485);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__12<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__12<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127451 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127455 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx127478 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData127482 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_dst127485 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__12<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__12<TPMGL(T) >(that_idx127451, that_i_range127455, that_reqIdx127478, that_recvData127482, that_dst127485);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__12(x10_int idx127451, x10::lang::LongRange i_range127455, org::scalegraph::util::MemoryChunk<x10_long> reqIdx127478, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData127482, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst127485) : idx127451(idx127451), i_range127455(i_range127455), reqIdx127478(reqIdx127478), recvData127482(recvData127482), dst127485(dst127485) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__12<TPMGL(T) > >org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__12<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__12<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__12<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__12<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__14<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long local_ind127497, x10_int remote_role127498, x10_long remote_ind127499) {
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x127494 = counts127509;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y127495 = remote_role127498;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret127496;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r127491 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127492 = y127495;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127493;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127494->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127492) < (((x10_int)0))) || ((((x10_long) (index127492))) >= (x127494->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127492), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127493 = (x127494->FMGL(data))[index127492];
            ret127493;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127488 = y127495;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value127489 = r127491;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret127490;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x127494->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127488) < (((x10_int)0))) || ((((x10_long) (index127488))) >= (x127494->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127488), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x127494->FMGL(data)).set(index127488, value127489);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127490 = value127489;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127490;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret127496 = r127491;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret127496;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts127509;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts127509);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__14<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts127509 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__14<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__14<TPMGL(T) >(that_counts127509);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__14(org::scalegraph::util::MemoryChunk<x10_int> counts127509) : counts127509(counts127509) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:113-115";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__14<TPMGL(T) > >org_scalegraph_util_Remote__closure__14<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__14<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__14<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__14<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >, &org_scalegraph_util_Remote__closure__14<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

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
        
        //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts127509 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i127513)));
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88592domain127500 = i_range127506;
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88592min127501 = i88592domain127500->FMGL(min);
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88592max127502 = i88592domain127500->FMGL(max);
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127503;
                for (
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127503 = i88592min127501; ((i127503) <= (i88592max127502));
                     
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127503 = ((x10_long) ((i127503) + (((x10_long)1ll)))))
                {
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127504 = i127503;
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i127504, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__14<TPMGL(T)>)))org_scalegraph_util_Remote__closure__14<TPMGL(T)>(counts127509))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1380) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1380)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1380);
                {
                    
                    //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1380);
                {
                    
                    //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127513;
    x10::lang::LongRange i_range127506;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127513);
        buf.write(this->i_range127506);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__13<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127513 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127506 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__13<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__13<TPMGL(T) >(that_scatterGather, that_i127513, that_i_range127506, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__13(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127513, x10::lang::LongRange i_range127506, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i127513(i127513), i_range127506(i_range127506), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:111-117";
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
    
    static typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__16<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long local_ind127526, x10_int remote_role127527, x10_long remote_ind127528) {
        
        //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off127529 = ((x10_int) (((__extension__ ({
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x127530 = offsets127542;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y127531 = remote_role127527;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret127532;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r127517 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index127518 = y127531;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret127519;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x127530->FMGL(data)).isValid())) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index127518) < (((x10_int)0))) || ((((x10_long) (index127518))) >= (x127530->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127518), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret127519 = (x127530->FMGL(data))[index127518];
                ret127519;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127514 = y127531;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value127515 = r127517;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127516;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127530->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127514) < (((x10_int)0))) || ((((x10_long) (index127514))) >= (x127530->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127514), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x127530->FMGL(data)).set(index127514, value127515);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127516 = value127515;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret127516;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret127532 = r127517;
            ret127532;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127520 = off127529;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127521 = remote_ind127528;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127522;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((requests->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127520) < (((x10_int)0))) || ((((x10_long) (index127520))) >= (requests->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127520), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (requests->FMGL(data)).set(index127520, value127521);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127522 = value127521;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127522;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127523 = off127529;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127524 = local_ind127526;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127525;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqIdx->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127523) < (((x10_int)0))) || ((((x10_long) (index127523))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127523), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index127523, value127524);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127525 = value127524;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127525;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets127542;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets127542);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__16<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets127542 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__16<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__16<TPMGL(T) >(that_offsets127542, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__16(org::scalegraph::util::MemoryChunk<x10_int> offsets127542, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets127542(offsets127542), requests(requests), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:128-132";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::template itable <org_scalegraph_util_Remote__closure__16<TPMGL(T) > >org_scalegraph_util_Remote__closure__16<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__16<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__16<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__16<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >, &org_scalegraph_util_Remote__closure__16<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

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
        
        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets127542 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i127546)));
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88629domain127533 = i_range127539;
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88629min127534 = i88629domain127533->FMGL(min);
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88629max127535 = i88629domain127533->FMGL(max);
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127536;
                for (
                     //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127536 = i88629min127534; ((i127536) <= (i88629max127535));
                     
                     //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127536 = ((x10_long) ((i127536) + (((x10_long)1ll)))))
                {
                    
                    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127537 = i127536;
                    
                    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i127537, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__16<TPMGL(T)>)))org_scalegraph_util_Remote__closure__16<TPMGL(T)>(offsets127542, requests, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1383) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1383)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1383);
                {
                    
                    //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1383);
                {
                    
                    //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127546;
    x10::lang::LongRange i_range127539;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127546);
        buf.write(this->i_range127539);
        buf.write(this->f);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__15<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127546 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127539 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__15<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__15<TPMGL(T) >(that_scatterGather, that_i127546, that_i_range127539, that_f, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__15(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127546, x10::lang::LongRange i_range127539, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i127546(i127546), i_range127539(i_range127539), f(f), requests(requests), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:126-134";
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
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__17 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__17<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127557 = ((x10_long) (idx127559));
            
            //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127558 = i_range127563;
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88666domain127552 = r127558;
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88666min127553 = i88666domain127552->FMGL(min);
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88666max127554 = i88666domain127552->FMGL(max);
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127555;
                for (
                     //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127555 = i88666min127553; ((i127555) <= (i88666max127554));
                     
                     //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127555 = ((x10_long) ((i127555) + (((x10_long)1ll)))))
                {
                    
                    //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127556 = i127555;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index127547 = i127556;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value127548 = x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(getter), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index127549 = i127556;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret127550;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((recvRequests->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index127549) < (((x10_long) (((x10_int)0))))) ||
                                  ((index127549) >= (recvRequests->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127549), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret127550 = (recvRequests->FMGL(data))[index127549];
                          ret127550;
                      }))
                      );
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret127551;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reply->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index127547) < (((x10_long) (((x10_int)0))))) ||
                            ((index127547) >= (reply->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127547), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reply->FMGL(data)).set(index127547, value127548);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127551 = value127548;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret127551;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1386) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1386)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1386);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1386);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__3__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127559;
    x10::lang::LongRange i_range127563;
    x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127559);
        buf.write(this->i_range127563);
        buf.write(this->getter);
        buf.write(this->recvRequests);
        buf.write(this->reply);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__17<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127559 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127563 = buf.read<x10::lang::LongRange>();
        x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_getter = buf.read<x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__17<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__17<TPMGL(T) >(that_idx127559, that_i_range127563, that_getter, that_recvRequests, that_reply);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__17(x10_int idx127559, x10::lang::LongRange i_range127563, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter, org::scalegraph::util::MemoryChunk<x10_long> recvRequests, org::scalegraph::util::MemoryChunk<TPMGL(T)> reply) : idx127559(idx127559), i_range127563(i_range127563), getter(getter), recvRequests(recvRequests), reply(reply) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__17<TPMGL(T) > >org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__17<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__17<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__17<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__17<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__17_CLOSURE
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
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127582 = ((x10_long) (idx127584));
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127583 = i_range127588;
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88685domain127577 = r127583;
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88685min127578 = i88685domain127577->FMGL(min);
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88685max127579 = i88685domain127577->FMGL(max);
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127580;
                for (
                     //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127580 = i88685min127578; ((i127580) <= (i88685max127579));
                     
                     //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127580 = ((x10_long) ((i127580) + (((x10_long)1ll)))))
                {
                    
                    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127581 = i127580;
                    
                    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(setter), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index127573 = i127581;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret127574;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((reqIdx->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index127573) < (((x10_long) (((x10_int)0))))) ||
                                  ((index127573) >= (reqIdx->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127573), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret127574 = (reqIdx->FMGL(data))[index127573];
                          ret127574;
                      }))
                      , (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index127575 = i127581;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          TPMGL(T) ret127576;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((recvData->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index127575) < (((x10_long) (((x10_int)0))))) ||
                                  ((index127575) >= (recvData->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127575), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret127576 = (recvData->FMGL(data))[index127575];
                          ret127576;
                      }))
                      );
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1389) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1389)) {
                x10::lang::Error* __lowerer__var__3__ = static_cast<x10::lang::Error*>(__exc1389);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__3__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__4__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1389);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__4__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127584;
    x10::lang::LongRange i_range127588;
    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127584);
        buf.write(this->i_range127588);
        buf.write(this->setter);
        buf.write(this->reqIdx);
        buf.write(this->recvData);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__18<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__18<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127584 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127588 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* that_setter = buf.read<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__18<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__18<TPMGL(T) >(that_idx127584, that_i_range127588, that_setter, that_reqIdx, that_recvData);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__18(x10_int idx127584, x10::lang::LongRange i_range127588, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData) : idx127584(idx127584), i_range127588(i_range127588), setter(setter), reqIdx(reqIdx), recvData(recvData) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__18<TPMGL(T) > >org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__18<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__18<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__18<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__18<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__20_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__20 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__20<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role127609, x10_long dst_ind127610, TPMGL(T) value127611) {
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x127606 = counts127621;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y127607 = dst_role127609;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret127608;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r127603 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127604 = y127607;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127605;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127606->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127604) < (((x10_int)0))) || ((((x10_long) (index127604))) >= (x127606->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127604), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127605 = (x127606->FMGL(data))[index127604];
            ret127605;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127600 = y127607;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value127601 = r127603;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret127602;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x127606->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127600) < (((x10_int)0))) || ((((x10_long) (index127600))) >= (x127606->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127600), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x127606->FMGL(data)).set(index127600, value127601);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127602 = value127601;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127602;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret127608 = r127603;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret127608;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts127621;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts127621);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__20<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__20<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts127621 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__20<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__20<TPMGL(T) >(that_counts127621);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__20(org::scalegraph::util::MemoryChunk<x10_int> counts127621) : counts127621(counts127621) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:167-169";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__20<TPMGL(T) > >org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__20<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__20<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__20<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__20<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__20_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__19_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__19 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__19<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts127621 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i127625)));
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88704domain127612 = i_range127618;
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88704min127613 = i88704domain127612->FMGL(min);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88704max127614 = i88704domain127612->FMGL(max);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127615;
                for (
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127615 = i88704min127613; ((i127615) <= (i88704max127614));
                     
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127615 = ((x10_long) ((i127615) + (((x10_long)1ll)))))
                {
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127616 = i127615;
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i127616, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__20<TPMGL(T)>)))org_scalegraph_util_Remote__closure__20<TPMGL(T)>(counts127621))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1393) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1393)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1393);
                {
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1393);
                {
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127625;
    x10::lang::LongRange i_range127618;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127625);
        buf.write(this->i_range127618);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__19<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__19<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127625 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127618 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__19<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__19<TPMGL(T) >(that_scatterGather, that_i127625, that_i_range127618, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__19(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127625, x10::lang::LongRange i_range127618, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i127625(i127625), i_range127618(i_range127618), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:165-171";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__19<TPMGL(T) > >org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__19<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__19<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__19<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__19<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__19_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__22_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__22 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__22<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role127638, x10_long dst_ind127639, TPMGL(T) value127640) {
        
        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off127641 = ((x10_int) (((__extension__ ({
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x127642 = offsets127654;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y127643 = dst_role127638;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret127644;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r127629 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index127630 = y127643;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret127631;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x127642->FMGL(data)).isValid())) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index127630) < (((x10_int)0))) || ((((x10_long) (index127630))) >= (x127642->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127630), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret127631 = (x127642->FMGL(data))[index127630];
                ret127631;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127626 = y127643;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value127627 = r127629;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127628;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127642->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127626) < (((x10_int)0))) || ((((x10_long) (index127626))) >= (x127642->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127626), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x127642->FMGL(data)).set(index127626, value127627);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127628 = value127627;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret127628;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret127644 = r127629;
            ret127644;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127632 = off127641;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) value127633 = value127640;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) ret127634;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqVal->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127632) < (((x10_int)0))) || ((((x10_long) (index127632))) >= (reqVal->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127632), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqVal->FMGL(data)).set(index127632, value127633);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127634 = value127633;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127634;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127635 = off127641;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127636 = dst_ind127639;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127637;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqIdx->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127635) < (((x10_int)0))) || ((((x10_long) (index127635))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127635), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index127635, value127636);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127637 = value127636;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127637;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets127654;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets127654);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__22<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets127654 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__22<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__22<TPMGL(T) >(that_offsets127654, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__22(org::scalegraph::util::MemoryChunk<x10_int> offsets127654, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets127654(offsets127654), reqVal(reqVal), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:182-186";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__22<TPMGL(T) > >org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__22<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__22<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__22<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__22<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__22_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__21_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__21 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__21<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets127654 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i127658)));
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88741domain127645 = i_range127651;
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88741min127646 = i88741domain127645->FMGL(min);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88741max127647 = i88741domain127645->FMGL(max);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127648;
                for (
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127648 = i88741min127646; ((i127648) <= (i88741max127647));
                     
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127648 = ((x10_long) ((i127648) + (((x10_long)1ll)))))
                {
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127649 = i127648;
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i127649, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__22<TPMGL(T)>)))org_scalegraph_util_Remote__closure__22<TPMGL(T)>(offsets127654, reqVal, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1396) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1396)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1396);
                {
                    
                    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1396);
                {
                    
                    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127658;
    x10::lang::LongRange i_range127651;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127658);
        buf.write(this->i_range127651);
        buf.write(this->f);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__21<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__21<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127658 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127651 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__21<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__21<TPMGL(T) >(that_scatterGather, that_i127658, that_i_range127651, that_f, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__21(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127658, x10::lang::LongRange i_range127651, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i127658(i127658), i_range127651(i_range127651), f(f), reqVal(reqVal), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:180-188";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__21<TPMGL(T) > >org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__21<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__21<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__21<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__21<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__21_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__23_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__23 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__23<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127671 = ((x10_long) (idx127673));
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127672 = i_range127677;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88778domain127666 = r127672;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88778min127667 = i88778domain127666->FMGL(min);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88778max127668 = i88778domain127666->FMGL(max);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127669;
                for (
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127669 = i88778min127667; ((i127669) <= (i88778max127668));
                     
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127669 = ((x10_long) ((i127669) + (((x10_long)1ll)))))
                {
                    
                    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127670 = i127669;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index127659 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127660 = i127670;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret127661;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvIdx->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127660) < (((x10_long) (((x10_int)0))))) ||
                                ((index127660) >= (recvIdx->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127660), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127661 = (recvIdx->FMGL(data))[index127660];
                        ret127661;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value127662 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index127663 = i127670;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret127664;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvVal->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index127663) < (((x10_long) (((x10_int)0))))) ||
                                ((index127663) >= (recvVal->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127663), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret127664 = (recvVal->FMGL(data))[index127663];
                        ret127664;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret127665;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((array->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index127659) < (((x10_long) (((x10_int)0))))) ||
                            ((index127659) >= (array->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127659), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (array->FMGL(data)).set(index127659, value127662);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127665 = value127662;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret127665;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1399) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1399)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1399);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1399);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__3__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127673;
    x10::lang::LongRange i_range127677;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> array;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127673);
        buf.write(this->i_range127677);
        buf.write(this->recvIdx);
        buf.write(this->recvVal);
        buf.write(this->array);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__23<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__23<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127673 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127677 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_array = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__23<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__23<TPMGL(T) >(that_idx127673, that_i_range127677, that_recvIdx, that_recvVal, that_array);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__23(x10_int idx127673, x10::lang::LongRange i_range127677, org::scalegraph::util::MemoryChunk<x10_long> recvIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal, org::scalegraph::util::MemoryChunk<TPMGL(T)> array) : idx127673(idx127673), i_range127677(i_range127677), recvIdx(recvIdx), recvVal(recvVal), array(array) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__23<TPMGL(T) > >org_scalegraph_util_Remote__closure__23<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__23<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__23<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__23<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__23<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__23<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__23<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__23_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__25_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__25 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__25<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role127697, x10_long dst_ind127698, TPMGL(T) value127699) {
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x127694 = counts127709;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y127695 = dst_role127697;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret127696;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r127691 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127692 = y127695;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127693;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127694->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127692) < (((x10_int)0))) || ((((x10_long) (index127692))) >= (x127694->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127692), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127693 = (x127694->FMGL(data))[index127692];
            ret127693;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127688 = y127695;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value127689 = r127691;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret127690;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x127694->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127688) < (((x10_int)0))) || ((((x10_long) (index127688))) >= (x127694->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127688), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x127694->FMGL(data)).set(index127688, value127689);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127690 = value127689;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127690;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret127696 = r127691;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret127696;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts127709;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts127709);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__25<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__25<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts127709 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__25<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__25<TPMGL(T) >(that_counts127709);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__25(org::scalegraph::util::MemoryChunk<x10_int> counts127709) : counts127709(counts127709) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:210-212";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__25<TPMGL(T) > >org_scalegraph_util_Remote__closure__25<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__25<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__25<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__25<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__25<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__25<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__25<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__25_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__24_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__24 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__24<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts127709 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i127713)));
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88797domain127700 = i_range127706;
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88797min127701 = i88797domain127700->FMGL(min);
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88797max127702 = i88797domain127700->FMGL(max);
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127703;
                for (
                     //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127703 = i88797min127701; ((i127703) <= (i88797max127702));
                     
                     //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127703 = ((x10_long) ((i127703) + (((x10_long)1ll)))))
                {
                    
                    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127704 = i127703;
                    
                    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i127704, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__25<TPMGL(T)>)))org_scalegraph_util_Remote__closure__25<TPMGL(T)>(counts127709))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1403) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1403)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1403);
                {
                    
                    //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1403);
                {
                    
                    //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127713;
    x10::lang::LongRange i_range127706;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127713);
        buf.write(this->i_range127706);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__24<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__24<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127713 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127706 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__24<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__24<TPMGL(T) >(that_scatterGather, that_i127713, that_i_range127706, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__24(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127713, x10::lang::LongRange i_range127706, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i127713(i127713), i_range127706(i_range127706), f(f) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:208-214";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__24<TPMGL(T) > >org_scalegraph_util_Remote__closure__24<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__24<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__24<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__24<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__24<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__24<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__24<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__24_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__27_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_3.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__27 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__27<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int dst_role127726, x10_long dst_ind127727, TPMGL(T) value127728) {
        
        //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off127729 = ((x10_int) (((__extension__ ({
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x127730 = offsets127742;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y127731 = dst_role127726;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret127732;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r127717 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index127718 = y127731;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret127719;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x127730->FMGL(data)).isValid())) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index127718) < (((x10_int)0))) || ((((x10_long) (index127718))) >= (x127730->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127718), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret127719 = (x127730->FMGL(data))[index127718];
                ret127719;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index127714 = y127731;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value127715 = r127717;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret127716;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x127730->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index127714) < (((x10_int)0))) || ((((x10_long) (index127714))) >= (x127730->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127714), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x127730->FMGL(data)).set(index127714, value127715);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret127716 = value127715;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret127716;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret127732 = r127717;
            ret127732;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127720 = off127729;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) value127721 = value127728;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) ret127722;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqVal->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127720) < (((x10_int)0))) || ((((x10_long) (index127720))) >= (reqVal->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127720), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqVal->FMGL(data)).set(index127720, value127721);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127722 = value127721;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127722;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index127723 = off127729;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value127724 = dst_ind127727;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret127725;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqIdx->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index127723) < (((x10_int)0))) || ((((x10_long) (index127723))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127723), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index127723, value127724);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret127725 = value127724;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret127725;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets127742;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets127742);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__27<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__27<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets127742 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__27<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__27<TPMGL(T) >(that_offsets127742, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__27(org::scalegraph::util::MemoryChunk<x10_int> offsets127742, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets127742(offsets127742), reqVal(reqVal), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:225-230";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::template itable <org_scalegraph_util_Remote__closure__27<TPMGL(T) > >org_scalegraph_util_Remote__closure__27<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__27<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__27<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__27<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >, &org_scalegraph_util_Remote__closure__27<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__27<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__27<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__27_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__26_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__26 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__26<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
        try {
            
            //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets127742 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i127746)));
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88834domain127733 = i_range127739;
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88834min127734 = i88834domain127733->FMGL(min);
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88834max127735 = i88834domain127733->FMGL(max);
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127736;
                for (
                     //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127736 = i88834min127734; ((i127736) <= (i88834max127735));
                     
                     //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127736 = ((x10_long) ((i127736) + (((x10_long)1ll)))))
                {
                    
                    //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127737 = i127736;
                    
                    //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i127737, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__27<TPMGL(T)>)))org_scalegraph_util_Remote__closure__27<TPMGL(T)>(offsets127742, reqVal, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1406) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1406)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1406);
                {
                    
                    //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1406);
                {
                    
                    //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_long i127746;
    x10::lang::LongRange i_range127739;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i127746);
        buf.write(this->i_range127739);
        buf.write(this->f);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__26<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__26<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i127746 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range127739 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__26<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__26<TPMGL(T) >(that_scatterGather, that_i127746, that_i_range127739, that_f, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__26(org::scalegraph::util::DistScatterGather scatterGather, x10_long i127746, x10::lang::LongRange i_range127739, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i127746(i127746), i_range127739(i_range127739), f(f), reqVal(reqVal), reqIdx(reqIdx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10:223-232";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__26<TPMGL(T) > >org_scalegraph_util_Remote__closure__26<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__26<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__26<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__26<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__26<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__26<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__26<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__26_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__28_CLOSURE
#define ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Remote__closure__28 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__28<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long tid127756 = ((x10_long) (idx127758));
            
            //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r127757 = i_range127762;
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i88871domain127751 = r127757;
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88871min127752 = i88871domain127751->FMGL(min);
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i88871max127753 = i88871domain127751->FMGL(max);
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i127754;
                for (
                     //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i127754 = i88871min127752; ((i127754) <= (i88871max127753));
                     
                     //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i127754 = ((x10_long) ((i127754) + (((x10_long)1ll)))))
                {
                    
                    //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i127755 = i127754;
                    
                    //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(setter), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index127747 = i127755;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret127748;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((recvIdx->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index127747) < (((x10_long) (((x10_int)0))))) ||
                                  ((index127747) >= (recvIdx->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127747), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret127748 = (recvIdx->FMGL(data))[index127747];
                          ret127748;
                      }))
                      , (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index127749 = i127755;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          TPMGL(T) ret127750;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((recvVal->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index127749) < (((x10_long) (((x10_int)0))))) ||
                                  ((index127749) >= (recvVal->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index127749), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret127750 = (recvVal->FMGL(data))[index127749];
                          ret127750;
                      }))
                      );
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1409) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1409)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1409);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1409);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__3__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx127758;
    x10::lang::LongRange i_range127762;
    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx127758);
        buf.write(this->i_range127762);
        buf.write(this->setter);
        buf.write(this->recvIdx);
        buf.write(this->recvVal);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__28<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__28<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx127758 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range127762 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* that_setter = buf.read<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__28<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__28<TPMGL(T) >(that_idx127758, that_i_range127762, that_setter, that_recvIdx, that_recvVal);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__28(x10_int idx127758, x10::lang::LongRange i_range127762, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter, org::scalegraph::util::MemoryChunk<x10_long> recvIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal) : idx127758(idx127758), i_range127762(i_range127762), setter(setter), recvIdx(recvIdx), recvVal(recvVal) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Remote__closure__28<TPMGL(T) > >org_scalegraph_util_Remote__closure__28<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Remote__closure__28<TPMGL(T) >::__apply, &org_scalegraph_util_Remote__closure__28<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Remote__closure__28<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Remote__closure__28<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Remote__closure__28<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Remote__closure__28<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_REMOTE__CLOSURE__28_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1353
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1353
template<class TPMGL(T)> void org::scalegraph::util::Remote::get(x10::util::Team* team,
                                                                 org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                                 org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                                 x10::lang::LongRange range,
                                                                 x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) {
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather scatterGather =
       org::scalegraph::util::DistScatterGather::_alloc();
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
    (scatterGather)->::org::scalegraph::util::DistScatterGather::_constructor(
      team);
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id9567 = org::scalegraph::util::Remote::splitChunks(
                                            range);
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long nthreads = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret126500;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret126501; __ret126501: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(id9567)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret126500 = (x10aux::nullCheck(id9567)->FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret126501_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(id9567)->
                                FMGL(region)->contains(((x10_int)0))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret126500 = (x10aux::nullCheck(id9567)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id9567)->
                                                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret126501_end_;
            }
            
        }goto __ret126501_end_; __ret126501_end_: ;
        }
        ret126500;
        }))
        ;
        
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret126503;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret126504; __ret126504: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(id9567)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret126503 = (x10aux::nullCheck(id9567)->FMGL(raw))->__apply(((x10_int)1));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret126504_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(id9567)->
                                FMGL(region)->contains(((x10_int)1))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)1));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret126503 = (x10aux::nullCheck(id9567)->FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id9567)->
                                                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret126504_end_;
            }
            
        }goto __ret126504_end_; __ret126504_end_: ;
        }
        ret126503;
        }))
        ;
        
    {
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var142 = x10::lang::Runtime::startFinish();
        {
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable127845 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i88499min127255 = ((x10_long) (((x10_int)0)));
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i88499max127256 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i127257;
                            for (
                                 //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i127257 = i88499min127255;
                                 ((i127257) <= (i88499max127256));
                                 
                                 //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i127257 = ((x10_long) ((i127257) + (((x10_long)1ll)))))
                            {
                                
                                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i127258 = i127257;
                                
                                //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start127250 = ((x10_long) ((range->
                                                                         FMGL(min)) + (((x10_long) ((i127258) * (chunk_size))))));
                                
                                //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range127251 =
                                  x10::lang::LongRange::_make(i_start127250, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a127252 = range->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b127253 = ((x10_long) ((((x10_long) ((i_start127250) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                    ((a127252) < (b127253))
                                      ? (a127252) : (b127253);
                                }))
                                );
                                
                                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__1<TPMGL(T)>)))org_scalegraph_util_Remote__closure__1<TPMGL(T)>(scatterGather, i127258, i_range127251, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1355) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1355);
                        {
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1356) {
                if (true) {
                    x10::lang::CheckedThrowable* formal127846 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1356);
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable127845 = formal127846;
                    }
                } else
                throw;
            }
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127845)))
            {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable127845))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127845));
                }
                
            }
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var142);
            }
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127845)))
            {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127845)))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127845));
                }
                
            }
            
        }
    }
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::DistScatterGather::sum();
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> requests =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var143 = x10::lang::Runtime::startFinish();
        {
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable127848 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i88536min127288 = ((x10_long) (((x10_int)0)));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i88536max127289 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i127290;
                            for (
                                 //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i127290 = i88536min127288;
                                 ((i127290) <= (i88536max127289));
                                 
                                 //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i127290 = ((x10_long) ((i127290) + (((x10_long)1ll)))))
                            {
                                
                                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i127291 = i127290;
                                
                                //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start127283 = ((x10_long) ((range->
                                                                         FMGL(min)) + (((x10_long) ((i127291) * (chunk_size))))));
                                
                                //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range127284 =
                                  x10::lang::LongRange::_make(i_start127283, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a127285 = range->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b127286 = ((x10_long) ((((x10_long) ((i_start127283) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                    ((a127285) < (b127286))
                                      ? (a127285) : (b127286);
                                }))
                                );
                                
                                //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__3<TPMGL(T)>)))org_scalegraph_util_Remote__closure__3<TPMGL(T)>(scatterGather, i127291, i_range127284, f, requests, reqIdx))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1358) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1358);
                        {
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1359) {
                if (true) {
                    x10::lang::CheckedThrowable* formal127849 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1359);
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable127848 = formal127849;
                    }
                } else
                throw;
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127848)))
            {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable127848))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127848));
                }
                
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var143);
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127848)))
            {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127848)))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127848));
                }
                
            }
            
        }
    }
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests =
      scatterGather->template scatter<x10_long >(requests);
    
    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (recvCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range127348 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvRequests->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size127316 = ((x10_long) ((((x10_long) ((range127348->
                                                        FMGL(max)) - (range127348->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads127317 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size127318 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a127319 = ((x10_long) ((((x10_long) ((((x10_long) ((size127316) + (((x10_long) (nthreads127317)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127317)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a127319) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a127319);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var144 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable127851 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max127313 = ((x10_int) ((nthreads127317) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i127314;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i127314 = ((x10_int)0); ((i127314) <= (i76030max127313));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i127314 = ((x10_int) ((i127314) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i127315 = i127314;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx127306 = i127315;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start127307 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a127308 = ((x10_long) ((range127348->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b127309 = ((x10_long) ((range127348->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i127315))) * (chunk_size127318))))));
                                    ((a127308) < (b127309))
                                      ? (a127308) : (b127309);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range127310 =
                                  x10::lang::LongRange::_make(i_start127307, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a127311 = range127348->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b127312 = ((x10_long) ((((x10_long) ((i_start127307) + (chunk_size127318)))) - (((x10_long) (((x10_int)1))))));
                                    ((a127311) < (b127312))
                                      ? (a127311) : (b127312);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__5<TPMGL(T)>)))org_scalegraph_util_Remote__closure__5<TPMGL(T)>(idx127306, i_range127310, recvRequests, src, reply))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1361) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__2__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1361);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__2__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1362) {
                if (true) {
                    x10::lang::CheckedThrowable* formal127852 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1362);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable127851 = formal127852;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127851)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable127851))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127851));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var144);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127851)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127851)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127851));
                }
                
            }
            
        }
    }
    
    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData =
      scatterGather->template gather<TPMGL(T) >(reply);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range127349 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((requests->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size127344 = ((x10_long) ((((x10_long) ((range127349->
                                                        FMGL(max)) - (range127349->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads127345 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size127346 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a127347 = ((x10_long) ((((x10_long) ((((x10_long) ((size127344) + (((x10_long) (nthreads127345)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127345)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a127347) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a127347);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var145 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable127854 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max127341 = ((x10_int) ((nthreads127345) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i127342;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i127342 = ((x10_int)0); ((i127342) <= (i76030max127341));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i127342 = ((x10_int) ((i127342) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i127343 = i127342;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx127334 = i127343;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start127335 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a127336 = ((x10_long) ((range127349->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b127337 = ((x10_long) ((range127349->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i127343))) * (chunk_size127346))))));
                                    ((a127336) < (b127337))
                                      ? (a127336) : (b127337);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range127338 =
                                  x10::lang::LongRange::_make(i_start127335, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a127339 = range127349->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b127340 = ((x10_long) ((((x10_long) ((i_start127335) + (chunk_size127346)))) - (((x10_long) (((x10_int)1))))));
                                    ((a127339) < (b127340))
                                      ? (a127339) : (b127340);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__6<TPMGL(T)>)))org_scalegraph_util_Remote__closure__6<TPMGL(T)>(idx127334, i_range127338, reqIdx, recvData, dst))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1364) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__3__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1364);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__3__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1365) {
                if (true) {
                    x10::lang::CheckedThrowable* formal127855 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1365);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable127854 = formal127855;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127854)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable127854))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127854));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var145);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable127854)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127854)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable127854));
                }
                
            }
            
        }
    }
    }
    #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1353
    #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1366
    #define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1366
    template<class TPMGL(T)> void org::scalegraph::util::Remote::get(
      x10::util::Team* team, org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
      x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) {
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> src =
          org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make((__extension__ ({
            array->FMGL(data)->FMGL(size);
        }))
        , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
          array, ((x10_long)0ll), src, ((x10_long)0ll), (__extension__ ({
              array->FMGL(data)->FMGL(size);
          }))
          );
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* team127483 = team;
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> src127484 =
          src;
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> dst127485 =
          array;
        
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range127486 = range;
        
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f127487 =
          f;
        
        //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int teamSize127467 = x10aux::nullCheck(team127483)->size();
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistScatterGather scatterGather127468 =
           org::scalegraph::util::DistScatterGather::_alloc();
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
        (scatterGather127468)->::org::scalegraph::util::DistScatterGather::_constructor(
          team127483);
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_long>* id127469 = org::scalegraph::util::Remote::splitChunks(
                                                  range127486);
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long nthreads127470 = (__extension__ ({
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_long ret127471;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret127472; __ret127472: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(id127469)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127471 = (x10aux::nullCheck(id127469)->
                                   FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127472_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(id127469)->
                                    FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127471 = (x10aux::nullCheck(id127469)->
                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id127469)->
                                                                                       FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127472_end_;
                }
                
            }goto __ret127472_end_; __ret127472_end_: ;
            }
            ret127471;
            }))
            ;
            
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size127473 = (__extension__ ({
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_long ret127474;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret127475; __ret127475: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(id127469)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127474 = (x10aux::nullCheck(id127469)->
                                   FMGL(raw))->__apply(((x10_int)1));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127475_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(id127469)->
                                    FMGL(region)->contains(
                                    ((x10_int)1)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)1));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127474 = (x10aux::nullCheck(id127469)->
                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id127469)->
                                                                                       FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127475_end_;
                }
                
            }goto __ret127475_end_; __ret127475_end_: ;
            }
            ret127474;
            }))
            ;
            
        {
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var146 = x10::lang::Runtime::startFinish();
            {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable127857 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i88499min127372 = ((x10_long) (((x10_int)0)));
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i88499max127373 = ((x10_long) ((nthreads127470) - (((x10_long) (((x10_int)1))))));
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                            {
                                x10_long i127374;
                                for (
                                     //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                     i127374 = i88499min127372;
                                     ((i127374) <= (i88499max127373));
                                     
                                     //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                     i127374 = ((x10_long) ((i127374) + (((x10_long)1ll)))))
                                {
                                    
                                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i127375 = i127374;
                                    
                                    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start127367 =
                                      ((x10_long) ((range127486->
                                                      FMGL(min)) + (((x10_long) ((i127375) * (chunk_size127473))))));
                                    
                                    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range127368 =
                                      x10::lang::LongRange::_make(i_start127367, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a127369 =
                                          range127486->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b127370 =
                                          ((x10_long) ((((x10_long) ((i_start127367) + (chunk_size127473)))) - (((x10_long) (((x10_int)1))))));
                                        ((a127369) < (b127370))
                                          ? (a127369) : (b127370);
                                    }))
                                    );
                                    
                                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__7<TPMGL(T)>)))org_scalegraph_util_Remote__closure__7<TPMGL(T)>(scatterGather127468, i127375, i_range127368, f127487))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1368) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1368);
                            {
                                
                                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc1369) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal127858 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1369);
                        {
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable127857 = formal127858;
                        }
                    } else
                    throw;
                }
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127857)))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable127857))
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127857));
                    }
                    
                }
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var146);
                }
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127857)))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127857)))
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127857));
                    }
                    
                }
                
            }
        }
        
        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        scatterGather127468->org::scalegraph::util::DistScatterGather::sum();
        
        //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int numRequests127476 = scatterGather127468->org::scalegraph::util::DistScatterGather::sendCount();
        
        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> requests127477 =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests127476)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> reqIdx127478 =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests127476)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        {
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var147 = x10::lang::Runtime::startFinish();
            {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable127860 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i88536min127405 = ((x10_long) (((x10_int)0)));
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i88536max127406 = ((x10_long) ((nthreads127470) - (((x10_long) (((x10_int)1))))));
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                            {
                                x10_long i127407;
                                for (
                                     //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                     i127407 = i88536min127405;
                                     ((i127407) <= (i88536max127406));
                                     
                                     //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                     i127407 = ((x10_long) ((i127407) + (((x10_long)1ll)))))
                                {
                                    
                                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i127408 = i127407;
                                    
                                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start127400 =
                                      ((x10_long) ((range127486->
                                                      FMGL(min)) + (((x10_long) ((i127408) * (chunk_size127473))))));
                                    
                                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range127401 =
                                      x10::lang::LongRange::_make(i_start127400, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a127402 =
                                          range127486->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b127403 =
                                          ((x10_long) ((((x10_long) ((i_start127400) + (chunk_size127473)))) - (((x10_long) (((x10_int)1))))));
                                        ((a127402) < (b127403))
                                          ? (a127402) : (b127403);
                                    }))
                                    );
                                    
                                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__9<TPMGL(T)>)))org_scalegraph_util_Remote__closure__9<TPMGL(T)>(scatterGather127468, i127408, i_range127401, f127487, requests127477, reqIdx127478))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1371) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__1__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1371);
                            {
                                
                                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__1__);
                                
                                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc1372) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal127861 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1372);
                        {
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable127860 = formal127861;
                        }
                    } else
                    throw;
                }
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127860)))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable127860))
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127860));
                    }
                    
                }
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var147);
                }
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127860)))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127860)))
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127860));
                    }
                    
                }
                
            }
        }
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> recvRequests127479 =
          scatterGather127468->template scatter<x10_long >(
            requests127477);
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int recvCount127480 = scatterGather127468->org::scalegraph::util::DistScatterGather::recvCount();
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> reply127481 =
          org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (recvCount127480)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range127465 = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvRequests127479->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size127433 = ((x10_long) ((((x10_long) ((range127465->
                                                            FMGL(max)) - (range127465->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads127434 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size127435 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a127436 = ((x10_long) ((((x10_long) ((((x10_long) ((size127433) + (((x10_long) (nthreads127434)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127434)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a127436) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a127436);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var148 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable127863 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i76030max127430 = ((x10_int) ((nthreads127434) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i127431;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i127431 = ((x10_int)0);
                                     ((i127431) <= (i76030max127430));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i127431 = ((x10_int) ((i127431) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i127432 = i127431;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx127423 = i127432;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start127424 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a127425 =
                                          ((x10_long) ((range127465->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b127426 =
                                          ((x10_long) ((range127465->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i127432))) * (chunk_size127435))))));
                                        ((a127425) < (b127426))
                                          ? (a127425) : (b127426);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range127427 =
                                      x10::lang::LongRange::_make(i_start127424, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a127428 =
                                          range127465->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b127429 =
                                          ((x10_long) ((((x10_long) ((i_start127424) + (chunk_size127435)))) - (((x10_long) (((x10_int)1))))));
                                        ((a127428) < (b127429))
                                          ? (a127428) : (b127429);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__11<TPMGL(T)>)))org_scalegraph_util_Remote__closure__11<TPMGL(T)>(idx127423, i_range127427, recvRequests127479, src127484, reply127481))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1374) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__2__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1374);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__2__);
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc1375) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal127864 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1375);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable127863 = formal127864;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127863)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable127863))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127863));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var148);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127863)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127863)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127863));
                    }
                    
                }
                
            }
        }
        
        //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData127482 =
          scatterGather127468->template gather<TPMGL(T) >(
            reply127481);
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range127466 = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((requests127477->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size127461 = ((x10_long) ((((x10_long) ((range127466->
                                                            FMGL(max)) - (range127466->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads127462 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size127463 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a127464 = ((x10_long) ((((x10_long) ((((x10_long) ((size127461) + (((x10_long) (nthreads127462)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127462)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a127464) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a127464);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var149 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable127866 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i76030max127458 = ((x10_int) ((nthreads127462) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i127459;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i127459 = ((x10_int)0);
                                     ((i127459) <= (i76030max127458));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i127459 = ((x10_int) ((i127459) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i127460 = i127459;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx127451 = i127460;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start127452 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a127453 =
                                          ((x10_long) ((range127466->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b127454 =
                                          ((x10_long) ((range127466->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i127460))) * (chunk_size127463))))));
                                        ((a127453) < (b127454))
                                          ? (a127453) : (b127454);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range127455 =
                                      x10::lang::LongRange::_make(i_start127452, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a127456 =
                                          range127466->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b127457 =
                                          ((x10_long) ((((x10_long) ((i_start127452) + (chunk_size127463)))) - (((x10_long) (((x10_int)1))))));
                                        ((a127456) < (b127457))
                                          ? (a127456) : (b127457);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__12<TPMGL(T)>)))org_scalegraph_util_Remote__closure__12<TPMGL(T)>(idx127451, i_range127455, reqIdx127478, recvData127482, dst127485))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1377) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__3__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1377);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__3__);
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc1378) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal127867 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1378);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable127866 = formal127867;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127866)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable127866))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127866));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var149);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable127866)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127866)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable127866));
                    }
                    
                }
                
            }
        }
        }
        #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1366
        #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1379
        #define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1379
        template<class TPMGL(T)> void org::scalegraph::util::Remote::get(
          x10::util::Team* team, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter,
          x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter,
          x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) {
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize = x10aux::nullCheck(team)->size();
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::DistScatterGather scatterGather =
               org::scalegraph::util::DistScatterGather::_alloc();
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
            (scatterGather)->::org::scalegraph::util::DistScatterGather::_constructor(
              team);
            
            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_long>* id9574 = org::scalegraph::util::Remote::splitChunks(
                                                    range);
            
            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long nthreads = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret126886;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret126887; __ret126887: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id9574)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret126886 = (x10aux::nullCheck(id9574)->
                                       FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret126887_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id9574)->
                                        FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret126886 = (x10aux::nullCheck(id9574)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id9574)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret126887_end_;
                    }
                    
                }goto __ret126887_end_; __ret126887_end_: ;
                }
                ret126886;
                }))
                ;
                
            
            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret126889;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret126890; __ret126890: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id9574)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret126889 = (x10aux::nullCheck(id9574)->
                                       FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret126890_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id9574)->
                                        FMGL(region)->contains(
                                        ((x10_int)1)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)1));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret126889 = (x10aux::nullCheck(id9574)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id9574)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret126890_end_;
                    }
                    
                }goto __ret126890_end_; __ret126890_end_: ;
                }
                ret126889;
                }))
                ;
                
            {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var150 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable127869 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88611min127510 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88611max127511 =
                                  ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i127512;
                                    for (
                                         //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i127512 = i88611min127510;
                                         ((i127512) <= (i88611max127511));
                                         
                                         //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i127512 = ((x10_long) ((i127512) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i127513 =
                                          i127512;
                                        
                                        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start127505 =
                                          ((x10_long) ((range->
                                                          FMGL(min)) + (((x10_long) ((i127513) * (chunk_size))))));
                                        
                                        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range127506 =
                                          x10::lang::LongRange::_make(i_start127505, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a127507 =
                                              range->FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b127508 =
                                              ((x10_long) ((((x10_long) ((i_start127505) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                            ((a127507) < (b127508))
                                              ? (a127507)
                                              : (b127508);
                                        }))
                                        );
                                        
                                        //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__13<TPMGL(T)>)))org_scalegraph_util_Remote__closure__13<TPMGL(T)>(scatterGather, i127513, i_range127506, f))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1381) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1381);
                                {
                                    
                                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc1382) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal127870 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1382);
                            {
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable127869 = formal127870;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127869)))
                    {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable127869))
                        {
                            
                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127869));
                        }
                        
                    }
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var150);
                    }
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127869)))
                    {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127869)))
                        {
                            
                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127869));
                        }
                        
                    }
                    
                }
            }
            
            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            scatterGather->org::scalegraph::util::DistScatterGather::sum();
            
            //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
            
            //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> requests =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var151 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable127872 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88648min127543 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i88648max127544 =
                                  ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i127545;
                                    for (
                                         //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i127545 = i88648min127543;
                                         ((i127545) <= (i88648max127544));
                                         
                                         //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i127545 = ((x10_long) ((i127545) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i127546 =
                                          i127545;
                                        
                                        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start127538 =
                                          ((x10_long) ((range->
                                                          FMGL(min)) + (((x10_long) ((i127546) * (chunk_size))))));
                                        
                                        //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range127539 =
                                          x10::lang::LongRange::_make(i_start127538, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a127540 =
                                              range->FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b127541 =
                                              ((x10_long) ((((x10_long) ((i_start127538) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                            ((a127540) < (b127541))
                                              ? (a127540)
                                              : (b127541);
                                        }))
                                        );
                                        
                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__15<TPMGL(T)>)))org_scalegraph_util_Remote__closure__15<TPMGL(T)>(scatterGather, i127546, i_range127539, f, requests, reqIdx))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1384) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1384);
                                {
                                    
                                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc1385) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal127873 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1385);
                            {
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable127872 = formal127873;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127872)))
                    {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable127872))
                        {
                            
                            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127872));
                        }
                        
                    }
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var151);
                    }
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127872)))
                    {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127872)))
                        {
                            
                            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127872));
                        }
                        
                    }
                    
                }
            }
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> recvRequests =
              scatterGather->template scatter<x10_long >(
                requests);
            
            //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
            
            //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> reply =
              org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (recvCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range127598 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvRequests->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size127569 = ((x10_long) ((((x10_long) ((range127598->
                                                                FMGL(max)) - (range127598->
                                                                                FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads127570 = x10::lang::Runtime::
                                       FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size127571 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a127572 = ((x10_long) ((((x10_long) ((((x10_long) ((size127569) + (((x10_long) (nthreads127570)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127570)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a127572) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a127572);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var152 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable127875 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i76030max127566 =
                                  ((x10_int) ((nthreads127570) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i127567;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i127567 = ((x10_int)0);
                                         ((i127567) <= (i76030max127566));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i127567 = ((x10_int) ((i127567) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i127568 =
                                          i127567;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx127559 =
                                          i127568;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start127560 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a127561 =
                                              ((x10_long) ((range127598->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b127562 =
                                              ((x10_long) ((range127598->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i127568))) * (chunk_size127571))))));
                                            ((a127561) < (b127562))
                                              ? (a127561)
                                              : (b127562);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range127563 =
                                          x10::lang::LongRange::_make(i_start127560, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a127564 =
                                              range127598->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b127565 =
                                              ((x10_long) ((((x10_long) ((i_start127560) + (chunk_size127571)))) - (((x10_long) (((x10_int)1))))));
                                            ((a127564) < (b127565))
                                              ? (a127564)
                                              : (b127565);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__17<TPMGL(T)>)))org_scalegraph_util_Remote__closure__17<TPMGL(T)>(idx127559, i_range127563, getter, recvRequests, reply))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1387) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1387);
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__2__);
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc1388) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal127876 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1388);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable127875 = formal127876;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127875)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable127875))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127875));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var152);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127875)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127875)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127875));
                        }
                        
                    }
                    
                }
            }
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData =
              scatterGather->template gather<TPMGL(T) >(reply);
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range127599 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((requests->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size127594 = ((x10_long) ((((x10_long) ((range127599->
                                                                FMGL(max)) - (range127599->
                                                                                FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads127595 = x10::lang::Runtime::
                                       FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size127596 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a127597 = ((x10_long) ((((x10_long) ((((x10_long) ((size127594) + (((x10_long) (nthreads127595)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127595)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a127597) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a127597);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var153 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable127878 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i76030max127591 =
                                  ((x10_int) ((nthreads127595) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i127592;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i127592 = ((x10_int)0);
                                         ((i127592) <= (i76030max127591));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i127592 = ((x10_int) ((i127592) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i127593 =
                                          i127592;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx127584 =
                                          i127593;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start127585 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a127586 =
                                              ((x10_long) ((range127599->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b127587 =
                                              ((x10_long) ((range127599->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i127593))) * (chunk_size127596))))));
                                            ((a127586) < (b127587))
                                              ? (a127586)
                                              : (b127587);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range127588 =
                                          x10::lang::LongRange::_make(i_start127585, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a127589 =
                                              range127599->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b127590 =
                                              ((x10_long) ((((x10_long) ((i_start127585) + (chunk_size127596)))) - (((x10_long) (((x10_int)1))))));
                                            ((a127589) < (b127590))
                                              ? (a127589)
                                              : (b127590);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__18<TPMGL(T)>)))org_scalegraph_util_Remote__closure__18<TPMGL(T)>(idx127584, i_range127588, setter, reqIdx, recvData))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1390) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1390);
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__3__);
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc1391) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal127879 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1391);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable127878 = formal127879;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127878)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable127878))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127878));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var153);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable127878)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127878)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable127878));
                        }
                        
                    }
                    
                }
            }
            }
            #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1379
            #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1392
            #define ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1392
            template<class TPMGL(T)> void org::scalegraph::util::Remote::put(
              x10::util::Team* team, org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
              x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) {
                
                //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_int teamSize = x10aux::nullCheck(team)->size();
                
                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::DistScatterGather scatterGather =
                   org::scalegraph::util::DistScatterGather::_alloc();
                
                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
                (scatterGather)->::org::scalegraph::util::DistScatterGather::_constructor(
                  team);
                
                //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10_long>* id9578 = org::scalegraph::util::Remote::splitChunks(
                                                        range);
                
                //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long nthreads = (__extension__ ({
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_long ret127028;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret127029; __ret127029: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(id9578)->FMGL(rail))
                        {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127028 = (x10aux::nullCheck(id9578)->
                                           FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret127029_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(id9578)->
                                            FMGL(region)->contains(
                                            ((x10_int)0))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)0));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127028 = (x10aux::nullCheck(id9578)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id9578)->
                                                                                               FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret127029_end_;
                        }
                        
                    }goto __ret127029_end_; __ret127029_end_: ;
                    }
                    ret127028;
                    }))
                    ;
                    
                
                //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long chunk_size = (__extension__ ({
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_long ret127031;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret127032; __ret127032: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(id9578)->FMGL(rail))
                        {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127031 = (x10aux::nullCheck(id9578)->
                                           FMGL(raw))->__apply(((x10_int)1));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret127032_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(id9578)->
                                            FMGL(region)->contains(
                                            ((x10_int)1))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)1));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127031 = (x10aux::nullCheck(id9578)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id9578)->
                                                                                               FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret127032_end_;
                        }
                        
                    }goto __ret127032_end_; __ret127032_end_: ;
                    }
                    ret127031;
                    }))
                    ;
                    
                {
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var154 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable127881 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i88723min127622 =
                                      ((x10_long) (((x10_int)0)));
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i88723max127623 =
                                      ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                    {
                                        x10_long i127624;
                                        for (
                                             //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                             i127624 = i88723min127622;
                                             ((i127624) <= (i88723max127623));
                                             
                                             //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                             i127624 = ((x10_long) ((i127624) + (((x10_long)1ll)))))
                                        {
                                            
                                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i127625 =
                                              i127624;
                                            
                                            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i_start127617 =
                                              ((x10_long) ((range->
                                                              FMGL(min)) + (((x10_long) ((i127625) * (chunk_size))))));
                                            
                                            //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::LongRange i_range127618 =
                                              x10::lang::LongRange::_make(i_start127617, (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a127619 =
                                                  range->
                                                    FMGL(max);
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b127620 =
                                                  ((x10_long) ((((x10_long) ((i_start127617) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                ((a127619) < (b127620))
                                                  ? (a127619)
                                                  : (b127620);
                                            }))
                                            );
                                            
                                            //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::runAsync(
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__19<TPMGL(T)>)))org_scalegraph_util_Remote__closure__19<TPMGL(T)>(scatterGather, i127625, i_range127618, f))));
                                        }
                                    }
                                    
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc1394) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1394);
                                    {
                                        
                                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc1395) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal127882 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1395);
                                {
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable127881 = formal127882;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable127881)))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable127881))
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable127881));
                            }
                            
                        }
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var154);
                        }
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable127881)))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127881)))
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable127881));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                scatterGather->org::scalegraph::util::DistScatterGather::sum();
                
                //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
                
                //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal =
                  org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var155 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable127884 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i88760min127655 =
                                      ((x10_long) (((x10_int)0)));
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i88760max127656 =
                                      ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                    {
                                        x10_long i127657;
                                        for (
                                             //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                             i127657 = i88760min127655;
                                             ((i127657) <= (i88760max127656));
                                             
                                             //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                             i127657 = ((x10_long) ((i127657) + (((x10_long)1ll)))))
                                        {
                                            
                                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i127658 =
                                              i127657;
                                            
                                            //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i_start127650 =
                                              ((x10_long) ((range->
                                                              FMGL(min)) + (((x10_long) ((i127658) * (chunk_size))))));
                                            
                                            //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::LongRange i_range127651 =
                                              x10::lang::LongRange::_make(i_start127650, (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a127652 =
                                                  range->
                                                    FMGL(max);
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b127653 =
                                                  ((x10_long) ((((x10_long) ((i_start127650) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                ((a127652) < (b127653))
                                                  ? (a127652)
                                                  : (b127653);
                                            }))
                                            );
                                            
                                            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::runAsync(
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__21<TPMGL(T)>)))org_scalegraph_util_Remote__closure__21<TPMGL(T)>(scatterGather, i127658, i_range127651, f, reqVal, reqIdx))));
                                        }
                                    }
                                    
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc1397) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1397);
                                    {
                                        
                                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc1398) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal127885 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1398);
                                {
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable127884 = formal127885;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable127884)))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable127884))
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable127884));
                            }
                            
                        }
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var155);
                        }
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable127884)))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127884)))
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable127884));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal =
                  scatterGather->template scatter<TPMGL(T) >(
                    reqVal);
                
                //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvIdx =
                  scatterGather->template scatter<x10_long >(
                    reqIdx);
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
                
                //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange range127687 = (__extension__ ({
                    x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvVal->
                                                                                 FMGL(data)->
                                                                                 FMGL(size)) - (((x10_long)1ll)))));
                }))
                ;
                
                //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long size127683 = ((x10_long) ((((x10_long) ((range127687->
                                                                    FMGL(max)) - (range127687->
                                                                                    FMGL(min))))) + (((x10_long) (((x10_int)1))))));
                
                //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_int nthreads127684 = x10::lang::Runtime::
                                           FMGL(NTHREADS__get)();
                
                //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long chunk_size127685 = (__extension__ ({
                    
                    //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                    x10_long a127686 = ((x10_long) ((((x10_long) ((((x10_long) ((size127683) + (((x10_long) (nthreads127684)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127684)))));
                    
                    //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                    ;
                    ((a127686) < (((x10_long)1ll))) ? (((x10_long)1ll))
                      : (a127686);
                }))
                ;
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var156 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable127887 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i76030max127680 =
                                      ((x10_int) ((nthreads127684) - (((x10_int)1))));
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                    {
                                        x10_int i127681;
                                        for (
                                             //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                             i127681 = ((x10_int)0);
                                             ((i127681) <= (i76030max127680));
                                             
                                             //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                             i127681 = ((x10_int) ((i127681) + (((x10_int)1)))))
                                        {
                                            
                                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10_int i127682 =
                                              i127681;
                                            
                                            //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10_int idx127673 =
                                              i127682;
                                            
                                            //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10_long i_start127674 =
                                              (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a127675 =
                                                  ((x10_long) ((range127687->
                                                                  FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b127676 =
                                                  ((x10_long) ((range127687->
                                                                  FMGL(min)) + (((x10_long) ((((x10_long) (i127682))) * (chunk_size127685))))));
                                                ((a127675) < (b127676))
                                                  ? (a127675)
                                                  : (b127676);
                                            }))
                                            ;
                                            
                                            //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::LongRange i_range127677 =
                                              x10::lang::LongRange::_make(i_start127674, (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a127678 =
                                                  range127687->
                                                    FMGL(max);
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b127679 =
                                                  ((x10_long) ((((x10_long) ((i_start127674) + (chunk_size127685)))) - (((x10_long) (((x10_int)1))))));
                                                ((a127678) < (b127679))
                                                  ? (a127678)
                                                  : (b127679);
                                            }))
                                            );
                                            
                                            //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::runAsync(
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__23<TPMGL(T)>)))org_scalegraph_util_Remote__closure__23<TPMGL(T)>(idx127673, i_range127677, recvIdx, recvVal, array))));
                                        }
                                    }
                                    
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc1400) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1400);
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__2__);
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc1401) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal127888 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1401);
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable127887 = formal127888;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable127887)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable127887))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable127887));
                            }
                            
                        }
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var156);
                        }
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable127887)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127887)))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable127887));
                            }
                            
                        }
                        
                    }
                }
                }
                #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1392
                #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1402
                #define ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1402
                template<class TPMGL(T)> void org::scalegraph::util::Remote::put(
                  x10::util::Team* team, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter,
                  x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) {
                    
                    //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int teamSize = x10aux::nullCheck(team)->size();
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::DistScatterGather scatterGather =
                       org::scalegraph::util::DistScatterGather::_alloc();
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
                    (scatterGather)->::org::scalegraph::util::DistScatterGather::_constructor(
                      team);
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10_long>* id9582 =
                      org::scalegraph::util::Remote::splitChunks(
                        range);
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long nthreads = (__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_long ret127135;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret127136; __ret127136: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(id9582)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret127135 = (x10aux::nullCheck(id9582)->
                                               FMGL(raw))->__apply(((x10_int)0));
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret127136_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(id9582)->
                                                FMGL(region)->contains(
                                                ((x10_int)0))))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      ((x10_int)0));
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret127135 = (x10aux::nullCheck(id9582)->
                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id9582)->
                                                                                                   FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret127136_end_;
                            }
                            
                        }goto __ret127136_end_; __ret127136_end_: ;
                        }
                        ret127135;
                        }))
                        ;
                        
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long chunk_size = (__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_long ret127138;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret127139; __ret127139: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(id9582)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret127138 = (x10aux::nullCheck(id9582)->
                                               FMGL(raw))->__apply(((x10_int)1));
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret127139_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(id9582)->
                                                FMGL(region)->contains(
                                                ((x10_int)1))))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      ((x10_int)1));
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret127138 = (x10aux::nullCheck(id9582)->
                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id9582)->
                                                                                                   FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret127139_end_;
                            }
                            
                        }goto __ret127139_end_; __ret127139_end_: ;
                        }
                        ret127138;
                        }))
                        ;
                        
                    {
                        
                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::ensureNotInAtomic();
                        
                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10::lang::FinishState* x10____var157 =
                          x10::lang::Runtime::startFinish();
                        {
                            
                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10::lang::CheckedThrowable* throwable127890 =
                              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                            
                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                                try {
                                    {
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i88816min127710 =
                                          ((x10_long) (((x10_int)0)));
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i88816max127711 =
                                          ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                        {
                                            x10_long i127712;
                                            for (
                                                 //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                 i127712 =
                                                   i88816min127710;
                                                 ((i127712) <= (i88816max127711));
                                                 
                                                 //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                                 i127712 =
                                                   ((x10_long) ((i127712) + (((x10_long)1ll)))))
                                            {
                                                
                                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i127713 =
                                                  i127712;
                                                
                                                //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i_start127705 =
                                                  ((x10_long) ((range->
                                                                  FMGL(min)) + (((x10_long) ((i127713) * (chunk_size))))));
                                                
                                                //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::LongRange i_range127706 =
                                                  x10::lang::LongRange::_make(i_start127705, (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a127707 =
                                                      range->
                                                        FMGL(max);
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b127708 =
                                                      ((x10_long) ((((x10_long) ((i_start127705) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                    ((a127707) < (b127708))
                                                      ? (a127707)
                                                      : (b127708);
                                                }))
                                                );
                                                
                                                //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                                x10::lang::Runtime::runAsync(
                                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__24<TPMGL(T)>)))org_scalegraph_util_Remote__closure__24<TPMGL(T)>(scatterGather, i127713, i_range127706, f))));
                                            }
                                        }
                                        
                                    }
                                }
                                catch (x10::lang::CheckedThrowable* __exc1404) {
                                    if (true) {
                                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                          static_cast<x10::lang::CheckedThrowable*>(__exc1404);
                                        {
                                            
                                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::pushException(
                                              __lowerer__var__0__);
                                            
                                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                        }
                                    } else
                                    throw;
                                }
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::compiler::Finalization::plausibleThrow();
                            }
                            catch (x10::lang::CheckedThrowable* __exc1405) {
                                if (true) {
                                    x10::lang::CheckedThrowable* formal127891 =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1405);
                                    {
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                        throwable127890 =
                                          formal127891;
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable127890)))
                            {
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (x10aux::instanceof<x10::compiler::Abort*>(throwable127890))
                                {
                                    
                                    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable127890));
                                }
                                
                            }
                            
                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::stopFinish(
                                  x10____var157);
                            }
                            
                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable127890)))
                            {
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127890)))
                                {
                                    
                                    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable127890));
                                }
                                
                            }
                            
                        }
                    }
                    
                    //#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    scatterGather->org::scalegraph::util::DistScatterGather::sum();
                    
                    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int numRequests = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
                    
                    //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal =
                      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                    
                    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> reqIdx =
                      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                    {
                        
                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::ensureNotInAtomic();
                        
                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10::lang::FinishState* x10____var158 =
                          x10::lang::Runtime::startFinish();
                        {
                            
                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10::lang::CheckedThrowable* throwable127893 =
                              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                            
                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                                try {
                                    {
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i88853min127743 =
                                          ((x10_long) (((x10_int)0)));
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i88853max127744 =
                                          ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                        {
                                            x10_long i127745;
                                            for (
                                                 //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                 i127745 =
                                                   i88853min127743;
                                                 ((i127745) <= (i88853max127744));
                                                 
                                                 //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                                 i127745 =
                                                   ((x10_long) ((i127745) + (((x10_long)1ll)))))
                                            {
                                                
                                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i127746 =
                                                  i127745;
                                                
                                                //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i_start127738 =
                                                  ((x10_long) ((range->
                                                                  FMGL(min)) + (((x10_long) ((i127746) * (chunk_size))))));
                                                
                                                //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::LongRange i_range127739 =
                                                  x10::lang::LongRange::_make(i_start127738, (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a127740 =
                                                      range->
                                                        FMGL(max);
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b127741 =
                                                      ((x10_long) ((((x10_long) ((i_start127738) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                    ((a127740) < (b127741))
                                                      ? (a127740)
                                                      : (b127741);
                                                }))
                                                );
                                                
                                                //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                                x10::lang::Runtime::runAsync(
                                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__26<TPMGL(T)>)))org_scalegraph_util_Remote__closure__26<TPMGL(T)>(scatterGather, i127746, i_range127739, f, reqVal, reqIdx))));
                                            }
                                        }
                                        
                                    }
                                }
                                catch (x10::lang::CheckedThrowable* __exc1407) {
                                    if (true) {
                                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                          static_cast<x10::lang::CheckedThrowable*>(__exc1407);
                                        {
                                            
                                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::pushException(
                                              __lowerer__var__1__);
                                            
                                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                        }
                                    } else
                                    throw;
                                }
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::compiler::Finalization::plausibleThrow();
                            }
                            catch (x10::lang::CheckedThrowable* __exc1408) {
                                if (true) {
                                    x10::lang::CheckedThrowable* formal127894 =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1408);
                                    {
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                        throwable127893 =
                                          formal127894;
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable127893)))
                            {
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (x10aux::instanceof<x10::compiler::Abort*>(throwable127893))
                                {
                                    
                                    //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable127893));
                                }
                                
                            }
                            
                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::stopFinish(
                                  x10____var158);
                            }
                            
                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable127893)))
                            {
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127893)))
                                {
                                    
                                    //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable127893));
                                }
                                
                            }
                            
                        }
                    }
                    
                    //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal =
                      scatterGather->template scatter<TPMGL(T) >(
                        reqVal);
                    
                    //#line 235 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> recvIdx =
                      scatterGather->template scatter<x10_long >(
                        reqIdx);
                    
                    //#line 236 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_int recvCount = scatterGather->org::scalegraph::util::DistScatterGather::recvCount();
                    
                    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange range127772 = (__extension__ ({
                        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvVal->
                                                                                     FMGL(data)->
                                                                                     FMGL(size)) - (((x10_long)1ll)))));
                    }))
                    ;
                    
                    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long size127768 = ((x10_long) ((((x10_long) ((range127772->
                                                                        FMGL(max)) - (range127772->
                                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int nthreads127769 = x10::lang::Runtime::
                                               FMGL(NTHREADS__get)();
                    
                    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long chunk_size127770 = (__extension__ ({
                        
                        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                        x10_long a127771 = ((x10_long) ((((x10_long) ((((x10_long) ((size127768) + (((x10_long) (nthreads127769)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads127769)))));
                        
                        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                        ;
                        ((a127771) < (((x10_long)1ll))) ? (((x10_long)1ll))
                          : (a127771);
                    }))
                    ;
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::ensureNotInAtomic();
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10::lang::FinishState* x10____var159 =
                          x10::lang::Runtime::startFinish();
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10::lang::CheckedThrowable* throwable127896 =
                              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                            try {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                                try {
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i76030max127765 =
                                          ((x10_int) ((nthreads127769) - (((x10_int)1))));
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                        {
                                            x10_int i127766;
                                            for (
                                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                 i127766 =
                                                   ((x10_int)0);
                                                 ((i127766) <= (i76030max127765));
                                                 
                                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                                 i127766 =
                                                   ((x10_int) ((i127766) + (((x10_int)1)))))
                                            {
                                                
                                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10_int i127767 =
                                                  i127766;
                                                
                                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10_int idx127758 =
                                                  i127767;
                                                
                                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10_long i_start127759 =
                                                  (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a127760 =
                                                      ((x10_long) ((range127772->
                                                                      FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b127761 =
                                                      ((x10_long) ((range127772->
                                                                      FMGL(min)) + (((x10_long) ((((x10_long) (i127767))) * (chunk_size127770))))));
                                                    ((a127760) < (b127761))
                                                      ? (a127760)
                                                      : (b127761);
                                                }))
                                                ;
                                                
                                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::LongRange i_range127762 =
                                                  x10::lang::LongRange::_make(i_start127759, (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a127763 =
                                                      range127772->
                                                        FMGL(max);
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b127764 =
                                                      ((x10_long) ((((x10_long) ((i_start127759) + (chunk_size127770)))) - (((x10_long) (((x10_int)1))))));
                                                    ((a127763) < (b127764))
                                                      ? (a127763)
                                                      : (b127764);
                                                }))
                                                );
                                                
                                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                                x10::lang::Runtime::runAsync(
                                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__28<TPMGL(T)>)))org_scalegraph_util_Remote__closure__28<TPMGL(T)>(idx127758, i_range127762, setter, recvIdx, recvVal))));
                                            }
                                        }
                                        
                                    }
                                }
                                catch (x10::lang::CheckedThrowable* __exc1410) {
                                    if (true) {
                                        x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                          static_cast<x10::lang::CheckedThrowable*>(__exc1410);
                                        {
                                            
                                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::pushException(
                                              __lowerer__var__2__);
                                            
                                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                        }
                                    } else
                                    throw;
                                }
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::compiler::Finalization::plausibleThrow();
                            }
                            catch (x10::lang::CheckedThrowable* __exc1411) {
                                if (true) {
                                    x10::lang::CheckedThrowable* formal127897 =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1411);
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                        throwable127896 =
                                          formal127897;
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable127896)))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                                if (x10aux::instanceof<x10::compiler::Abort*>(throwable127896))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable127896));
                                }
                                
                            }
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::stopFinish(
                                  x10____var159);
                            }
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable127896)))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable127896)))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable127896));
                                }
                                
                            }
                            
                        }
                    }
                    }
                    #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1402
                    #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_GENERICS
                    #endif // __ORG_SCALEGRAPH_UTIL_REMOTE_H_NODEPS

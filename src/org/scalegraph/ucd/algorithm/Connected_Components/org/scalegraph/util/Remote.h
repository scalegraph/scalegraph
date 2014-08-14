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
    void __apply(x10_long local_ind125693, x10_int remote_role125694, x10_long remote_ind125695) {
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x125690 = counts125705;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y125691 = remote_role125694;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret125692;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r125687 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index125688 = y125691;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret125689;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x125690->FMGL(data)).isValid())) {
                    
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
                if (((index125688) < (((x10_int)0))) || ((((x10_long) (index125688))) >= (x125690->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125688), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret125689 = (x125690->FMGL(data))[index125688];
            ret125689;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125684 = y125691;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value125685 = r125687;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret125686;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x125690->FMGL(data)).isValid())) {
                
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
            if (((index125684) < (((x10_int)0))) || ((((x10_long) (index125684))) >= (x125690->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125684), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x125690->FMGL(data)).set(index125684, value125685);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125686 = value125685;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125686;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret125692 = r125687;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret125692;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts125705;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts125705);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts125705 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__2<TPMGL(T) >(that_counts125705);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__2(org::scalegraph::util::MemoryChunk<x10_int> counts125705) : counts125705(counts125705) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> counts125705 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i125709)));
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i85977domain125696 = i_range125702;
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i85977min125697 = i85977domain125696->FMGL(min);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i85977max125698 = i85977domain125696->FMGL(max);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125699;
                for (
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125699 = i85977min125697; ((i125699) <= (i85977max125698));
                     
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125699 = ((x10_long) ((i125699) + (((x10_long)1ll)))))
                {
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125700 = i125699;
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i125700, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__2<TPMGL(T)>)))org_scalegraph_util_Remote__closure__2<TPMGL(T)>(counts125705))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1386) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1386)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1386);
                {
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1386);
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
    x10_long i125709;
    x10::lang::LongRange i_range125702;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i125709);
        buf.write(this->i_range125702);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i125709 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range125702 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__1<TPMGL(T) >(that_scatterGather, that_i125709, that_i_range125702, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__1(org::scalegraph::util::DistScatterGather scatterGather, x10_long i125709, x10::lang::LongRange i_range125702, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i125709(i125709), i_range125702(i_range125702), f(f) { }
    
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
    void __apply(x10_long local_ind125722, x10_int remote_role125723, x10_long remote_ind125724) {
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off125725 = ((x10_int) (((__extension__ ({
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x125726 = offsets125738;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y125727 = remote_role125723;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret125728;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r125713 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index125714 = y125727;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret125715;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x125726->FMGL(data)).isValid())) {
                        
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
                    if (((index125714) < (((x10_int)0))) || ((((x10_long) (index125714))) >= (x125726->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125714), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret125715 = (x125726->FMGL(data))[index125714];
                ret125715;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index125710 = y125727;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value125711 = r125713;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret125712;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x125726->FMGL(data)).isValid())) {
                    
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
                if (((index125710) < (((x10_int)0))) || ((((x10_long) (index125710))) >= (x125726->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125710), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x125726->FMGL(data)).set(index125710, value125711);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret125712 = value125711;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret125712;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret125728 = r125713;
            ret125728;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125716 = off125725;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value125717 = remote_ind125724;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret125718;
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
            if (((index125716) < (((x10_int)0))) || ((((x10_long) (index125716))) >= (requests->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125716), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (requests->FMGL(data)).set(index125716, value125717);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125718 = value125717;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125718;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125719 = off125725;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value125720 = local_ind125722;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret125721;
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
            if (((index125719) < (((x10_int)0))) || ((((x10_long) (index125719))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125719), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index125719, value125720);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125721 = value125720;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125721;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets125738;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets125738);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets125738 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__4<TPMGL(T) >(that_offsets125738, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__4(org::scalegraph::util::MemoryChunk<x10_int> offsets125738, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets125738(offsets125738), requests(requests), reqIdx(reqIdx) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> offsets125738 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i125742)));
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86014domain125729 = i_range125735;
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86014min125730 = i86014domain125729->FMGL(min);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86014max125731 = i86014domain125729->FMGL(max);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125732;
                for (
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125732 = i86014min125730; ((i125732) <= (i86014max125731));
                     
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125732 = ((x10_long) ((i125732) + (((x10_long)1ll)))))
                {
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125733 = i125732;
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i125733, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__4<TPMGL(T)>)))org_scalegraph_util_Remote__closure__4<TPMGL(T)>(offsets125738, requests, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1389) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1389)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1389);
                {
                    
                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1389);
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
    x10_long i125742;
    x10::lang::LongRange i_range125735;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i125742);
        buf.write(this->i_range125735);
        buf.write(this->f);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i125742 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range125735 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__3<TPMGL(T) >(that_scatterGather, that_i125742, that_i_range125735, that_f, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__3(org::scalegraph::util::DistScatterGather scatterGather, x10_long i125742, x10::lang::LongRange i_range125735, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i125742(i125742), i_range125735(i_range125735), f(f), requests(requests), reqIdx(reqIdx) { }
    
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
            x10_long tid125755 = ((x10_long) (idx125757));
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r125756 = i_range125761;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86051domain125750 = r125756;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86051min125751 = i86051domain125750->FMGL(min);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86051max125752 = i86051domain125750->FMGL(max);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125753;
                for (
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125753 = i86051min125751; ((i125753) <= (i86051max125752));
                     
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125753 = ((x10_long) ((i125753) + (((x10_long)1ll)))))
                {
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125754 = i125753;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index125743 = i125754;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value125744 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index125745 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index125746 = i125754;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret125747;
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
                                if (((index125746) < (((x10_long) (((x10_int)0))))) ||
                                    ((index125746) >= (recvRequests->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125746), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret125747 = (recvRequests->FMGL(data))[index125746];
                            ret125747;
                        }))
                        ;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret125748;
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
                            if (((index125745) < (((x10_long) (((x10_int)0))))) ||
                                ((index125745) >= (src->FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125745), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125748 = (src->FMGL(data))[index125745];
                        ret125748;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret125749;
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
                        if (((index125743) < (((x10_long) (((x10_int)0))))) ||
                            ((index125743) >= (reply->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125743), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reply->FMGL(data)).set(index125743, value125744);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125749 = value125744;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret125749;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1392) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1392)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1392);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1392);
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
    x10_int idx125757;
    x10::lang::LongRange i_range125761;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx125757);
        buf.write(this->i_range125761);
        buf.write(this->recvRequests);
        buf.write(this->src);
        buf.write(this->reply);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__5<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx125757 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range125761 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_src = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__5<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__5<TPMGL(T) >(that_idx125757, that_i_range125761, that_recvRequests, that_src, that_reply);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__5(x10_int idx125757, x10::lang::LongRange i_range125761, org::scalegraph::util::MemoryChunk<x10_long> recvRequests, org::scalegraph::util::MemoryChunk<TPMGL(T)> src, org::scalegraph::util::MemoryChunk<TPMGL(T)> reply) : idx125757(idx125757), i_range125761(i_range125761), recvRequests(recvRequests), src(src), reply(reply) { }
    
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
            x10_long tid125783 = ((x10_long) (idx125785));
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r125784 = i_range125789;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86070domain125778 = r125784;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86070min125779 = i86070domain125778->FMGL(min);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86070max125780 = i86070domain125778->FMGL(max);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125781;
                for (
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125781 = i86070min125779; ((i125781) <= (i86070max125780));
                     
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125781 = ((x10_long) ((i125781) + (((x10_long)1ll)))))
                {
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125782 = i125781;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index125771 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index125772 = i125782;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret125773;
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
                            if (((index125772) < (((x10_long) (((x10_int)0))))) ||
                                ((index125772) >= (reqIdx->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125772), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125773 = (reqIdx->FMGL(data))[index125772];
                        ret125773;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value125774 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index125775 = i125782;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret125776;
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
                            if (((index125775) < (((x10_long) (((x10_int)0))))) ||
                                ((index125775) >= (recvData->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125775), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125776 = (recvData->FMGL(data))[index125775];
                        ret125776;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret125777;
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
                        if (((index125771) < (((x10_long) (((x10_int)0))))) ||
                            ((index125771) >= (dst->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125771), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (dst->FMGL(data)).set(index125771, value125774);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125777 = value125774;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret125777;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1395) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1395)) {
                x10::lang::Error* __lowerer__var__3__ = static_cast<x10::lang::Error*>(__exc1395);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__3__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__4__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1395);
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
    x10_int idx125785;
    x10::lang::LongRange i_range125789;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx125785);
        buf.write(this->i_range125789);
        buf.write(this->reqIdx);
        buf.write(this->recvData);
        buf.write(this->dst);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__6<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx125785 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range125789 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_dst = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__6<TPMGL(T) >(that_idx125785, that_i_range125789, that_reqIdx, that_recvData, that_dst);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__6(x10_int idx125785, x10::lang::LongRange i_range125789, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) : idx125785(idx125785), i_range125789(i_range125789), reqIdx(reqIdx), recvData(recvData), dst(dst) { }
    
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
    void __apply(x10_long local_ind125810, x10_int remote_role125811, x10_long remote_ind125812) {
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x125807 = counts125822;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y125808 = remote_role125811;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret125809;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r125804 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index125805 = y125808;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret125806;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x125807->FMGL(data)).isValid())) {
                    
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
                if (((index125805) < (((x10_int)0))) || ((((x10_long) (index125805))) >= (x125807->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125805), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret125806 = (x125807->FMGL(data))[index125805];
            ret125806;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125801 = y125808;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value125802 = r125804;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret125803;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x125807->FMGL(data)).isValid())) {
                
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
            if (((index125801) < (((x10_int)0))) || ((((x10_long) (index125801))) >= (x125807->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125801), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x125807->FMGL(data)).set(index125801, value125802);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125803 = value125802;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125803;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret125809 = r125804;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret125809;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts125822;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts125822);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__8<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts125822 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__8<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__8<TPMGL(T) >(that_counts125822);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__8(org::scalegraph::util::MemoryChunk<x10_int> counts125822) : counts125822(counts125822) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> counts125822 = scatterGather125919->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i125826)));
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i85977domain125813 = i_range125819;
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i85977min125814 = i85977domain125813->FMGL(min);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i85977max125815 = i85977domain125813->FMGL(max);
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125816;
                for (
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125816 = i85977min125814; ((i125816) <= (i85977max125815));
                     
                     //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125816 = ((x10_long) ((i125816) + (((x10_long)1ll)))))
                {
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125817 = i125816;
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f125938), 
                      i125817, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__8<TPMGL(T)>)))org_scalegraph_util_Remote__closure__8<TPMGL(T)>(counts125822))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1399) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1399)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1399);
                {
                    
                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1399);
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
    org::scalegraph::util::DistScatterGather scatterGather125919;
    x10_long i125826;
    x10::lang::LongRange i_range125819;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f125938;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather125919);
        buf.write(this->i125826);
        buf.write(this->i_range125819);
        buf.write(this->f125938);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather125919 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i125826 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range125819 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f125938 = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__7<TPMGL(T) >(that_scatterGather125919, that_i125826, that_i_range125819, that_f125938);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__7(org::scalegraph::util::DistScatterGather scatterGather125919, x10_long i125826, x10::lang::LongRange i_range125819, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f125938) : scatterGather125919(scatterGather125919), i125826(i125826), i_range125819(i_range125819), f125938(f125938) { }
    
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
    void __apply(x10_long local_ind125839, x10_int remote_role125840, x10_long remote_ind125841) {
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off125842 = ((x10_int) (((__extension__ ({
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x125843 = offsets125855;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y125844 = remote_role125840;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret125845;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r125830 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index125831 = y125844;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret125832;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x125843->FMGL(data)).isValid())) {
                        
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
                    if (((index125831) < (((x10_int)0))) || ((((x10_long) (index125831))) >= (x125843->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125831), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret125832 = (x125843->FMGL(data))[index125831];
                ret125832;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index125827 = y125844;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value125828 = r125830;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret125829;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x125843->FMGL(data)).isValid())) {
                    
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
                if (((index125827) < (((x10_int)0))) || ((((x10_long) (index125827))) >= (x125843->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125827), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x125843->FMGL(data)).set(index125827, value125828);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret125829 = value125828;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret125829;
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret125845 = r125830;
            ret125845;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125833 = off125842;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value125834 = remote_ind125841;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret125835;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((requests125928->FMGL(data)).isValid()))
            {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index125833) < (((x10_int)0))) || ((((x10_long) (index125833))) >= (requests125928->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125833), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (requests125928->FMGL(data)).set(index125833, value125834);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125835 = value125834;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125835;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125836 = off125842;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value125837 = local_ind125839;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret125838;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((reqIdx125929->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index125836) < (((x10_int)0))) || ((((x10_long) (index125836))) >= (reqIdx125929->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125836), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx125929->FMGL(data)).set(index125836, value125837);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125838 = value125837;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125838;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets125855;
    org::scalegraph::util::MemoryChunk<x10_long> requests125928;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx125929;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets125855);
        buf.write(this->requests125928);
        buf.write(this->reqIdx125929);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__10<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets125855 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests125928 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx125929 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__10<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__10<TPMGL(T) >(that_offsets125855, that_requests125928, that_reqIdx125929);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__10(org::scalegraph::util::MemoryChunk<x10_int> offsets125855, org::scalegraph::util::MemoryChunk<x10_long> requests125928, org::scalegraph::util::MemoryChunk<x10_long> reqIdx125929) : offsets125855(offsets125855), requests125928(requests125928), reqIdx125929(reqIdx125929) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> offsets125855 = scatterGather125919->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i125859)));
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86014domain125846 = i_range125852;
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86014min125847 = i86014domain125846->FMGL(min);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86014max125848 = i86014domain125846->FMGL(max);
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125849;
                for (
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125849 = i86014min125847; ((i125849) <= (i86014max125848));
                     
                     //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125849 = ((x10_long) ((i125849) + (((x10_long)1ll)))))
                {
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125850 = i125849;
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f125938), 
                      i125850, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__10<TPMGL(T)>)))org_scalegraph_util_Remote__closure__10<TPMGL(T)>(offsets125855, requests125928, reqIdx125929))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1402) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1402)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1402);
                {
                    
                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1402);
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
    org::scalegraph::util::DistScatterGather scatterGather125919;
    x10_long i125859;
    x10::lang::LongRange i_range125852;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f125938;
    org::scalegraph::util::MemoryChunk<x10_long> requests125928;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx125929;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather125919);
        buf.write(this->i125859);
        buf.write(this->i_range125852);
        buf.write(this->f125938);
        buf.write(this->requests125928);
        buf.write(this->reqIdx125929);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather125919 = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i125859 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range125852 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f125938 = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests125928 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx125929 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__9<TPMGL(T) >(that_scatterGather125919, that_i125859, that_i_range125852, that_f125938, that_requests125928, that_reqIdx125929);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__9(org::scalegraph::util::DistScatterGather scatterGather125919, x10_long i125859, x10::lang::LongRange i_range125852, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f125938, org::scalegraph::util::MemoryChunk<x10_long> requests125928, org::scalegraph::util::MemoryChunk<x10_long> reqIdx125929) : scatterGather125919(scatterGather125919), i125859(i125859), i_range125852(i_range125852), f125938(f125938), requests125928(requests125928), reqIdx125929(reqIdx125929) { }
    
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
            x10_long tid125872 = ((x10_long) (idx125874));
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r125873 = i_range125878;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86051domain125867 = r125873;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86051min125868 = i86051domain125867->FMGL(min);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86051max125869 = i86051domain125867->FMGL(max);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125870;
                for (
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125870 = i86051min125868; ((i125870) <= (i86051max125869));
                     
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125870 = ((x10_long) ((i125870) + (((x10_long)1ll)))))
                {
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125871 = i125870;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index125860 = i125871;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value125861 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index125862 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index125863 = i125871;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret125864;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((recvRequests125930->FMGL(data)).isValid()))
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
                                if (((index125863) < (((x10_long) (((x10_int)0))))) ||
                                    ((index125863) >= (recvRequests125930->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125863), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret125864 = (recvRequests125930->
                                           FMGL(data))[index125863];
                            ret125864;
                        }))
                        ;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret125865;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((src125935->FMGL(data)).isValid()))
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
                            if (((index125862) < (((x10_long) (((x10_int)0))))) ||
                                ((index125862) >= (src125935->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125862), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125865 = (src125935->FMGL(data))[index125862];
                        ret125865;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret125866;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reply125932->FMGL(data)).isValid()))
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
                        if (((index125860) < (((x10_long) (((x10_int)0))))) ||
                            ((index125860) >= (reply125932->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125860), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reply125932->FMGL(data)).set(index125860, value125861);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125866 = value125861;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret125866;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1405) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1405)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1405);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1405);
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
    x10_int idx125874;
    x10::lang::LongRange i_range125878;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests125930;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src125935;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply125932;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx125874);
        buf.write(this->i_range125878);
        buf.write(this->recvRequests125930);
        buf.write(this->src125935);
        buf.write(this->reply125932);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__11<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx125874 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range125878 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests125930 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_src125935 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply125932 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__11<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__11<TPMGL(T) >(that_idx125874, that_i_range125878, that_recvRequests125930, that_src125935, that_reply125932);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__11(x10_int idx125874, x10::lang::LongRange i_range125878, org::scalegraph::util::MemoryChunk<x10_long> recvRequests125930, org::scalegraph::util::MemoryChunk<TPMGL(T)> src125935, org::scalegraph::util::MemoryChunk<TPMGL(T)> reply125932) : idx125874(idx125874), i_range125878(i_range125878), recvRequests125930(recvRequests125930), src125935(src125935), reply125932(reply125932) { }
    
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
            x10_long tid125900 = ((x10_long) (idx125902));
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r125901 = i_range125906;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86070domain125895 = r125901;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86070min125896 = i86070domain125895->FMGL(min);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86070max125897 = i86070domain125895->FMGL(max);
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125898;
                for (
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125898 = i86070min125896; ((i125898) <= (i86070max125897));
                     
                     //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125898 = ((x10_long) ((i125898) + (((x10_long)1ll)))))
                {
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125899 = i125898;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index125888 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index125889 = i125899;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret125890;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((reqIdx125929->FMGL(data)).isValid()))
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
                            if (((index125889) < (((x10_long) (((x10_int)0))))) ||
                                ((index125889) >= (reqIdx125929->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125889), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125890 = (reqIdx125929->FMGL(data))[index125889];
                        ret125890;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value125891 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index125892 = i125899;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret125893;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvData125933->FMGL(data)).isValid()))
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
                            if (((index125892) < (((x10_long) (((x10_int)0))))) ||
                                ((index125892) >= (recvData125933->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125892), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125893 = (recvData125933->FMGL(data))[index125892];
                        ret125893;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret125894;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((dst125936->FMGL(data)).isValid()))
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
                        if (((index125888) < (((x10_long) (((x10_int)0))))) ||
                            ((index125888) >= (dst125936->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125888), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (dst125936->FMGL(data)).set(index125888, value125891);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125894 = value125891;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret125894;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1408) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1408)) {
                x10::lang::Error* __lowerer__var__3__ = static_cast<x10::lang::Error*>(__exc1408);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__3__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__4__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1408);
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
    x10_int idx125902;
    x10::lang::LongRange i_range125906;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx125929;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData125933;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst125936;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx125902);
        buf.write(this->i_range125906);
        buf.write(this->reqIdx125929);
        buf.write(this->recvData125933);
        buf.write(this->dst125936);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__12<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__12<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx125902 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range125906 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx125929 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData125933 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_dst125936 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__12<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__12<TPMGL(T) >(that_idx125902, that_i_range125906, that_reqIdx125929, that_recvData125933, that_dst125936);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__12(x10_int idx125902, x10::lang::LongRange i_range125906, org::scalegraph::util::MemoryChunk<x10_long> reqIdx125929, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData125933, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst125936) : idx125902(idx125902), i_range125906(i_range125906), reqIdx125929(reqIdx125929), recvData125933(recvData125933), dst125936(dst125936) { }
    
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
    void __apply(x10_long local_ind125948, x10_int remote_role125949, x10_long remote_ind125950) {
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x125945 = counts125960;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y125946 = remote_role125949;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret125947;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r125942 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index125943 = y125946;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret125944;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x125945->FMGL(data)).isValid())) {
                    
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
                if (((index125943) < (((x10_int)0))) || ((((x10_long) (index125943))) >= (x125945->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125943), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret125944 = (x125945->FMGL(data))[index125943];
            ret125944;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125939 = y125946;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value125940 = r125942;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret125941;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x125945->FMGL(data)).isValid())) {
                
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
            if (((index125939) < (((x10_int)0))) || ((((x10_long) (index125939))) >= (x125945->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125939), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x125945->FMGL(data)).set(index125939, value125940);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125941 = value125940;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125941;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret125947 = r125942;
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret125947;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts125960;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts125960);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__14<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts125960 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__14<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__14<TPMGL(T) >(that_counts125960);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__14(org::scalegraph::util::MemoryChunk<x10_int> counts125960) : counts125960(counts125960) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> counts125960 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i125964)));
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86089domain125951 = i_range125957;
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86089min125952 = i86089domain125951->FMGL(min);
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86089max125953 = i86089domain125951->FMGL(max);
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125954;
                for (
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125954 = i86089min125952; ((i125954) <= (i86089max125953));
                     
                     //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125954 = ((x10_long) ((i125954) + (((x10_long)1ll)))))
                {
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125955 = i125954;
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i125955, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__14<TPMGL(T)>)))org_scalegraph_util_Remote__closure__14<TPMGL(T)>(counts125960))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1412) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1412)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1412);
                {
                    
                    //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1412);
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
    x10_long i125964;
    x10::lang::LongRange i_range125957;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i125964);
        buf.write(this->i_range125957);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__13<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i125964 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range125957 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org_scalegraph_util_Remote__closure__13<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__13<TPMGL(T) >(that_scatterGather, that_i125964, that_i_range125957, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__13(org::scalegraph::util::DistScatterGather scatterGather, x10_long i125964, x10::lang::LongRange i_range125957, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f) : scatterGather(scatterGather), i125964(i125964), i_range125957(i_range125957), f(f) { }
    
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
    void __apply(x10_long local_ind125977, x10_int remote_role125978, x10_long remote_ind125979) {
        
        //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off125980 = ((x10_int) (((__extension__ ({
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x125981 = offsets125993;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y125982 = remote_role125978;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret125983;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r125968 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index125969 = y125982;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret125970;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x125981->FMGL(data)).isValid())) {
                        
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
                    if (((index125969) < (((x10_int)0))) || ((((x10_long) (index125969))) >= (x125981->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125969), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret125970 = (x125981->FMGL(data))[index125969];
                ret125970;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index125965 = y125982;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value125966 = r125968;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret125967;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x125981->FMGL(data)).isValid())) {
                    
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
                if (((index125965) < (((x10_int)0))) || ((((x10_long) (index125965))) >= (x125981->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125965), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x125981->FMGL(data)).set(index125965, value125966);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret125967 = value125966;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret125967;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret125983 = r125968;
            ret125983;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125971 = off125980;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value125972 = remote_ind125979;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret125973;
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
            if (((index125971) < (((x10_int)0))) || ((((x10_long) (index125971))) >= (requests->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125971), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (requests->FMGL(data)).set(index125971, value125972);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125973 = value125972;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125973;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index125974 = off125980;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value125975 = local_ind125977;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret125976;
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
            if (((index125974) < (((x10_int)0))) || ((((x10_long) (index125974))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125974), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index125974, value125975);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret125976 = value125975;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret125976;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets125993;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets125993);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__16<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets125993 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__16<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__16<TPMGL(T) >(that_offsets125993, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__16(org::scalegraph::util::MemoryChunk<x10_int> offsets125993, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets125993(offsets125993), requests(requests), reqIdx(reqIdx) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> offsets125993 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i125997)));
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86126domain125984 = i_range125990;
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86126min125985 = i86126domain125984->FMGL(min);
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86126max125986 = i86126domain125984->FMGL(max);
            
            //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i125987;
                for (
                     //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i125987 = i86126min125985; ((i125987) <= (i86126max125986));
                     
                     //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i125987 = ((x10_long) ((i125987) + (((x10_long)1ll)))))
                {
                    
                    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i125988 = i125987;
                    
                    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::__apply(x10aux::nullCheck(f), 
                      i125988, reinterpret_cast<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long> >(sizeof(org_scalegraph_util_Remote__closure__16<TPMGL(T)>)))org_scalegraph_util_Remote__closure__16<TPMGL(T)>(offsets125993, requests, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1415) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1415)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1415);
                {
                    
                    //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1415);
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
    x10_long i125997;
    x10::lang::LongRange i_range125990;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f;
    org::scalegraph::util::MemoryChunk<x10_long> requests;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i125997);
        buf.write(this->i_range125990);
        buf.write(this->f);
        buf.write(this->requests);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__15<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i125997 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range125990 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_requests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__15<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__15<TPMGL(T) >(that_scatterGather, that_i125997, that_i_range125990, that_f, that_requests, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__15(org::scalegraph::util::DistScatterGather scatterGather, x10_long i125997, x10::lang::LongRange i_range125990, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f, org::scalegraph::util::MemoryChunk<x10_long> requests, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i125997(i125997), i_range125990(i_range125990), f(f), requests(requests), reqIdx(reqIdx) { }
    
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
            x10_long tid126008 = ((x10_long) (idx126010));
            
            //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r126009 = i_range126014;
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86163domain126003 = r126009;
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86163min126004 = i86163domain126003->FMGL(min);
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86163max126005 = i86163domain126003->FMGL(max);
            
            //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126006;
                for (
                     //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126006 = i86163min126004; ((i126006) <= (i86163max126005));
                     
                     //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126006 = ((x10_long) ((i126006) + (((x10_long)1ll)))))
                {
                    
                    //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126007 = i126006;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index125998 = i126007;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value125999 = x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(getter), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index126000 = i126007;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret126001;
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
                              if (((index126000) < (((x10_long) (((x10_int)0))))) ||
                                  ((index126000) >= (recvRequests->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126000), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret126001 = (recvRequests->FMGL(data))[index126000];
                          ret126001;
                      }))
                      );
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret126002;
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
                        if (((index125998) < (((x10_long) (((x10_int)0))))) ||
                            ((index125998) >= (reply->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index125998), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reply->FMGL(data)).set(index125998, value125999);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret126002 = value125999;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret126002;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1418) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1418)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1418);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1418);
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
    x10_int idx126010;
    x10::lang::LongRange i_range126014;
    x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter;
    org::scalegraph::util::MemoryChunk<x10_long> recvRequests;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reply;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx126010);
        buf.write(this->i_range126014);
        buf.write(this->getter);
        buf.write(this->recvRequests);
        buf.write(this->reply);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__17<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx126010 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range126014 = buf.read<x10::lang::LongRange>();
        x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_getter = buf.read<x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvRequests = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reply = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__17<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__17<TPMGL(T) >(that_idx126010, that_i_range126014, that_getter, that_recvRequests, that_reply);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__17(x10_int idx126010, x10::lang::LongRange i_range126014, x10::lang::Fun_0_1<x10_long, TPMGL(T)>* getter, org::scalegraph::util::MemoryChunk<x10_long> recvRequests, org::scalegraph::util::MemoryChunk<TPMGL(T)> reply) : idx126010(idx126010), i_range126014(i_range126014), getter(getter), recvRequests(recvRequests), reply(reply) { }
    
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
            x10_long tid126033 = ((x10_long) (idx126035));
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r126034 = i_range126039;
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86182domain126028 = r126034;
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86182min126029 = i86182domain126028->FMGL(min);
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86182max126030 = i86182domain126028->FMGL(max);
            
            //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126031;
                for (
                     //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126031 = i86182min126029; ((i126031) <= (i86182max126030));
                     
                     //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126031 = ((x10_long) ((i126031) + (((x10_long)1ll)))))
                {
                    
                    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126032 = i126031;
                    
                    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(setter), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index126024 = i126032;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret126025;
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
                              if (((index126024) < (((x10_long) (((x10_int)0))))) ||
                                  ((index126024) >= (reqIdx->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126024), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret126025 = (reqIdx->FMGL(data))[index126024];
                          ret126025;
                      }))
                      , (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index126026 = i126032;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          TPMGL(T) ret126027;
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
                              if (((index126026) < (((x10_long) (((x10_int)0))))) ||
                                  ((index126026) >= (recvData->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126026), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret126027 = (recvData->FMGL(data))[index126026];
                          ret126027;
                      }))
                      );
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1421) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1421)) {
                x10::lang::Error* __lowerer__var__3__ = static_cast<x10::lang::Error*>(__exc1421);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__3__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__4__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1421);
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
    x10_int idx126035;
    x10::lang::LongRange i_range126039;
    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx126035);
        buf.write(this->i_range126039);
        buf.write(this->setter);
        buf.write(this->reqIdx);
        buf.write(this->recvData);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__18<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__18<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx126035 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range126039 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* that_setter = buf.read<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvData = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__18<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__18<TPMGL(T) >(that_idx126035, that_i_range126039, that_setter, that_reqIdx, that_recvData);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__18(x10_int idx126035, x10::lang::LongRange i_range126039, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter, org::scalegraph::util::MemoryChunk<x10_long> reqIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData) : idx126035(idx126035), i_range126039(i_range126039), setter(setter), reqIdx(reqIdx), recvData(recvData) { }
    
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
    void __apply(x10_int dst_role126060, x10_long dst_ind126061, TPMGL(T) value126062) {
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x126057 = counts126072;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y126058 = dst_role126060;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret126059;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r126054 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index126055 = y126058;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret126056;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x126057->FMGL(data)).isValid())) {
                    
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
                if (((index126055) < (((x10_int)0))) || ((((x10_long) (index126055))) >= (x126057->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126055), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret126056 = (x126057->FMGL(data))[index126055];
            ret126056;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index126051 = y126058;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value126052 = r126054;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret126053;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x126057->FMGL(data)).isValid())) {
                
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
            if (((index126051) < (((x10_int)0))) || ((((x10_long) (index126051))) >= (x126057->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126051), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x126057->FMGL(data)).set(index126051, value126052);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret126053 = value126052;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret126053;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret126059 = r126054;
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret126059;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts126072;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts126072);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__20<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__20<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts126072 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__20<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__20<TPMGL(T) >(that_counts126072);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__20(org::scalegraph::util::MemoryChunk<x10_int> counts126072) : counts126072(counts126072) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> counts126072 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i126076)));
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86201domain126063 = i_range126069;
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86201min126064 = i86201domain126063->FMGL(min);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86201max126065 = i86201domain126063->FMGL(max);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126066;
                for (
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126066 = i86201min126064; ((i126066) <= (i86201max126065));
                     
                     //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126066 = ((x10_long) ((i126066) + (((x10_long)1ll)))))
                {
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126067 = i126066;
                    
                    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i126067, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__20<TPMGL(T)>)))org_scalegraph_util_Remote__closure__20<TPMGL(T)>(counts126072))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1425) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1425)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1425);
                {
                    
                    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1425);
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
    x10_long i126076;
    x10::lang::LongRange i_range126069;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i126076);
        buf.write(this->i_range126069);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__19<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__19<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i126076 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range126069 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__19<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__19<TPMGL(T) >(that_scatterGather, that_i126076, that_i_range126069, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__19(org::scalegraph::util::DistScatterGather scatterGather, x10_long i126076, x10::lang::LongRange i_range126069, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i126076(i126076), i_range126069(i_range126069), f(f) { }
    
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
    void __apply(x10_int dst_role126089, x10_long dst_ind126090, TPMGL(T) value126091) {
        
        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off126092 = ((x10_int) (((__extension__ ({
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x126093 = offsets126105;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y126094 = dst_role126089;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret126095;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r126080 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index126081 = y126094;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret126082;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x126093->FMGL(data)).isValid())) {
                        
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
                    if (((index126081) < (((x10_int)0))) || ((((x10_long) (index126081))) >= (x126093->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126081), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret126082 = (x126093->FMGL(data))[index126081];
                ret126082;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index126077 = y126094;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value126078 = r126080;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret126079;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x126093->FMGL(data)).isValid())) {
                    
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
                if (((index126077) < (((x10_int)0))) || ((((x10_long) (index126077))) >= (x126093->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126077), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x126093->FMGL(data)).set(index126077, value126078);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret126079 = value126078;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret126079;
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret126095 = r126080;
            ret126095;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index126083 = off126092;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) value126084 = value126091;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) ret126085;
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
            if (((index126083) < (((x10_int)0))) || ((((x10_long) (index126083))) >= (reqVal->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126083), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqVal->FMGL(data)).set(index126083, value126084);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret126085 = value126084;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret126085;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index126086 = off126092;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value126087 = dst_ind126090;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret126088;
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
            if (((index126086) < (((x10_int)0))) || ((((x10_long) (index126086))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126086), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index126086, value126087);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret126088 = value126087;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret126088;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets126105;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets126105);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__22<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets126105 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__22<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__22<TPMGL(T) >(that_offsets126105, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__22(org::scalegraph::util::MemoryChunk<x10_int> offsets126105, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets126105(offsets126105), reqVal(reqVal), reqIdx(reqIdx) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> offsets126105 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i126109)));
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86238domain126096 = i_range126102;
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86238min126097 = i86238domain126096->FMGL(min);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86238max126098 = i86238domain126096->FMGL(max);
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126099;
                for (
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126099 = i86238min126097; ((i126099) <= (i86238max126098));
                     
                     //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126099 = ((x10_long) ((i126099) + (((x10_long)1ll)))))
                {
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126100 = i126099;
                    
                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i126100, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__22<TPMGL(T)>)))org_scalegraph_util_Remote__closure__22<TPMGL(T)>(offsets126105, reqVal, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1428) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1428)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1428);
                {
                    
                    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1428);
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
    x10_long i126109;
    x10::lang::LongRange i_range126102;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i126109);
        buf.write(this->i_range126102);
        buf.write(this->f);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__21<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__21<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i126109 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range126102 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__21<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__21<TPMGL(T) >(that_scatterGather, that_i126109, that_i_range126102, that_f, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__21(org::scalegraph::util::DistScatterGather scatterGather, x10_long i126109, x10::lang::LongRange i_range126102, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i126109(i126109), i_range126102(i_range126102), f(f), reqVal(reqVal), reqIdx(reqIdx) { }
    
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
            x10_long tid126122 = ((x10_long) (idx126124));
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r126123 = i_range126128;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86275domain126117 = r126123;
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86275min126118 = i86275domain126117->FMGL(min);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86275max126119 = i86275domain126117->FMGL(max);
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126120;
                for (
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126120 = i86275min126118; ((i126120) <= (i86275max126119));
                     
                     //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126120 = ((x10_long) ((i126120) + (((x10_long)1ll)))))
                {
                    
                    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126121 = i126120;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index126110 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index126111 = i126121;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret126112;
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
                            if (((index126111) < (((x10_long) (((x10_int)0))))) ||
                                ((index126111) >= (recvIdx->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126111), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret126112 = (recvIdx->FMGL(data))[index126111];
                        ret126112;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value126113 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index126114 = i126121;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret126115;
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
                            if (((index126114) < (((x10_long) (((x10_int)0))))) ||
                                ((index126114) >= (recvVal->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126114), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret126115 = (recvVal->FMGL(data))[index126114];
                        ret126115;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret126116;
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
                        if (((index126110) < (((x10_long) (((x10_int)0))))) ||
                            ((index126110) >= (array->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126110), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (array->FMGL(data)).set(index126110, value126113);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret126116 = value126113;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret126116;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1431) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1431)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1431);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1431);
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
    x10_int idx126124;
    x10::lang::LongRange i_range126128;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> array;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx126124);
        buf.write(this->i_range126128);
        buf.write(this->recvIdx);
        buf.write(this->recvVal);
        buf.write(this->array);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__23<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__23<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx126124 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range126128 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_array = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__23<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__23<TPMGL(T) >(that_idx126124, that_i_range126128, that_recvIdx, that_recvVal, that_array);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__23(x10_int idx126124, x10::lang::LongRange i_range126128, org::scalegraph::util::MemoryChunk<x10_long> recvIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal, org::scalegraph::util::MemoryChunk<TPMGL(T)> array) : idx126124(idx126124), i_range126128(i_range126128), recvIdx(recvIdx), recvVal(recvVal), array(array) { }
    
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
    void __apply(x10_int dst_role126148, x10_long dst_ind126149, TPMGL(T) value126150) {
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> x126145 = counts126160;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int y126146 = dst_role126148;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int ret126147;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int r126142 = ((x10_int) (((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index126143 = y126146;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret126144;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x126145->FMGL(data)).isValid())) {
                    
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
                if (((index126143) < (((x10_int)0))) || ((((x10_long) (index126143))) >= (x126145->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126143), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret126144 = (x126145->FMGL(data))[index126143];
            ret126144;
        }))
        ) + (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index126139 = y126146;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int value126140 = r126142;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret126141;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x126145->FMGL(data)).isValid())) {
                
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
            if (((index126139) < (((x10_int)0))) || ((((x10_long) (index126139))) >= (x126145->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126139), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x126145->FMGL(data)).set(index126139, value126140);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret126141 = value126140;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret126141;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
        ret126147 = r126142;
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Local_c
        ret126147;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> counts126160;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->counts126160);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__25<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__25<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_counts126160 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_util_Remote__closure__25<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__25<TPMGL(T) >(that_counts126160);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__25(org::scalegraph::util::MemoryChunk<x10_int> counts126160) : counts126160(counts126160) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> counts126160 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (i126164)));
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86294domain126151 = i_range126157;
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86294min126152 = i86294domain126151->FMGL(min);
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86294max126153 = i86294domain126151->FMGL(max);
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126154;
                for (
                     //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126154 = i86294min126152; ((i126154) <= (i86294max126153));
                     
                     //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126154 = ((x10_long) ((i126154) + (((x10_long)1ll)))))
                {
                    
                    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126155 = i126154;
                    
                    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i126155, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__25<TPMGL(T)>)))org_scalegraph_util_Remote__closure__25<TPMGL(T)>(counts126160))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1435) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1435)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1435);
                {
                    
                    //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1435);
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
    x10_long i126164;
    x10::lang::LongRange i_range126157;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i126164);
        buf.write(this->i_range126157);
        buf.write(this->f);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__24<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__24<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i126164 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range126157 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org_scalegraph_util_Remote__closure__24<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__24<TPMGL(T) >(that_scatterGather, that_i126164, that_i_range126157, that_f);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__24(org::scalegraph::util::DistScatterGather scatterGather, x10_long i126164, x10::lang::LongRange i_range126157, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f) : scatterGather(scatterGather), i126164(i126164), i_range126157(i_range126157), f(f) { }
    
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
    void __apply(x10_int dst_role126177, x10_long dst_ind126178, TPMGL(T) value126179) {
        
        //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int off126180 = ((x10_int) (((__extension__ ({
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> x126181 = offsets126193;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int y126182 = dst_role126177;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Empty_c
            ;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int ret126183;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_int r126168 = ((x10_int) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index126169 = y126182;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret126170;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x126181->FMGL(data)).isValid())) {
                        
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
                    if (((index126169) < (((x10_int)0))) || ((((x10_long) (index126169))) >= (x126181->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126169), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret126170 = (x126181->FMGL(data))[index126169];
                ret126170;
            }))
            ) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index126165 = y126182;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value126166 = r126168;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret126167;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x126181->FMGL(data)).isValid())) {
                    
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
                if (((index126165) < (((x10_int)0))) || ((((x10_long) (index126165))) >= (x126181->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126165), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x126181->FMGL(data)).set(index126165, value126166);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret126167 = value126166;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret126167;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
            ret126183 = r126168;
            ret126183;
        }))
        ) - (((x10_int)1))));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index126171 = off126180;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) value126172 = value126179;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) ret126173;
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
            if (((index126171) < (((x10_int)0))) || ((((x10_long) (index126171))) >= (reqVal->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126171), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqVal->FMGL(data)).set(index126171, value126172);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret126173 = value126172;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret126173;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index126174 = off126180;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value126175 = dst_ind126178;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret126176;
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
            if (((index126174) < (((x10_int)0))) || ((((x10_long) (index126174))) >= (reqIdx->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126174), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (reqIdx->FMGL(data)).set(index126174, value126175);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret126176 = value126175;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret126176;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> offsets126193;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsets126193);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__27<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__27<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_offsets126193 = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__27<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__27<TPMGL(T) >(that_offsets126193, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__27(org::scalegraph::util::MemoryChunk<x10_int> offsets126193, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : offsets126193(offsets126193), reqVal(reqVal), reqIdx(reqIdx) { }
    
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
            org::scalegraph::util::MemoryChunk<x10_int> offsets126193 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (i126197)));
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86331domain126184 = i_range126190;
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86331min126185 = i86331domain126184->FMGL(min);
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86331max126186 = i86331domain126184->FMGL(max);
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126187;
                for (
                     //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126187 = i86331min126185; ((i126187) <= (i86331max126186));
                     
                     //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126187 = ((x10_long) ((i126187) + (((x10_long)1ll)))))
                {
                    
                    //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126188 = i126187;
                    
                    //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::__apply(x10aux::nullCheck(f), 
                      i126188, reinterpret_cast<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)> >(sizeof(org_scalegraph_util_Remote__closure__27<TPMGL(T)>)))org_scalegraph_util_Remote__closure__27<TPMGL(T)>(offsets126193, reqVal, reqIdx))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1438) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1438)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1438);
                {
                    
                    //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1438);
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
    x10_long i126197;
    x10::lang::LongRange i_range126190;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal;
    org::scalegraph::util::MemoryChunk<x10_long> reqIdx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->i126197);
        buf.write(this->i_range126190);
        buf.write(this->f);
        buf.write(this->reqVal);
        buf.write(this->reqIdx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__26<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__26<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_long that_i126197 = buf.read<x10_long>();
        x10::lang::LongRange that_i_range126190 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* that_f = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_reqVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_reqIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Remote__closure__26<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__26<TPMGL(T) >(that_scatterGather, that_i126197, that_i_range126190, that_f, that_reqVal, that_reqIdx);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__26(org::scalegraph::util::DistScatterGather scatterGather, x10_long i126197, x10::lang::LongRange i_range126190, x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>* f, org::scalegraph::util::MemoryChunk<TPMGL(T)> reqVal, org::scalegraph::util::MemoryChunk<x10_long> reqIdx) : scatterGather(scatterGather), i126197(i126197), i_range126190(i_range126190), f(f), reqVal(reqVal), reqIdx(reqIdx) { }
    
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
            x10_long tid126207 = ((x10_long) (idx126209));
            
            //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r126208 = i_range126213;
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86368domain126202 = r126208;
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86368min126203 = i86368domain126202->FMGL(min);
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long i86368max126204 = i86368domain126202->FMGL(max);
            
            //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
            {
                x10_long i126205;
                for (
                     //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                     i126205 = i86368min126203; ((i126205) <= (i86368max126204));
                     
                     //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                     i126205 = ((x10_long) ((i126205) + (((x10_long)1ll)))))
                {
                    
                    //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long i126206 = i126205;
                    
                    //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(setter), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index126198 = i126206;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret126199;
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
                              if (((index126198) < (((x10_long) (((x10_int)0))))) ||
                                  ((index126198) >= (recvIdx->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126198), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret126199 = (recvIdx->FMGL(data))[index126198];
                          ret126199;
                      }))
                      , (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index126200 = i126206;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          TPMGL(T) ret126201;
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
                              if (((index126200) < (((x10_long) (((x10_int)0))))) ||
                                  ((index126200) >= (recvVal->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126200), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret126201 = (recvVal->FMGL(data))[index126200];
                          ret126201;
                      }))
                      );
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1441) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1441)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1441);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1441);
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
    x10_int idx126209;
    x10::lang::LongRange i_range126213;
    x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter;
    org::scalegraph::util::MemoryChunk<x10_long> recvIdx;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx126209);
        buf.write(this->i_range126213);
        buf.write(this->setter);
        buf.write(this->recvIdx);
        buf.write(this->recvVal);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Remote__closure__28<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Remote__closure__28<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx126209 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range126213 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* that_setter = buf.read<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvIdx = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_recvVal = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_util_Remote__closure__28<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Remote__closure__28<TPMGL(T) >(that_idx126209, that_i_range126213, that_setter, that_recvIdx, that_recvVal);
        return this_;
    }
    
    org_scalegraph_util_Remote__closure__28(x10_int idx126209, x10::lang::LongRange i_range126213, x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter, org::scalegraph::util::MemoryChunk<x10_long> recvIdx, org::scalegraph::util::MemoryChunk<TPMGL(T)> recvVal) : idx126209(idx126209), i_range126213(i_range126213), setter(setter), recvIdx(recvIdx), recvVal(recvVal) { }
    
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
#ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1385
#define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1385
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
    x10::array::Array<x10_long>* id11562 = org::scalegraph::util::Remote::splitChunks(
                                             range);
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long nthreads = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret124951;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret124952; __ret124952: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(id11562)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret124951 = (x10aux::nullCheck(id11562)->
                               FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret124952_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(id11562)->
                                FMGL(region)->contains(((x10_int)0))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret124951 = (x10aux::nullCheck(id11562)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id11562)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret124952_end_;
            }
            
        }goto __ret124952_end_; __ret124952_end_: ;
        }
        ret124951;
        }))
        ;
        
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret124954;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret124955; __ret124955: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(id11562)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret124954 = (x10aux::nullCheck(id11562)->
                               FMGL(raw))->__apply(((x10_int)1));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret124955_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(id11562)->
                                FMGL(region)->contains(((x10_int)1))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)1));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret124954 = (x10aux::nullCheck(id11562)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id11562)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret124955_end_;
            }
            
        }goto __ret124955_end_; __ret124955_end_: ;
        }
        ret124954;
        }))
        ;
        
    {
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var142 = x10::lang::Runtime::startFinish();
        {
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable126296 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i85996min125706 = ((x10_long) (((x10_int)0)));
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i85996max125707 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i125708;
                            for (
                                 //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i125708 = i85996min125706;
                                 ((i125708) <= (i85996max125707));
                                 
                                 //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i125708 = ((x10_long) ((i125708) + (((x10_long)1ll)))))
                            {
                                
                                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i125709 = i125708;
                                
                                //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start125701 = ((x10_long) ((range->
                                                                         FMGL(min)) + (((x10_long) ((i125709) * (chunk_size))))));
                                
                                //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range125702 =
                                  x10::lang::LongRange::_make(i_start125701, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a125703 = range->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b125704 = ((x10_long) ((((x10_long) ((i_start125701) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                    ((a125703) < (b125704))
                                      ? (a125703) : (b125704);
                                }))
                                );
                                
                                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__1<TPMGL(T)>)))org_scalegraph_util_Remote__closure__1<TPMGL(T)>(scatterGather, i125709, i_range125702, f))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1387) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1387);
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
            catch (x10::lang::CheckedThrowable* __exc1388) {
                if (true) {
                    x10::lang::CheckedThrowable* formal126297 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1388);
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable126296 = formal126297;
                    }
                } else
                throw;
            }
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126296)))
            {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable126296))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126296));
                }
                
            }
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var142);
            }
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126296)))
            {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126296)))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126296));
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
            x10::lang::CheckedThrowable* throwable126299 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
            try {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i86033min125739 = ((x10_long) (((x10_int)0)));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                        x10_long i86033max125740 = ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                        {
                            x10_long i125741;
                            for (
                                 //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                 i125741 = i86033min125739;
                                 ((i125741) <= (i86033max125740));
                                 
                                 //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                 i125741 = ((x10_long) ((i125741) + (((x10_long)1ll)))))
                            {
                                
                                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i125742 = i125741;
                                
                                //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start125734 = ((x10_long) ((range->
                                                                         FMGL(min)) + (((x10_long) ((i125742) * (chunk_size))))));
                                
                                //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range125735 =
                                  x10::lang::LongRange::_make(i_start125734, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a125736 = range->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b125737 = ((x10_long) ((((x10_long) ((i_start125734) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                    ((a125736) < (b125737))
                                      ? (a125736) : (b125737);
                                }))
                                );
                                
                                //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__3<TPMGL(T)>)))org_scalegraph_util_Remote__closure__3<TPMGL(T)>(scatterGather, i125742, i_range125735, f, requests, reqIdx))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1390) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1390);
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
            catch (x10::lang::CheckedThrowable* __exc1391) {
                if (true) {
                    x10::lang::CheckedThrowable* formal126300 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1391);
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable126299 = formal126300;
                    }
                } else
                throw;
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126299)))
            {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable126299))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126299));
                }
                
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var143);
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126299)))
            {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126299)))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126299));
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
    x10::lang::LongRange range125799 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvRequests->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size125767 = ((x10_long) ((((x10_long) ((range125799->
                                                        FMGL(max)) - (range125799->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads125768 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size125769 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a125770 = ((x10_long) ((((x10_long) ((((x10_long) ((size125767) + (((x10_long) (nthreads125768)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads125768)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a125770) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a125770);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var144 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable126302 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max125764 = ((x10_int) ((nthreads125768) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i125765;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i125765 = ((x10_int)0); ((i125765) <= (i72665max125764));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i125765 = ((x10_int) ((i125765) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i125766 = i125765;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx125757 = i125766;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start125758 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a125759 = ((x10_long) ((range125799->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b125760 = ((x10_long) ((range125799->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i125766))) * (chunk_size125769))))));
                                    ((a125759) < (b125760))
                                      ? (a125759) : (b125760);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range125761 =
                                  x10::lang::LongRange::_make(i_start125758, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a125762 = range125799->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b125763 = ((x10_long) ((((x10_long) ((i_start125758) + (chunk_size125769)))) - (((x10_long) (((x10_int)1))))));
                                    ((a125762) < (b125763))
                                      ? (a125762) : (b125763);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__5<TPMGL(T)>)))org_scalegraph_util_Remote__closure__5<TPMGL(T)>(idx125757, i_range125761, recvRequests, src, reply))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1393) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__2__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1393);
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
            catch (x10::lang::CheckedThrowable* __exc1394) {
                if (true) {
                    x10::lang::CheckedThrowable* formal126303 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1394);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable126302 = formal126303;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126302)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable126302))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126302));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var144);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126302)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126302)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126302));
                }
                
            }
            
        }
    }
    
    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData =
      scatterGather->template gather<TPMGL(T) >(reply);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range125800 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((requests->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size125795 = ((x10_long) ((((x10_long) ((range125800->
                                                        FMGL(max)) - (range125800->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads125796 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size125797 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a125798 = ((x10_long) ((((x10_long) ((((x10_long) ((size125795) + (((x10_long) (nthreads125796)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads125796)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a125798) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a125798);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var145 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable126305 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max125792 = ((x10_int) ((nthreads125796) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i125793;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i125793 = ((x10_int)0); ((i125793) <= (i72665max125792));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i125793 = ((x10_int) ((i125793) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i125794 = i125793;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx125785 = i125794;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start125786 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a125787 = ((x10_long) ((range125800->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b125788 = ((x10_long) ((range125800->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i125794))) * (chunk_size125797))))));
                                    ((a125787) < (b125788))
                                      ? (a125787) : (b125788);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range125789 =
                                  x10::lang::LongRange::_make(i_start125786, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a125790 = range125800->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b125791 = ((x10_long) ((((x10_long) ((i_start125786) + (chunk_size125797)))) - (((x10_long) (((x10_int)1))))));
                                    ((a125790) < (b125791))
                                      ? (a125790) : (b125791);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__6<TPMGL(T)>)))org_scalegraph_util_Remote__closure__6<TPMGL(T)>(idx125785, i_range125789, reqIdx, recvData, dst))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1396) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__3__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1396);
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
            catch (x10::lang::CheckedThrowable* __exc1397) {
                if (true) {
                    x10::lang::CheckedThrowable* formal126306 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1397);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable126305 = formal126306;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126305)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable126305))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126305));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var145);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable126305)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126305)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable126305));
                }
                
            }
            
        }
    }
    }
    #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1385
    #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1398
    #define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1398
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
        x10::util::Team* team125934 = team;
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> src125935 =
          src;
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> dst125936 =
          array;
        
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range125937 = range;
        
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>* f125938 =
          f;
        
        //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int teamSize125918 = x10aux::nullCheck(team125934)->size();
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistScatterGather scatterGather125919 =
           org::scalegraph::util::DistScatterGather::_alloc();
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorCall_c
        (scatterGather125919)->::org::scalegraph::util::DistScatterGather::_constructor(
          team125934);
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_long>* id125920 = org::scalegraph::util::Remote::splitChunks(
                                                  range125937);
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long nthreads125921 = (__extension__ ({
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_long ret125922;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret125923; __ret125923: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(id125920)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125922 = (x10aux::nullCheck(id125920)->
                                   FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret125923_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(id125920)->
                                    FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125922 = (x10aux::nullCheck(id125920)->
                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id125920)->
                                                                                       FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret125923_end_;
                }
                
            }goto __ret125923_end_; __ret125923_end_: ;
            }
            ret125922;
            }))
            ;
            
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size125924 = (__extension__ ({
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_long ret125925;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret125926; __ret125926: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(id125920)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125925 = (x10aux::nullCheck(id125920)->
                                   FMGL(raw))->__apply(((x10_int)1));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret125926_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(id125920)->
                                    FMGL(region)->contains(
                                    ((x10_int)1)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)1));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret125925 = (x10aux::nullCheck(id125920)->
                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id125920)->
                                                                                       FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret125926_end_;
                }
                
            }goto __ret125926_end_; __ret125926_end_: ;
            }
            ret125925;
            }))
            ;
            
        {
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var146 = x10::lang::Runtime::startFinish();
            {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable126308 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i85996min125823 = ((x10_long) (((x10_int)0)));
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i85996max125824 = ((x10_long) ((nthreads125921) - (((x10_long) (((x10_int)1))))));
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                            {
                                x10_long i125825;
                                for (
                                     //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                     i125825 = i85996min125823;
                                     ((i125825) <= (i85996max125824));
                                     
                                     //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                     i125825 = ((x10_long) ((i125825) + (((x10_long)1ll)))))
                                {
                                    
                                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i125826 = i125825;
                                    
                                    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start125818 =
                                      ((x10_long) ((range125937->
                                                      FMGL(min)) + (((x10_long) ((i125826) * (chunk_size125924))))));
                                    
                                    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range125819 =
                                      x10::lang::LongRange::_make(i_start125818, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a125820 =
                                          range125937->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b125821 =
                                          ((x10_long) ((((x10_long) ((i_start125818) + (chunk_size125924)))) - (((x10_long) (((x10_int)1))))));
                                        ((a125820) < (b125821))
                                          ? (a125820) : (b125821);
                                    }))
                                    );
                                    
                                    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__7<TPMGL(T)>)))org_scalegraph_util_Remote__closure__7<TPMGL(T)>(scatterGather125919, i125826, i_range125819, f125938))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1400) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1400);
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
                catch (x10::lang::CheckedThrowable* __exc1401) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal126309 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1401);
                        {
                            
                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable126308 = formal126309;
                        }
                    } else
                    throw;
                }
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126308)))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable126308))
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126308));
                    }
                    
                }
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var146);
                }
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126308)))
                {
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126308)))
                    {
                        
                        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126308));
                    }
                    
                }
                
            }
        }
        
        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
        scatterGather125919->org::scalegraph::util::DistScatterGather::sum();
        
        //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int numRequests125927 = scatterGather125919->org::scalegraph::util::DistScatterGather::sendCount();
        
        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> requests125928 =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests125927)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> reqIdx125929 =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (numRequests125927)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        {
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var147 = x10::lang::Runtime::startFinish();
            {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable126311 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i86033min125856 = ((x10_long) (((x10_int)0)));
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                            x10_long i86033max125857 = ((x10_long) ((nthreads125921) - (((x10_long) (((x10_int)1))))));
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                            {
                                x10_long i125858;
                                for (
                                     //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                     i125858 = i86033min125856;
                                     ((i125858) <= (i86033max125857));
                                     
                                     //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                     i125858 = ((x10_long) ((i125858) + (((x10_long)1ll)))))
                                {
                                    
                                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i125859 = i125858;
                                    
                                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start125851 =
                                      ((x10_long) ((range125937->
                                                      FMGL(min)) + (((x10_long) ((i125859) * (chunk_size125924))))));
                                    
                                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range125852 =
                                      x10::lang::LongRange::_make(i_start125851, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a125853 =
                                          range125937->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b125854 =
                                          ((x10_long) ((((x10_long) ((i_start125851) + (chunk_size125924)))) - (((x10_long) (((x10_int)1))))));
                                        ((a125853) < (b125854))
                                          ? (a125853) : (b125854);
                                    }))
                                    );
                                    
                                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__9<TPMGL(T)>)))org_scalegraph_util_Remote__closure__9<TPMGL(T)>(scatterGather125919, i125859, i_range125852, f125938, requests125928, reqIdx125929))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1403) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__1__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1403);
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
                catch (x10::lang::CheckedThrowable* __exc1404) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal126312 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1404);
                        {
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable126311 = formal126312;
                        }
                    } else
                    throw;
                }
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126311)))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable126311))
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126311));
                    }
                    
                }
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var147);
                }
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126311)))
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126311)))
                    {
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126311));
                    }
                    
                }
                
            }
        }
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> recvRequests125930 =
          scatterGather125919->template scatter<x10_long >(
            requests125928);
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        x10_int recvCount125931 = scatterGather125919->org::scalegraph::util::DistScatterGather::recvCount();
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> reply125932 =
          org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (recvCount125931)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range125916 = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvRequests125930->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size125884 = ((x10_long) ((((x10_long) ((range125916->
                                                            FMGL(max)) - (range125916->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads125885 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size125886 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a125887 = ((x10_long) ((((x10_long) ((((x10_long) ((size125884) + (((x10_long) (nthreads125885)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads125885)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a125887) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a125887);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var148 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable126314 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i72665max125881 = ((x10_int) ((nthreads125885) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i125882;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i125882 = ((x10_int)0);
                                     ((i125882) <= (i72665max125881));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i125882 = ((x10_int) ((i125882) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i125883 = i125882;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx125874 = i125883;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start125875 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a125876 =
                                          ((x10_long) ((range125916->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b125877 =
                                          ((x10_long) ((range125916->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i125883))) * (chunk_size125886))))));
                                        ((a125876) < (b125877))
                                          ? (a125876) : (b125877);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range125878 =
                                      x10::lang::LongRange::_make(i_start125875, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a125879 =
                                          range125916->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b125880 =
                                          ((x10_long) ((((x10_long) ((i_start125875) + (chunk_size125886)))) - (((x10_long) (((x10_int)1))))));
                                        ((a125879) < (b125880))
                                          ? (a125879) : (b125880);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__11<TPMGL(T)>)))org_scalegraph_util_Remote__closure__11<TPMGL(T)>(idx125874, i_range125878, recvRequests125930, src125935, reply125932))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1406) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__2__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1406);
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
                catch (x10::lang::CheckedThrowable* __exc1407) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal126315 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1407);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable126314 = formal126315;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126314)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable126314))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126314));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var148);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126314)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126314)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126314));
                    }
                    
                }
                
            }
        }
        
        //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData125933 =
          scatterGather125919->template gather<TPMGL(T) >(
            reply125932);
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range125917 = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((requests125928->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size125912 = ((x10_long) ((((x10_long) ((range125917->
                                                            FMGL(max)) - (range125917->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads125913 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size125914 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a125915 = ((x10_long) ((((x10_long) ((((x10_long) ((size125912) + (((x10_long) (nthreads125913)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads125913)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a125915) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a125915);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var149 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable126317 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i72665max125909 = ((x10_int) ((nthreads125913) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i125910;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i125910 = ((x10_int)0);
                                     ((i125910) <= (i72665max125909));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i125910 = ((x10_int) ((i125910) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i125911 = i125910;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx125902 = i125911;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start125903 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a125904 =
                                          ((x10_long) ((range125917->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b125905 =
                                          ((x10_long) ((range125917->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i125911))) * (chunk_size125914))))));
                                        ((a125904) < (b125905))
                                          ? (a125904) : (b125905);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range125906 =
                                      x10::lang::LongRange::_make(i_start125903, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a125907 =
                                          range125917->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b125908 =
                                          ((x10_long) ((((x10_long) ((i_start125903) + (chunk_size125914)))) - (((x10_long) (((x10_int)1))))));
                                        ((a125907) < (b125908))
                                          ? (a125907) : (b125908);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__12<TPMGL(T)>)))org_scalegraph_util_Remote__closure__12<TPMGL(T)>(idx125902, i_range125906, reqIdx125929, recvData125933, dst125936))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1409) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__3__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1409);
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
                catch (x10::lang::CheckedThrowable* __exc1410) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal126318 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1410);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable126317 = formal126318;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126317)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable126317))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126317));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var149);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable126317)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126317)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable126317));
                    }
                    
                }
                
            }
        }
        }
        #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1398
        #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1411
        #define ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1411
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
            x10::array::Array<x10_long>* id11569 = org::scalegraph::util::Remote::splitChunks(
                                                     range);
            
            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long nthreads = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret125337;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret125338; __ret125338: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id11569)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125337 = (x10aux::nullCheck(id11569)->
                                       FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret125338_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id11569)->
                                        FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125337 = (x10aux::nullCheck(id11569)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id11569)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret125338_end_;
                    }
                    
                }goto __ret125338_end_; __ret125338_end_: ;
                }
                ret125337;
                }))
                ;
                
            
            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size = (__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_long ret125340;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret125341; __ret125341: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(id11569)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125340 = (x10aux::nullCheck(id11569)->
                                       FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret125341_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(id11569)->
                                        FMGL(region)->contains(
                                        ((x10_int)1)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)1));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret125340 = (x10aux::nullCheck(id11569)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id11569)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret125341_end_;
                    }
                    
                }goto __ret125341_end_; __ret125341_end_: ;
                }
                ret125340;
                }))
                ;
                
            {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var150 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable126320 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86108min125961 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86108max125962 =
                                  ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i125963;
                                    for (
                                         //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i125963 = i86108min125961;
                                         ((i125963) <= (i86108max125962));
                                         
                                         //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i125963 = ((x10_long) ((i125963) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i125964 =
                                          i125963;
                                        
                                        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start125956 =
                                          ((x10_long) ((range->
                                                          FMGL(min)) + (((x10_long) ((i125964) * (chunk_size))))));
                                        
                                        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range125957 =
                                          x10::lang::LongRange::_make(i_start125956, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a125958 =
                                              range->FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b125959 =
                                              ((x10_long) ((((x10_long) ((i_start125956) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                            ((a125958) < (b125959))
                                              ? (a125958)
                                              : (b125959);
                                        }))
                                        );
                                        
                                        //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__13<TPMGL(T)>)))org_scalegraph_util_Remote__closure__13<TPMGL(T)>(scatterGather, i125964, i_range125957, f))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1413) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1413);
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
                    catch (x10::lang::CheckedThrowable* __exc1414) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal126321 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1414);
                            {
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable126320 = formal126321;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126320)))
                    {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable126320))
                        {
                            
                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126320));
                        }
                        
                    }
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var150);
                    }
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126320)))
                    {
                        
                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126320)))
                        {
                            
                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126320));
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
                    x10::lang::CheckedThrowable* throwable126323 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86145min125994 =
                                  ((x10_long) (((x10_int)0)));
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                x10_long i86145max125995 =
                                  ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                {
                                    x10_long i125996;
                                    for (
                                         //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                         i125996 = i86145min125994;
                                         ((i125996) <= (i86145max125995));
                                         
                                         //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                         i125996 = ((x10_long) ((i125996) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i125997 =
                                          i125996;
                                        
                                        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start125989 =
                                          ((x10_long) ((range->
                                                          FMGL(min)) + (((x10_long) ((i125997) * (chunk_size))))));
                                        
                                        //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range125990 =
                                          x10::lang::LongRange::_make(i_start125989, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a125991 =
                                              range->FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b125992 =
                                              ((x10_long) ((((x10_long) ((i_start125989) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                            ((a125991) < (b125992))
                                              ? (a125991)
                                              : (b125992);
                                        }))
                                        );
                                        
                                        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__15<TPMGL(T)>)))org_scalegraph_util_Remote__closure__15<TPMGL(T)>(scatterGather, i125997, i_range125990, f, requests, reqIdx))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1416) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1416);
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
                    catch (x10::lang::CheckedThrowable* __exc1417) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal126324 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1417);
                            {
                                
                                //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable126323 = formal126324;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126323)))
                    {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable126323))
                        {
                            
                            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126323));
                        }
                        
                    }
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var151);
                    }
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126323)))
                    {
                        
                        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126323)))
                        {
                            
                            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126323));
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
            x10::lang::LongRange range126049 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvRequests->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size126020 = ((x10_long) ((((x10_long) ((range126049->
                                                                FMGL(max)) - (range126049->
                                                                                FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads126021 = x10::lang::Runtime::
                                       FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size126022 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a126023 = ((x10_long) ((((x10_long) ((((x10_long) ((size126020) + (((x10_long) (nthreads126021)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads126021)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a126023) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a126023);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var152 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable126326 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max126017 =
                                  ((x10_int) ((nthreads126021) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i126018;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i126018 = ((x10_int)0);
                                         ((i126018) <= (i72665max126017));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i126018 = ((x10_int) ((i126018) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i126019 =
                                          i126018;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx126010 =
                                          i126019;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start126011 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a126012 =
                                              ((x10_long) ((range126049->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b126013 =
                                              ((x10_long) ((range126049->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i126019))) * (chunk_size126022))))));
                                            ((a126012) < (b126013))
                                              ? (a126012)
                                              : (b126013);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range126014 =
                                          x10::lang::LongRange::_make(i_start126011, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a126015 =
                                              range126049->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b126016 =
                                              ((x10_long) ((((x10_long) ((i_start126011) + (chunk_size126022)))) - (((x10_long) (((x10_int)1))))));
                                            ((a126015) < (b126016))
                                              ? (a126015)
                                              : (b126016);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__17<TPMGL(T)>)))org_scalegraph_util_Remote__closure__17<TPMGL(T)>(idx126010, i_range126014, getter, recvRequests, reply))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1419) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1419);
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
                    catch (x10::lang::CheckedThrowable* __exc1420) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal126327 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1420);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable126326 = formal126327;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126326)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable126326))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126326));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var152);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126326)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126326)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126326));
                        }
                        
                    }
                    
                }
            }
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> recvData =
              scatterGather->template gather<TPMGL(T) >(reply);
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range126050 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((requests->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size126045 = ((x10_long) ((((x10_long) ((range126050->
                                                                FMGL(max)) - (range126050->
                                                                                FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads126046 = x10::lang::Runtime::
                                       FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size126047 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a126048 = ((x10_long) ((((x10_long) ((((x10_long) ((size126045) + (((x10_long) (nthreads126046)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads126046)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a126048) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a126048);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var153 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable126329 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max126042 =
                                  ((x10_int) ((nthreads126046) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i126043;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i126043 = ((x10_int)0);
                                         ((i126043) <= (i72665max126042));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i126043 = ((x10_int) ((i126043) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i126044 =
                                          i126043;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx126035 =
                                          i126044;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start126036 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a126037 =
                                              ((x10_long) ((range126050->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b126038 =
                                              ((x10_long) ((range126050->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i126044))) * (chunk_size126047))))));
                                            ((a126037) < (b126038))
                                              ? (a126037)
                                              : (b126038);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range126039 =
                                          x10::lang::LongRange::_make(i_start126036, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a126040 =
                                              range126050->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b126041 =
                                              ((x10_long) ((((x10_long) ((i_start126036) + (chunk_size126047)))) - (((x10_long) (((x10_int)1))))));
                                            ((a126040) < (b126041))
                                              ? (a126040)
                                              : (b126041);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__18<TPMGL(T)>)))org_scalegraph_util_Remote__closure__18<TPMGL(T)>(idx126035, i_range126039, setter, reqIdx, recvData))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1422) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1422);
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
                    catch (x10::lang::CheckedThrowable* __exc1423) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal126330 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1423);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable126329 = formal126330;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126329)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable126329))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126329));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var153);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable126329)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126329)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable126329));
                        }
                        
                    }
                    
                }
            }
            }
            #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_get_1411
            #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1424
            #define ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1424
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
                x10::array::Array<x10_long>* id11573 = org::scalegraph::util::Remote::splitChunks(
                                                         range);
                
                //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long nthreads = (__extension__ ({
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_long ret125479;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret125480; __ret125480: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(id11573)->FMGL(rail))
                        {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret125479 = (x10aux::nullCheck(id11573)->
                                           FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret125480_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(id11573)->
                                            FMGL(region)->contains(
                                            ((x10_int)0))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)0));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret125479 = (x10aux::nullCheck(id11573)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id11573)->
                                                                                               FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret125480_end_;
                        }
                        
                    }goto __ret125480_end_; __ret125480_end_: ;
                    }
                    ret125479;
                    }))
                    ;
                    
                
                //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                x10_long chunk_size = (__extension__ ({
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_long ret125482;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret125483; __ret125483: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(id11573)->FMGL(rail))
                        {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret125482 = (x10aux::nullCheck(id11573)->
                                           FMGL(raw))->__apply(((x10_int)1));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret125483_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(id11573)->
                                            FMGL(region)->contains(
                                            ((x10_int)1))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)1));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret125482 = (x10aux::nullCheck(id11573)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id11573)->
                                                                                               FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret125483_end_;
                        }
                        
                    }goto __ret125483_end_; __ret125483_end_: ;
                    }
                    ret125482;
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
                        x10::lang::CheckedThrowable* throwable126332 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i86220min126073 =
                                      ((x10_long) (((x10_int)0)));
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i86220max126074 =
                                      ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                    {
                                        x10_long i126075;
                                        for (
                                             //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                             i126075 = i86220min126073;
                                             ((i126075) <= (i86220max126074));
                                             
                                             //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                             i126075 = ((x10_long) ((i126075) + (((x10_long)1ll)))))
                                        {
                                            
                                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i126076 =
                                              i126075;
                                            
                                            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i_start126068 =
                                              ((x10_long) ((range->
                                                              FMGL(min)) + (((x10_long) ((i126076) * (chunk_size))))));
                                            
                                            //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::LongRange i_range126069 =
                                              x10::lang::LongRange::_make(i_start126068, (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a126070 =
                                                  range->
                                                    FMGL(max);
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b126071 =
                                                  ((x10_long) ((((x10_long) ((i_start126068) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                ((a126070) < (b126071))
                                                  ? (a126070)
                                                  : (b126071);
                                            }))
                                            );
                                            
                                            //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::runAsync(
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__19<TPMGL(T)>)))org_scalegraph_util_Remote__closure__19<TPMGL(T)>(scatterGather, i126076, i_range126069, f))));
                                        }
                                    }
                                    
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc1426) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1426);
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
                        catch (x10::lang::CheckedThrowable* __exc1427) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal126333 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1427);
                                {
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable126332 = formal126333;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable126332)))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable126332))
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable126332));
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
                                                    throwable126332)))
                        {
                            
                            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126332)))
                            {
                                
                                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable126332));
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
                        x10::lang::CheckedThrowable* throwable126335 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i86257min126106 =
                                      ((x10_long) (((x10_int)0)));
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                    x10_long i86257max126107 =
                                      ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                    {
                                        x10_long i126108;
                                        for (
                                             //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                             i126108 = i86257min126106;
                                             ((i126108) <= (i86257max126107));
                                             
                                             //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                             i126108 = ((x10_long) ((i126108) + (((x10_long)1ll)))))
                                        {
                                            
                                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i126109 =
                                              i126108;
                                            
                                            //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10_long i_start126101 =
                                              ((x10_long) ((range->
                                                              FMGL(min)) + (((x10_long) ((i126109) * (chunk_size))))));
                                            
                                            //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::LongRange i_range126102 =
                                              x10::lang::LongRange::_make(i_start126101, (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a126103 =
                                                  range->
                                                    FMGL(max);
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b126104 =
                                                  ((x10_long) ((((x10_long) ((i_start126101) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                ((a126103) < (b126104))
                                                  ? (a126103)
                                                  : (b126104);
                                            }))
                                            );
                                            
                                            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::runAsync(
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__21<TPMGL(T)>)))org_scalegraph_util_Remote__closure__21<TPMGL(T)>(scatterGather, i126109, i_range126102, f, reqVal, reqIdx))));
                                        }
                                    }
                                    
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc1429) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1429);
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
                        catch (x10::lang::CheckedThrowable* __exc1430) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal126336 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1430);
                                {
                                    
                                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable126335 = formal126336;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable126335)))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable126335))
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable126335));
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
                                                    throwable126335)))
                        {
                            
                            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126335)))
                            {
                                
                                //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable126335));
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
                x10::lang::LongRange range126138 = (__extension__ ({
                    x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvVal->
                                                                                 FMGL(data)->
                                                                                 FMGL(size)) - (((x10_long)1ll)))));
                }))
                ;
                
                //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long size126134 = ((x10_long) ((((x10_long) ((range126138->
                                                                    FMGL(max)) - (range126138->
                                                                                    FMGL(min))))) + (((x10_long) (((x10_int)1))))));
                
                //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_int nthreads126135 = x10::lang::Runtime::
                                           FMGL(NTHREADS__get)();
                
                //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long chunk_size126136 = (__extension__ ({
                    
                    //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                    x10_long a126137 = ((x10_long) ((((x10_long) ((((x10_long) ((size126134) + (((x10_long) (nthreads126135)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads126135)))));
                    
                    //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                    ;
                    ((a126137) < (((x10_long)1ll))) ? (((x10_long)1ll))
                      : (a126137);
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
                        x10::lang::CheckedThrowable* throwable126338 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i72665max126131 =
                                      ((x10_int) ((nthreads126135) - (((x10_int)1))));
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                    {
                                        x10_int i126132;
                                        for (
                                             //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                             i126132 = ((x10_int)0);
                                             ((i126132) <= (i72665max126131));
                                             
                                             //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                             i126132 = ((x10_int) ((i126132) + (((x10_int)1)))))
                                        {
                                            
                                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10_int i126133 =
                                              i126132;
                                            
                                            //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10_int idx126124 =
                                              i126133;
                                            
                                            //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10_long i_start126125 =
                                              (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a126126 =
                                                  ((x10_long) ((range126138->
                                                                  FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b126127 =
                                                  ((x10_long) ((range126138->
                                                                  FMGL(min)) + (((x10_long) ((((x10_long) (i126133))) * (chunk_size126136))))));
                                                ((a126126) < (b126127))
                                                  ? (a126126)
                                                  : (b126127);
                                            }))
                                            ;
                                            
                                            //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::LongRange i_range126128 =
                                              x10::lang::LongRange::_make(i_start126125, (__extension__ ({
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long a126129 =
                                                  range126138->
                                                    FMGL(max);
                                                
                                                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                x10_long b126130 =
                                                  ((x10_long) ((((x10_long) ((i_start126125) + (chunk_size126136)))) - (((x10_long) (((x10_int)1))))));
                                                ((a126129) < (b126130))
                                                  ? (a126129)
                                                  : (b126130);
                                            }))
                                            );
                                            
                                            //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                            x10::lang::Runtime::runAsync(
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__23<TPMGL(T)>)))org_scalegraph_util_Remote__closure__23<TPMGL(T)>(idx126124, i_range126128, recvIdx, recvVal, array))));
                                        }
                                    }
                                    
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc1432) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1432);
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
                        catch (x10::lang::CheckedThrowable* __exc1433) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal126339 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1433);
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable126338 = formal126339;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable126338)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable126338))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable126338));
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
                                                    throwable126338)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126338)))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable126338));
                            }
                            
                        }
                        
                    }
                }
                }
                #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1424
                #ifndef ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1434
                #define ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1434
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
                    x10::array::Array<x10_long>* id11577 =
                      org::scalegraph::util::Remote::splitChunks(
                        range);
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long nthreads = (__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_long ret125586;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret125587; __ret125587: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(id11577)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret125586 = (x10aux::nullCheck(id11577)->
                                               FMGL(raw))->__apply(((x10_int)0));
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret125587_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(id11577)->
                                                FMGL(region)->contains(
                                                ((x10_int)0))))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      ((x10_int)0));
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret125586 = (x10aux::nullCheck(id11577)->
                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(id11577)->
                                                                                                   FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret125587_end_;
                            }
                            
                        }goto __ret125587_end_; __ret125587_end_: ;
                        }
                        ret125586;
                        }))
                        ;
                        
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                    x10_long chunk_size = (__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_long ret125589;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret125590; __ret125590: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(id11577)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret125589 = (x10aux::nullCheck(id11577)->
                                               FMGL(raw))->__apply(((x10_int)1));
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret125590_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(id11577)->
                                                FMGL(region)->contains(
                                                ((x10_int)1))))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      ((x10_int)1));
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret125589 = (x10aux::nullCheck(id11577)->
                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(id11577)->
                                                                                                   FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret125590_end_;
                            }
                            
                        }goto __ret125590_end_; __ret125590_end_: ;
                        }
                        ret125589;
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
                            x10::lang::CheckedThrowable* throwable126341 =
                              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                            
                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                                try {
                                    {
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i86313min126161 =
                                          ((x10_long) (((x10_int)0)));
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i86313max126162 =
                                          ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                        {
                                            x10_long i126163;
                                            for (
                                                 //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                 i126163 =
                                                   i86313min126161;
                                                 ((i126163) <= (i86313max126162));
                                                 
                                                 //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                                 i126163 =
                                                   ((x10_long) ((i126163) + (((x10_long)1ll)))))
                                            {
                                                
                                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i126164 =
                                                  i126163;
                                                
                                                //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i_start126156 =
                                                  ((x10_long) ((range->
                                                                  FMGL(min)) + (((x10_long) ((i126164) * (chunk_size))))));
                                                
                                                //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::LongRange i_range126157 =
                                                  x10::lang::LongRange::_make(i_start126156, (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a126158 =
                                                      range->
                                                        FMGL(max);
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b126159 =
                                                      ((x10_long) ((((x10_long) ((i_start126156) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                    ((a126158) < (b126159))
                                                      ? (a126158)
                                                      : (b126159);
                                                }))
                                                );
                                                
                                                //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                                x10::lang::Runtime::runAsync(
                                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__24<TPMGL(T)>)))org_scalegraph_util_Remote__closure__24<TPMGL(T)>(scatterGather, i126164, i_range126157, f))));
                                            }
                                        }
                                        
                                    }
                                }
                                catch (x10::lang::CheckedThrowable* __exc1436) {
                                    if (true) {
                                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                          static_cast<x10::lang::CheckedThrowable*>(__exc1436);
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
                            catch (x10::lang::CheckedThrowable* __exc1437) {
                                if (true) {
                                    x10::lang::CheckedThrowable* formal126342 =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1437);
                                    {
                                        
                                        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                        throwable126341 =
                                          formal126342;
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable126341)))
                            {
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (x10aux::instanceof<x10::compiler::Abort*>(throwable126341))
                                {
                                    
                                    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable126341));
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
                                                        throwable126341)))
                            {
                                
                                //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126341)))
                                {
                                    
                                    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable126341));
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
                            x10::lang::CheckedThrowable* throwable126344 =
                              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                            
                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                            try {
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Try_c
                                try {
                                    {
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i86350min126194 =
                                          ((x10_long) (((x10_int)0)));
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                        x10_long i86350max126195 =
                                          ((x10_long) ((nthreads) - (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.For_c
                                        {
                                            x10_long i126196;
                                            for (
                                                 //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                 i126196 =
                                                   i86350min126194;
                                                 ((i126196) <= (i86350max126195));
                                                 
                                                 //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                                 i126196 =
                                                   ((x10_long) ((i126196) + (((x10_long)1ll)))))
                                            {
                                                
                                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i126197 =
                                                  i126196;
                                                
                                                //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10_long i_start126189 =
                                                  ((x10_long) ((range->
                                                                  FMGL(min)) + (((x10_long) ((i126197) * (chunk_size))))));
                                                
                                                //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::LongRange i_range126190 =
                                                  x10::lang::LongRange::_make(i_start126189, (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a126191 =
                                                      range->
                                                        FMGL(max);
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b126192 =
                                                      ((x10_long) ((((x10_long) ((i_start126189) + (chunk_size)))) - (((x10_long) (((x10_int)1))))));
                                                    ((a126191) < (b126192))
                                                      ? (a126191)
                                                      : (b126192);
                                                }))
                                                );
                                                
                                                //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
                                                x10::lang::Runtime::runAsync(
                                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__26<TPMGL(T)>)))org_scalegraph_util_Remote__closure__26<TPMGL(T)>(scatterGather, i126197, i_range126190, f, reqVal, reqIdx))));
                                            }
                                        }
                                        
                                    }
                                }
                                catch (x10::lang::CheckedThrowable* __exc1439) {
                                    if (true) {
                                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                          static_cast<x10::lang::CheckedThrowable*>(__exc1439);
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
                            catch (x10::lang::CheckedThrowable* __exc1440) {
                                if (true) {
                                    x10::lang::CheckedThrowable* formal126345 =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1440);
                                    {
                                        
                                        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10LocalAssign_c
                                        throwable126344 =
                                          formal126345;
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable126344)))
                            {
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (x10aux::instanceof<x10::compiler::Abort*>(throwable126344))
                                {
                                    
                                    //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable126344));
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
                                                        throwable126344)))
                            {
                                
                                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
                                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126344)))
                                {
                                    
                                    //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable126344));
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
                    x10::lang::LongRange range126223 = (__extension__ ({
                        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((recvVal->
                                                                                     FMGL(data)->
                                                                                     FMGL(size)) - (((x10_long)1ll)))));
                    }))
                    ;
                    
                    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long size126219 = ((x10_long) ((((x10_long) ((range126223->
                                                                        FMGL(max)) - (range126223->
                                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int nthreads126220 = x10::lang::Runtime::
                                               FMGL(NTHREADS__get)();
                    
                    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long chunk_size126221 = (__extension__ ({
                        
                        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                        x10_long a126222 = ((x10_long) ((((x10_long) ((((x10_long) ((size126219) + (((x10_long) (nthreads126220)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads126220)))));
                        
                        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                        ;
                        ((a126222) < (((x10_long)1ll))) ? (((x10_long)1ll))
                          : (a126222);
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
                            x10::lang::CheckedThrowable* throwable126347 =
                              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                            try {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                                try {
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i72665max126216 =
                                          ((x10_int) ((nthreads126220) - (((x10_int)1))));
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                        {
                                            x10_int i126217;
                                            for (
                                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                 i126217 =
                                                   ((x10_int)0);
                                                 ((i126217) <= (i72665max126216));
                                                 
                                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                                 i126217 =
                                                   ((x10_int) ((i126217) + (((x10_int)1)))))
                                            {
                                                
                                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10_int i126218 =
                                                  i126217;
                                                
                                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10_int idx126209 =
                                                  i126218;
                                                
                                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10_long i_start126210 =
                                                  (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a126211 =
                                                      ((x10_long) ((range126223->
                                                                      FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b126212 =
                                                      ((x10_long) ((range126223->
                                                                      FMGL(min)) + (((x10_long) ((((x10_long) (i126218))) * (chunk_size126221))))));
                                                    ((a126211) < (b126212))
                                                      ? (a126211)
                                                      : (b126212);
                                                }))
                                                ;
                                                
                                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::LongRange i_range126213 =
                                                  x10::lang::LongRange::_make(i_start126210, (__extension__ ({
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long a126214 =
                                                      range126223->
                                                        FMGL(max);
                                                    
                                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                                    x10_long b126215 =
                                                      ((x10_long) ((((x10_long) ((i_start126210) + (chunk_size126221)))) - (((x10_long) (((x10_int)1))))));
                                                    ((a126214) < (b126215))
                                                      ? (a126214)
                                                      : (b126215);
                                                }))
                                                );
                                                
                                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                                x10::lang::Runtime::runAsync(
                                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Remote__closure__28<TPMGL(T)>)))org_scalegraph_util_Remote__closure__28<TPMGL(T)>(idx126209, i_range126213, setter, recvIdx, recvVal))));
                                            }
                                        }
                                        
                                    }
                                }
                                catch (x10::lang::CheckedThrowable* __exc1442) {
                                    if (true) {
                                        x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                          static_cast<x10::lang::CheckedThrowable*>(__exc1442);
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
                            catch (x10::lang::CheckedThrowable* __exc1443) {
                                if (true) {
                                    x10::lang::CheckedThrowable* formal126348 =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc1443);
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                        throwable126347 =
                                          formal126348;
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(X10_NULL,
                                                        throwable126347)))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                                if (x10aux::instanceof<x10::compiler::Abort*>(throwable126347))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable126347));
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
                                                        throwable126347)))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable126347)))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable126347));
                                }
                                
                            }
                            
                        }
                    }
                    }
                    #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_put_1434
                    #endif // ORG_SCALEGRAPH_UTIL_REMOTE_H_GENERICS
                    #endif // __ORG_SCALEGRAPH_UTIL_REMOTE_H_NODEPS

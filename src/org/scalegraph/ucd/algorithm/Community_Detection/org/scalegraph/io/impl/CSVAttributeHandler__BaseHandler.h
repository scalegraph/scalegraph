#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_NODEPS
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>
#undef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
class SStringBuilder;
} } } 
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
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

template<class TPMGL(T)> class CSVAttributeHandler__BaseHandler;
template <> class CSVAttributeHandler__BaseHandler<void>;
template<class TPMGL(T)> class CSVAttributeHandler__BaseHandler : public org::scalegraph::io::impl::CSVAttributeHandler
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_int typeId, x10_boolean doubleQuoated);
    
    static org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>* _make(
             x10_int typeId, x10_boolean doubleQuoated);
    
    virtual x10_boolean isSkip();
    virtual x10_long localSizeOf(x10::lang::Any* any);
    virtual x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*
      makeStringClosure(x10::lang::Any* any);
    virtual x10::lang::Any* createBlockGrowableMemory();
    virtual x10::lang::Any* mergeResult(x10::util::Team* team,
                                        x10_int nthreads,
                                        x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize,
                                        x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer);
    virtual void print(x10::util::Team* team, x10::lang::Any* any);
    virtual org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>*
      org__scalegraph__io__impl__CSVAttributeHandler__BaseHandler____this__org__scalegraph__io__impl__CSVAttributeHandler__BaseHandler(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::CSVAttributeHandler>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.io.impl.CSVAttributeHandler.BaseHandler";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class CSVAttributeHandler__BaseHandler<void> : public org::scalegraph::io::impl::CSVAttributeHandler
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
template<class TPMGL(T)> class CSVAttributeHandler__BaseHandler;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_NODEPS
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/SStringBuilder.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/util/Team.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Runtime.h>
#include <x10/array/Array.h>
#include <x10/lang/Place.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/array/Region.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime__Profile.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_GENERICS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_IMPLEMENTATION
#include <org/scalegraph/io/impl/CSVAttributeHandler__BaseHandler.h>

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::template itable <org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::util::SStringBuilder sb, x10_long idx) {
        
        //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::StringBuilderAdd_(sb,(__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index133465 = idx;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) ret133466;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((mc->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index133465) < (((x10_long) (((x10_int)0))))) || ((index133465) >= (mc->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133465), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret133466 = (mc->FMGL(data))[index133465];
            ret133466;
        }))
        );
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> mc;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->mc);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_mc = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >(that_mc);
        return this_;
    }
    
    org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2(org::scalegraph::util::MemoryChunk<TPMGL(T)> mc) : mc(mc) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10:132";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::template itable <org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) > >org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >::__apply, &org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >, &org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Try_c
        try {
            
            //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->print(x10::lang::String::__plus(dmc->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply(), x10aux::makeStringLit(" ")));
        }
        catch (x10::lang::CheckedThrowable* __exc1565) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast<x10::lang::CheckedThrowable*>(__exc1565);
                {
                    
                    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::wrapAtChecked(reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__0__));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dmc;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->dmc);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_dmc = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >(that_dmc);
        return this_;
    }
    
    org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dmc) : dmc(dmc) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10:146-148";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) > >org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >::__apply, &org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER__CLOSURE__3_CLOSURE

//#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_constructor(
                           x10_int typeId, x10_boolean doubleQuoated) {
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::CSVAttributeHandler* this133645 = this;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_int typeId133646 = typeId;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_boolean doubleQuoated133647 = doubleQuoated;
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this133645)->FMGL(typeId) = typeId133646;
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this133645)->FMGL(doubleQuoated) = doubleQuoated133647;
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.AssignPropertyCall_c
    
}
template<class TPMGL(T)> org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>* org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_make(
                           x10_int typeId, x10_boolean doubleQuoated)
{
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>))) org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>();
    this_->_constructor(typeId, doubleQuoated);
    return this_;
}



//#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::isSkip(
  ) {
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::localSizeOf(
  x10::lang::Any* any) {
    
    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dmc =
      x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(any);
    
    //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> this133464 =
          dmc->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
        this133464->FMGL(data)->FMGL(size);
    }))
    ;
    
}

//#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*
  org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::makeStringClosure(
  x10::lang::Any* any) {
    
    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dmc =
      x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(any);
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> mc = dmc->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
    
    //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(sizeof(org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T)>)))org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__2<TPMGL(T)>(mc)));
    
}

//#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::Any* org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::createBlockGrowableMemory(
  ) {
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::Any*>((__extension__ ({
        
        //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(T)>* alloc132150 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc132150)->::org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
          ((x10_long)0ll));
        alloc132150;
    }))
    );
    
}

//#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::Any* org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::mergeResult(
  x10::util::Team* team, x10_int nthreads, x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize,
  x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer) {
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return org::scalegraph::io::impl::CSVAttributeHandler::template mergeResultHelper<TPMGL(T) >(
             team, nthreads, getChunkSize, getBuffer);
    
}

//#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::print(
  x10::util::Team* team, x10::lang::Any* any) {
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dmc =
      x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(any);
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (x10aux::nullCheck(team)->size()));
             
             //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
             i = ((x10_int) ((i) + (((x10_int)1))))) {
            {
                
                //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::runAt((__extension__ ({
                                              
                                              //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                                              x10::array::Array<x10::lang::Place>* this133470 =
                                                x10aux::nullCheck(team)->places();
                                              
                                              //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10_int i133469 =
                                                i;
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10::lang::Place ret133471;
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                              goto __ret133472; __ret133472: {
                                              {
                                                  
                                                  //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                  if (x10aux::nullCheck(this133470)->
                                                        FMGL(rail))
                                                  {
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret133471 =
                                                        (x10aux::nullCheck(this133470)->
                                                           FMGL(raw))->__apply(i133469);
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret133472_end_;
                                                  } else {
                                                      
                                                      //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (true &&
                                                          !(x10aux::nullCheck(this133470)->
                                                              FMGL(region)->contains(
                                                              i133469)))
                                                      {
                                                          
                                                          //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                          x10::array::Array<void>::raiseBoundsError(
                                                            i133469);
                                                      }
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret133471 =
                                                        (x10aux::nullCheck(this133470)->
                                                           FMGL(raw))->__apply(((x10_int) ((i133469) - (x10aux::nullCheck(this133470)->
                                                                                                          FMGL(layout_min0)))));
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret133472_end_;
                                                  }
                                                  
                                              }goto __ret133472_end_; __ret133472_end_: ;
                                              }
                                              ret133471;
                                              }))
                                              , reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T)>)))org_scalegraph_io_impl_CSVAttributeHandler__BaseHandler__closure__3<TPMGL(T)>(dmc))),
                                              x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
                }
            }
        }
        
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("")));
    }
    

//#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>*
  org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::org__scalegraph__io__impl__CSVAttributeHandler__BaseHandler____this__org__scalegraph__io__impl__CSVAttributeHandler__BaseHandler(
  ) {
    
    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return this;
    
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler::_serialize_body(buf);
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>))) org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler::_deserialize_body(buf);
    
}

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_NODEPS

#ifndef __ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H
#define __ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_TUPLE_TUPLE2_H_NODEPS
#include <org/scalegraph/util/tuple/Tuple2.h>
#undef ORG_SCALEGRAPH_UTIL_TUPLE_TUPLE2_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
namespace org { namespace scalegraph { namespace id { 
class ProfilingID__XPregel;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class GraphEdge;
} } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(E)> class EdgeProvider;
template <> class EdgeProvider<void>;
template<class TPMGL(E)> class EdgeProvider : public x10::lang::X10Class 
 {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >*
      FMGL(mDiffOffset);
    
    org::scalegraph::util::GrowableMemory<x10_long>* FMGL(mDiffVertex);
    
    org::scalegraph::util::GrowableMemory<TPMGL(E)>* FMGL(mDiffValue);
    
    x10_boolean FMGL(mEdgeChanged);
    
    x10_long FMGL(mDiffStartOffset);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mOutOffset);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mOutVertex);
    
    org::scalegraph::util::MemoryChunk<TPMGL(E)> FMGL(mOutValue);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mInOffset);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mInVertex);
    
    org::scalegraph::util::MemoryChunk<TPMGL(E)> FMGL(mInValue);
    
    void _constructor(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                      org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge);
    
    static org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* _make(
             org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
             org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge);
    
    virtual void fixModifiedEdges(x10_long srcid);
    virtual org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
      outEdges(x10_long srcid);
    virtual org::scalegraph::util::MemoryChunk<x10_long> outEdgesId(
      x10_long srcid);
    virtual org::scalegraph::util::MemoryChunk<TPMGL(E)> outEdgesValue(
      x10_long srcid);
    virtual org::scalegraph::util::MemoryChunk<x10_long> inEdgesId(
      x10_long srcid);
    virtual org::scalegraph::util::MemoryChunk<TPMGL(E)> inEdgesValue(
      x10_long srcid);
    virtual void setOutEdges(org::scalegraph::util::MemoryChunk<x10_long> id,
                             org::scalegraph::util::MemoryChunk<TPMGL(E)> value);
    virtual void clearOutEdges();
    virtual void addOutEdge(x10_long id, TPMGL(E) value);
    virtual void addOutEdges(org::scalegraph::util::MemoryChunk<x10_long> id,
                             org::scalegraph::util::MemoryChunk<TPMGL(E)> value);
    virtual org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*
      org__scalegraph__xpregel__EdgeProvider____this__org__scalegraph__xpregel__EdgeProvider(
      );
    virtual void __fieldInitializers61817();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(E)> x10aux::RuntimeType org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::rtt;
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::EdgeProvider<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(E)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.EdgeProvider";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class EdgeProvider<void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(E)> static void updateOutEdge(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                                                       org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list,
                                                       org::scalegraph::graph::id::IdStruct ids);
    
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class EdgeProvider;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_NODEPS
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/id/ProfilingID__XPregel.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/xpregel/GraphEdge.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Int.h>
#include <x10/lang/Runtime.h>
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_GENERICS
#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/EdgeProvider.h>

#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e = list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                tid);
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long diffIndex = ((x10_long)0ll);
        
        //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long numEdges = ((x10_long)0ll);
        
        //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(x10aux::nullCheck(e)->FMGL(mDiffOffset))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::add(
          org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::_make(((x10_long)-1ll),
                                                                          x10aux::nullCheck(x10aux::nullCheck(e)->
                                                                                              FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::size()));
        
        //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> > diffOffset =
          x10aux::nullCheck(x10aux::nullCheck(e)->FMGL(mDiffOffset))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::raw();
        
        //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i62068domain62139 = r;
        
        //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i62068min62140 = i62068domain62139->FMGL(min);
        
        //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i62068max62141 = i62068domain62139->FMGL(max);
        
        //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i62142;
            for (
                 //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i62142 = i62068min62140; ((i62142) <= (i62068max62141));
                 
                 //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i62142 = ((x10_long) ((i62142) + (((x10_long)1ll)))))
            {
                
                //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid62143 = i62142;
                
                //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(diffOffset->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::__apply(
                                             diffIndex)->org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::get1(),
                                           srcid62143))) {
                    
                    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    numEdges = ((x10_long) ((numEdges) + (((x10_long) ((diffOffset->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::__apply(
                                                                          ((x10_long) ((diffIndex) + (((x10_long) (((x10_int)1)))))))->org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::get2()) - (diffOffset->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::__apply(
                                                                                                                                                                                                              diffIndex)->org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::get2()))))));
                    
                    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    diffIndex = ((x10_long) ((diffIndex) + (((x10_long)1ll))));
                } else {
                    
                    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    numEdges = ((x10_long) ((numEdges) + (((x10_long) ((outOffset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                          ((x10_long) ((srcid62143) + (((x10_long) (((x10_int)1)))))))) - (outOffset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                                             srcid62143)))))));
                }
                
            }
        }
        
        //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__set(
          ((x10_long) ((tid) + (((x10_long) (((x10_int)1)))))),
          numEdges);
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10_long> outOffset;
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->list);
        buf.write(this->outOffset);
        buf.write(this->offsetPerThread);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_outOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >(that_list, that_outOffset, that_offsetPerThread);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__1(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10_long> outOffset, org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread) : list(list), outOffset(outOffset), offsetPerThread(offsetPerThread) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:65-82";
    }

};

template<class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e = list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                tid);
        
        //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long diffIndex = ((x10_long) (((x10_int)0)));
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long offset = offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                            tid);
        
        //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> > diffOffset =
          x10aux::nullCheck(x10aux::nullCheck(e)->FMGL(mDiffOffset))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::raw();
        
        //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> diffVertex =
          x10aux::nullCheck(x10aux::nullCheck(e)->FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::raw();
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(E)> diffValue =
          x10aux::nullCheck(x10aux::nullCheck(e)->FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::raw();
        
        //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> outVertex =
          x10aux::nullCheck(e)->FMGL(mOutVertex);
        
        //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(E)> outValue =
          x10aux::nullCheck(e)->FMGL(mOutValue);
        
        //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i62101domain62153 = r;
        
        //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i62101min62154 = i62101domain62153->FMGL(min);
        
        //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i62101max62155 = i62101domain62153->FMGL(max);
        
        //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i62156;
            for (
                 //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i62156 = i62101min62154; ((i62156) <= (i62101max62155));
                 
                 //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i62156 = ((x10_long) ((i62156) + (((x10_long)1ll)))))
            {
                
                //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid62157 = i62156;
                
                //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(e)->
                                                               FMGL(mDiffOffset))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::__apply(
                                             diffIndex)->org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::get1(),
                                           srcid62157))) {
                    
                    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    x10_long start62149 = diffOffset->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::__apply(
                                            diffIndex)->org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::get2();
                    
                    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    x10_long length62150 = ((x10_long) ((diffOffset->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::__apply(
                                                           ((x10_long) ((diffIndex) + (((x10_long) (((x10_int)1)))))))->org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::get2()) - (start62149)));
                    
                    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::MemoryChunk<void>::template copy<x10_long >(
                      diffVertex, start62149, newVertex, offset,
                      length62150);
                    
                    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(E) >(
                      diffValue, start62149, newValue, offset,
                      length62150);
                    
                    //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    offset = ((x10_long) ((offset) + (length62150)));
                    
                    //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    diffIndex = ((x10_long) ((diffIndex) + (((x10_long)1ll))));
                } else {
                    
                    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    x10_long start62151 = outOffset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                            srcid62157);
                    
                    //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    x10_long length62152 = ((x10_long) ((outOffset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                           ((x10_long) ((srcid62157) + (((x10_long) (((x10_int)1)))))))) - (start62151)));
                    
                    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::MemoryChunk<void>::template copy<x10_long >(
                      outVertex, start62151, newVertex, offset,
                      length62152);
                    
                    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(E) >(
                      outValue, start62151, newValue, offset,
                      length62152);
                    
                    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    offset = ((x10_long) ((offset) + (length62152)));
                }
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                newOffset->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  ((x10_long) ((srcid62157) + (((x10_long) (((x10_int)1)))))),
                  offset);
            }
        }
        
        //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mOutOffset) = newOffset;
        
        //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mOutVertex) = newVertex;
        
        //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mOutValue) = newValue;
        
        //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Assert_c
        #ifndef NO_ASSERTIONS
        if (x10aux::x10__assertions_enabled)
            x10aux::x10__assert((x10aux::struct_equals(newOffset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                         ((x10_long) ((r->
                                                                         FMGL(max)) + (((x10_long) (((x10_int)1))))))),
                                                       offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                         ((x10_long) ((tid) + (((x10_long) (((x10_int)1))))))))));
        #endif//NO_ASSERTIONS
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    org::scalegraph::util::MemoryChunk<x10_long> newVertex;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue;
    org::scalegraph::util::MemoryChunk<x10_long> outOffset;
    org::scalegraph::util::MemoryChunk<x10_long> newOffset;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->list);
        buf.write(this->offsetPerThread);
        buf.write(this->newVertex);
        buf.write(this->newValue);
        buf.write(this->outOffset);
        buf.write(this->newOffset);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newVertex = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_newValue = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_outOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >(that_list, that_offsetPerThread, that_newVertex, that_newValue, that_outOffset, that_newOffset);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__2(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread, org::scalegraph::util::MemoryChunk<x10_long> newVertex, org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue, org::scalegraph::util::MemoryChunk<x10_long> outOffset, org::scalegraph::util::MemoryChunk<x10_long> newOffset) : list(list), offsetPerThread(offsetPerThread), newVertex(newVertex), newValue(newValue), outOffset(outOffset), newOffset(newOffset) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:95-131";
    }

};

template<class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__2_CLOSURE
 /* private static type XP = org.scalegraph.id.ProfilingID$XPregel; */ 

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_constructor(
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge) {
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Empty_c
    ;
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.AssignPropertyCall_c
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::__fieldInitializers61817();
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutOffset) = x10aux::nullCheck(outEdge)->
                               FMGL(offsets);
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutVertex) = x10aux::nullCheck(outEdge)->
                               FMGL(vertexes);
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutValue) = x10aux::nullCheck(outEdge)->FMGL(value);
    
    //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInOffset) = x10aux::nullCheck(inEdge)->FMGL(offsets);
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInVertex) = x10aux::nullCheck(inEdge)->FMGL(vertexes);
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInValue) = x10aux::nullCheck(inEdge)->FMGL(value);
}
template<class TPMGL(E)> org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_make(
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge)
{
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>))) org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>();
    this_->_constructor(outEdge, inEdge);
    return this_;
}



//#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c

//#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::fixModifiedEdges(
  x10_long srcid) {
    
    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(this->
                                                     FMGL(mEdgeChanged),
                                                   true)));
    #endif//NO_ASSERTIONS
    
    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffOffset))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::add(
      org::scalegraph::util::tuple::Tuple2<x10_long, x10_long>::_make(srcid,
                                                                      this->
                                                                        FMGL(mDiffStartOffset)));
    
    //#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDiffStartOffset) = x10aux::nullCheck(this->
                                                       FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::size();
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = false;
}

//#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::outEdges(
  x10_long srcid) {
    
    //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
    if (this->FMGL(mEdgeChanged)) {
        
        //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long start = this->FMGL(mDiffStartOffset);
        
        //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long length = ((x10_long) ((x10aux::nullCheck(this->
                                                            FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::size()) - (start)));
        
        //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >::_make(x10aux::nullCheck(this->
                                                                                                                                                                            FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::raw()->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                                                                                                                          start,
                                                                                                                                                          length),
                                                                                                                                                        x10aux::nullCheck(this->
                                                                                                                                                                            FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::raw()->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                                                                                                                                                          start,
                                                                                                                                                          length));
        
    } else {
        
        //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long start = this->FMGL(mOutOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                           srcid);
        
        //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long length = ((x10_long) ((this->FMGL(mOutOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                          ((x10_long) ((srcid) + (((x10_long) (((x10_int)1)))))))) - (start)));
        
        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >::_make(this->
                                                                                                                                                          FMGL(mOutVertex)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                                                                                                                          start,
                                                                                                                                                          length),
                                                                                                                                                        this->
                                                                                                                                                          FMGL(mOutValue)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                                                                                                                                                          start,
                                                                                                                                                          length));
        
    }
    
}

//#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::outEdgesId(
  x10_long srcid) {
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
    if (this->FMGL(mEdgeChanged)) {
        
        //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long start = this->FMGL(mDiffStartOffset);
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long length = ((x10_long) ((x10aux::nullCheck(this->
                                                            FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::size()) - (start)));
        
        //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(this->FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::raw()->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                 start, length);
        
    } else {
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long start = this->FMGL(mOutOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                           srcid);
        
        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long length = ((x10_long) ((this->FMGL(mOutOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                          ((x10_long) ((srcid) + (((x10_long) (((x10_int)1)))))))) - (start)));
        
        //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return this->FMGL(mOutVertex)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                 start, length);
        
    }
    
}

//#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<TPMGL(E)>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::outEdgesValue(
  x10_long srcid) {
    
    //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
    if (this->FMGL(mEdgeChanged)) {
        
        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long start = this->FMGL(mDiffStartOffset);
        
        //#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long length = ((x10_long) ((x10aux::nullCheck(this->
                                                            FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::size()) - (start)));
        
        //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(this->FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::raw()->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                 start, length);
        
    } else {
        
        //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long start = this->FMGL(mOutOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                           srcid);
        
        //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long length = ((x10_long) ((this->FMGL(mOutOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                          ((x10_long) ((srcid) + (((x10_long) (((x10_int)1)))))))) - (start)));
        
        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return this->FMGL(mOutValue)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                 start, length);
        
    }
    
}

//#line 200 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::inEdgesId(
  x10_long srcid) {
    
    //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long start = this->FMGL(mInOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                       srcid);
    
    //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) ((this->FMGL(mInOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      ((x10_long) ((srcid) + (((x10_long) (((x10_int)1)))))))) - (start)));
    
    //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return this->FMGL(mInVertex)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             start, length);
    
}

//#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<TPMGL(E)>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::inEdgesValue(
  x10_long srcid) {
    
    //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long start = this->FMGL(mInOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                       srcid);
    
    //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) ((this->FMGL(mInOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      ((x10_long) ((srcid) + (((x10_long) (((x10_int)1)))))))) - (start)));
    
    //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return this->FMGL(mInValue)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
             start, length);
    
}

//#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::setOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::setSize(
      this->FMGL(mDiffStartOffset));
    
    //#line 215 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::setSize(
      this->FMGL(mDiffStartOffset));
    
    //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::add(
      id);
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::add(
      value);
    
    //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::clearOutEdges(
  ) {
    
    //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::setSize(
      this->FMGL(mDiffStartOffset));
    
    //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::setSize(
      this->FMGL(mDiffStartOffset));
    
    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::addOutEdge(
  x10_long id, TPMGL(E) value) {
    
    //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::add(
      id);
    
    //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::add(
      value);
    
    //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::addOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::add(
      id);
    
    //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::add(
      value);
    
    //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::org__scalegraph__xpregel__EdgeProvider____this__org__scalegraph__xpregel__EdgeProvider(
  ) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::__fieldInitializers61817(
  ) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDiffOffset) = org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::_make();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDiffVertex) = org::scalegraph::util::GrowableMemory<x10_long>::_make();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDiffValue) = org::scalegraph::util::GrowableMemory<TPMGL(E)>::_make();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = false;
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDiffStartOffset) = ((x10_long) (((x10_int)0)));
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutOffset) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutVertex) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutValue) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInOffset) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInVertex) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInValue) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
}
template<class TPMGL(E)> const x10aux::serialization_id_t org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mDiffOffset));
    buf.write(this->FMGL(mDiffVertex));
    buf.write(this->FMGL(mDiffValue));
    buf.write(this->FMGL(mEdgeChanged));
    buf.write(this->FMGL(mDiffStartOffset));
    buf.write(this->FMGL(mOutOffset));
    buf.write(this->FMGL(mOutVertex));
    buf.write(this->FMGL(mOutValue));
    buf.write(this->FMGL(mInOffset));
    buf.write(this->FMGL(mInVertex));
    buf.write(this->FMGL(mInValue));
    
}

template<class TPMGL(E)> x10::lang::Reference* org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>))) org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mDiffOffset) = buf.read<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >*>();
    FMGL(mDiffVertex) = buf.read<org::scalegraph::util::GrowableMemory<x10_long>*>();
    FMGL(mDiffValue) = buf.read<org::scalegraph::util::GrowableMemory<TPMGL(E)>*>();
    FMGL(mEdgeChanged) = buf.read<x10_boolean>();
    FMGL(mDiffStartOffset) = buf.read<x10_long>();
    FMGL(mOutOffset) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mOutVertex) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mOutValue) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
    FMGL(mInOffset) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mInVertex) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mInValue) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
}

template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<void>::updateOutEdge(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                                                                                          org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list,
                                                                                          org::scalegraph::graph::id::IdStruct ids)
{
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_boolean changed = false;
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i62051domain62159 = list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::range();
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i62051min62160 = i62051domain62159->FMGL(min);
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i62051max62161 = i62051domain62159->FMGL(max);
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i62162;
        for (
             //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i62162 = i62051min62160; ((i62162) <= (i62051max62161));
             
             //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i62162 = ((x10_long) ((i62162) + (((x10_long)1ll)))))
        {
            
            //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i62163 = i62162;
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
            if (((x10aux::nullCheck(x10aux::nullCheck(list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                        i62163))->
                                      FMGL(mDiffOffset))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::size()) > (((x10_long) (((x10_int)0))))))
            {
                
                //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                changed = true;
                
                //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Branch_c
                break;
            }
            
        }
    }
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
    if (!(changed)) {
        
        //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long numVertexes = ids->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes();
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((numThreads) + (((x10_int)1)))))), ((x10_int)0), false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      ((x10_int)0), ((x10_long)0ll));
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> outOffset =
      x10aux::nullCheck(outEdge)->FMGL(offsets);
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E)>(list, outOffset, offsetPerThread))));
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int i62085min62164 = ((x10_int)0);
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int i62085max62165 = ((x10_int) ((numThreads) - (((x10_int)1))));
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_int i62166;
        for (
             //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i62166 = i62085min62164; ((i62166) <= (i62085max62165));
             
             //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i62166 = ((x10_int) ((i62166) + (((x10_int)1)))))
        {
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int i62167 = i62166;
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x62145 =
              offsetPerThread;
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int y62146 = ((x10_int) ((i62167) + (((x10_int)1))));
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long z62147 = offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                i62167);
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long ret62148;
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long r62144 = ((x10_long) ((x62145->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                              y62146)) + (z62147)));
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
            x62145->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              y62146, r62144);
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
            ret62148 = r62144;
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
            ret62148;
        }
    }
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long newNumEdges = offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                             numThreads);
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newOffset =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((numVertexes) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newVertex =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(newNumEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue =
      org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make(newNumEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    newOffset->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      ((x10_int)0), ((x10_long)0ll));
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(E)>(list, offsetPerThread, newVertex, newValue, outOffset, newOffset))));
    
    //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(outEdge)->FMGL(offsets) = newOffset;
    
    //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(outEdge)->FMGL(vertexes) = newVertex;
    
    //#line 136 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(outEdge)->FMGL(value) = newValue;
    
    //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int i62118min62168 = ((x10_int)0);
    
    //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int i62118max62169 = ((x10_int) ((numThreads) - (((x10_int)1))));
    
    //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_int i62170;
        for (
             //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i62170 = i62118min62168; ((i62170) <= (i62118max62169));
             
             //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i62170 = ((x10_int) ((i62170) + (((x10_int)1)))))
        {
            
            //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int tid62171 = i62170;
            
            //#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e62158 =
              list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                tid62171);
            
            //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(x10aux::nullCheck(e62158)->
                                FMGL(mDiffOffset))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> >::clear();
            
            //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(x10aux::nullCheck(e62158)->
                                FMGL(mDiffVertex))->org::scalegraph::util::GrowableMemory<x10_long>::clear();
            
            //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(x10aux::nullCheck(e62158)->
                                FMGL(mDiffValue))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::clear();
            
            //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(e62158)->FMGL(mDiffStartOffset) =
              ((x10_long)0ll);
            
            //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(e62158)->FMGL(mEdgeChanged) =
              false;
        }
    }
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_NODEPS

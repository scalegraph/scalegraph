#ifndef __ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H
#define __ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
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
#define ORG_SCALEGRAPH_UTIL_TUPLE_TUPLE2_H_NODEPS
#include <org/scalegraph/util/tuple/Tuple2.h>
#undef ORG_SCALEGRAPH_UTIL_TUPLE_TUPLE2_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace id { 
class ProfilingID__XPregel;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class GraphEdge;
} } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class IntRange;
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
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace x10 { namespace lang { 
class LongRange;
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
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB__Timer;
} } } 
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB;
} } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
class Algorithm;
} } } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace org { namespace scalegraph { namespace util { 
class Utils;
} } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
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
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mOutOffset);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mOutVertex);
    
    org::scalegraph::util::MemoryChunk<TPMGL(E)> FMGL(mOutValue);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mInOffset);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mInVertex);
    
    org::scalegraph::util::MemoryChunk<TPMGL(E)> FMGL(mInValue);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(mEdgeModifyReqOffset);
    
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*
      FMGL(mEdgeModifyReqWithAR);
    
    org::scalegraph::util::GrowableMemory<x10_long>* FMGL(mGetEdgeBuf);
    
    org::scalegraph::util::GrowableMemory<TPMGL(E)>* FMGL(mGetValBuf);
    
    x10_boolean FMGL(mEdgeChanged);
    
    x10_long FMGL(mStartSrcid);
    
    void _constructor();
    
    static org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* _make(
             );
    
    void _constructor(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                      org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge,
                      org::scalegraph::util::MemoryChunk<x10_long> reqOff,
                      org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
                      x10_long startSrcid);
    
    static org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* _make(
             org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
             org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge,
             org::scalegraph::util::MemoryChunk<x10_long> reqOff,
             org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
             x10_long startSrcid);
    
    virtual void updateOutEdge_temp(org::scalegraph::util::MemoryChunk<x10_long> newEdge,
                                    org::scalegraph::util::MemoryChunk<TPMGL(E)> newVal,
                                    org::scalegraph::util::MemoryChunk<x10_long> oldEdge,
                                    org::scalegraph::util::MemoryChunk<TPMGL(E)> oldVal,
                                    x10_long srcid);
    virtual x10_long calcEdgeNumDifferential(x10_long srcid);
    virtual void optimizeReqEdge(x10::lang::LongRange srcid);
    virtual void optimizeReqEdge(x10_long srcid);
    x10_long optimizeReqEdge(x10_long srcid, x10_long modDiffReqStartSavingOffset,
                             x10_boolean reduceBottom);
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
    virtual void setOutEdges(x10_long srcid, org::scalegraph::util::MemoryChunk<x10_long> id,
                             org::scalegraph::util::MemoryChunk<TPMGL(E)> value);
    virtual void clearOutEdges(x10_long srcid);
    virtual void removeOutEdge(x10_long id);
    virtual void removeOutEdges(org::scalegraph::util::MemoryChunk<x10_long> id);
    virtual void addOutEdge(x10_long id, TPMGL(E) value);
    virtual void addOutEdges(org::scalegraph::util::MemoryChunk<x10_long> id,
                             org::scalegraph::util::MemoryChunk<TPMGL(E)> value);
    virtual void fixModifiedEdges(x10_long srcid);
    virtual org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*
      org__scalegraph__xpregel__EdgeProvider____this__org__scalegraph__xpregel__EdgeProvider(
      );
    virtual void __fieldInitializers76853();
    
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
    static x10_int FMGL(reqshift);
    
    static x10_long FMGL(req_RMV);
    
    static x10_long FMGL(req_ADD);
    
    static x10_long FMGL(req_MOD);
    
    static x10_long FMGL(req_INFO);
    
    static x10_long FMGL(req_NOINFO);
    
    template<class TPMGL(E)> static void reInitializeEdgeProvider(
      org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list);
    
    template<class TPMGL(V), class TPMGL(E)> static void updateOutEdge(
      org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
      org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list,
      org::scalegraph::graph::id::IdStruct ids);
    
    static x10_int ARM(x10_long l);
    
    template<class TPMGL(V), class TPMGL(E)> static void updateInEdge(
      org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge,
      org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list,
      org::scalegraph::graph::id::IdStruct ids, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > reqOffs,
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> reqs);
    
    static void FMGL(reqshift__do_init)();
    static void FMGL(reqshift__init)();
    static volatile x10aux::StaticInitController::status FMGL(reqshift__status);
    static x10::lang::CheckedThrowable* FMGL(reqshift__exception);
    static x10_int FMGL(reqshift__get)();
    static void FMGL(req_RMV__do_init)();
    static void FMGL(req_RMV__init)();
    static volatile x10aux::StaticInitController::status FMGL(req_RMV__status);
    static x10::lang::CheckedThrowable* FMGL(req_RMV__exception);
    static x10_long FMGL(req_RMV__get)();
    static void FMGL(req_ADD__do_init)();
    static void FMGL(req_ADD__init)();
    static volatile x10aux::StaticInitController::status FMGL(req_ADD__status);
    static x10::lang::CheckedThrowable* FMGL(req_ADD__exception);
    static x10_long FMGL(req_ADD__get)();
    static void FMGL(req_MOD__do_init)();
    static void FMGL(req_MOD__init)();
    static volatile x10aux::StaticInitController::status FMGL(req_MOD__status);
    static x10::lang::CheckedThrowable* FMGL(req_MOD__exception);
    static x10_long FMGL(req_MOD__get)();
    static void FMGL(req_INFO__do_init)();
    static void FMGL(req_INFO__init)();
    static volatile x10aux::StaticInitController::status FMGL(req_INFO__status);
    static x10::lang::CheckedThrowable* FMGL(req_INFO__exception);
    static x10_long FMGL(req_INFO__get)();
    static void FMGL(req_NOINFO__do_init)();
    static void FMGL(req_NOINFO__init)();
    static volatile x10aux::StaticInitController::status FMGL(req_NOINFO__status);
    static x10::lang::CheckedThrowable* FMGL(req_NOINFO__exception);
    static x10_long FMGL(req_NOINFO__get)();
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class EdgeProvider;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/id/ProfilingID__XPregel.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/xpregel/GraphEdge.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/IntRange.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/util/ProfilingDB__Timer.h>
#include <org/scalegraph/util/ProfilingDB.h>
#include <org/scalegraph/Config.h>
#include <x10/compiler/Ifdef.h>
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/Algorithm.h>
#include <x10/compiler/Inline.h>
#include <org/scalegraph/util/Utils.h>
#include <x10/array/Array.h>
#include <x10/array/RectRegion1D.h>
#include <x10/array/Region.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_GENERICS
inline x10_int org::scalegraph::xpregel::EdgeProvider<void>::FMGL(reqshift__get)() {
    if (FMGL(reqshift__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(reqshift__init)();
    }
    return org::scalegraph::xpregel::EdgeProvider<void>::FMGL(reqshift);
}

inline x10_long org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_RMV__get)() {
    if (FMGL(req_RMV__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(req_RMV__init)();
    }
    return org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_RMV);
}

inline x10_long org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_ADD__get)() {
    if (FMGL(req_ADD__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(req_ADD__init)();
    }
    return org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_ADD);
}

inline x10_long org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_MOD__get)() {
    if (FMGL(req_MOD__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(req_MOD__init)();
    }
    return org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_MOD);
}

inline x10_long org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_INFO__get)() {
    if (FMGL(req_INFO__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(req_INFO__init)();
    }
    return org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_INFO);
}

inline x10_long org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_NOINFO__get)() {
    if (FMGL(req_NOINFO__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(req_NOINFO__init)();
    }
    return org::scalegraph::xpregel::EdgeProvider<void>::FMGL(req_NOINFO);
}

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/EdgeProvider.h>

#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i74157domain122313 = i_range122321;
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i74157min122314 = i74157domain122313->FMGL(min);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i74157max122315 = i74157domain122313->FMGL(max);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i122316;
                for (
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i122316 = i74157min122314; ((i122316) <= (i74157max122315));
                     
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i122316 = ((x10_int) ((i122316) + (((x10_int)1)))))
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii122317 = i122316;
                    
                    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    x10_int tid122312 = ii122317;
                    
                    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e122309 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index122310 = tid122312;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122311;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((list->FMGL(data)).isValid())) {
                                
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
                            if (((index122310) < (((x10_int)0))) ||
                                ((((x10_long) (index122310))) >= (list->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122310), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122311 = (list->FMGL(data))[index122310];
                        ret122311;
                    }))
                    ;
                    
                    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange i77662domain122304 =
                      (__extension__ ({
                        
                        //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this122305 =
                          x10aux::nullCheck(e122309)->FMGL(mEdgeModifyReqOffset);
                        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this122305->
                                                                                     FMGL(data)->
                                                                                     FMGL(size)) - (((x10_long)1ll)))));
                    }))
                    ;
                    
                    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    x10_long i77662max122306 = i77662domain122304->
                                                 FMGL(max);
                    
                    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
                    {
                        x10_long i122307;
                        for (
                             //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                             i122307 = ((x10_long)0ll); ((i122307) <= (i77662max122306));
                             
                             //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                             i122307 = ((x10_long) ((i122307) + (((x10_long)1ll)))))
                        {
                            
                            //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                            x10_long i122308 = i122307;
                            
                            //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_long> this122301 =
                              x10aux::nullCheck(e122309)->
                                FMGL(mEdgeModifyReqOffset);
                            
                            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index122302 = i122308;
                            
                            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret122303;
                            {
                                
                                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this122301->FMGL(data)).isValid()))
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
                                if (((index122302) < (((x10_long) (((x10_int)0))))) ||
                                    ((index122302) >= (this122301->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122302), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (this122301->FMGL(data)).set(index122302, ((x10_long)0ll));
                            
                            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret122303 = ((x10_long)0ll);
                            
                            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret122303;
                        }
                    }
                    
                    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(x10aux::nullCheck(e122309)->
                                        FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::setSize(
                      ((x10_long)0ll));
                    
                    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(e122309)->FMGL(mEdgeChanged) =
                      false;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1224) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1224)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1224);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1224);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::IntRange i_range122321;
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range122321);
        buf.write(this->list);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::IntRange that_i_range122321 = buf.read<x10::lang::IntRange>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >(that_i_range122321, that_list);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__1(x10::lang::IntRange i_range122321, org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list) : i_range122321(i_range122321), list(list) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:843";
    }

};

template<class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index121720 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret121721;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((list->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index121720) < (((x10_long) (((x10_int)0))))) || ((index121720) >= (list->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121720), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret121721 = (list->FMGL(data))[index121720];
            ret121721;
        }))
        ;
        
        //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(e)->optimizeReqEdge(r);
        
        //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long count = ((x10_long)0ll);
        
        //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i77700domain122358 = r;
        
        //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77700min122359 = i77700domain122358->FMGL(min);
        
        //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77700max122360 = i77700domain122358->FMGL(max);
        
        //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i122361;
            for (
                 //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i122361 = i77700min122359; ((i122361) <= (i77700max122360));
                 
                 //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i122361 = ((x10_long) ((i122361) + (((x10_long)1ll)))))
            {
                
                //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid122362 = i122361;
                
                //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long orgn_length122345 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122346 = ((x10_long) ((srcid122362) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122347;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((outOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122346) < (((x10_long) (((x10_int)0))))) ||
                            ((index122346) >= (outOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122346), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122347 = (outOffset->FMGL(data))[index122346];
                    ret122347;
                }))
                ) - ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122348 = srcid122362;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122349;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((outOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122348) < (((x10_long) (((x10_int)0))))) ||
                            ((index122348) >= (outOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122348), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122349 = (outOffset->FMGL(data))[index122348];
                    ret122349;
                }))
                )));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122342 = ((x10_long) ((srcid122362) + (((x10_long)1ll))));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value122343 = ((x10_long) ((orgn_length122345) + (x10aux::nullCheck(e)->calcEdgeNumDifferential(
                                                                             srcid122362))));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122344;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((newOffset->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122342) < (((x10_long) (((x10_int)0))))) ||
                        ((index122342) >= (newOffset->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122342), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (newOffset->FMGL(data)).set(index122342, value122343);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122344 = value122343;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret122344;
                
                //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                count = ((x10_long) ((count) + ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122350 = ((x10_long) ((srcid122362) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122351;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122350) < (((x10_long) (((x10_int)0))))) ||
                            ((index122350) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122350), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122351 = (newOffset->FMGL(data))[index122350];
                    ret122351;
                }))
                )));
            }
        }
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> x122363 =
          offsetPerThread;
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long y122364 = ((x10_long) ((tid) + (((x10_long)1ll))));
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long z122365 = count;
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long ret122366;
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long r122355 = ((x10_long) (((__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122356 = y122364;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret122357;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x122363->FMGL(data)).isValid())) {
                    
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
                if (((index122356) < (((x10_long) (((x10_int)0))))) ||
                    ((index122356) >= (x122363->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122356), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122357 = (x122363->FMGL(data))[index122356];
            ret122357;
        }))
        ) + (z122365)));
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122352 = y122364;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value122353 = r122355;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122354;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x122363->FMGL(data)).isValid())) {
                
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
            if (((index122352) < (((x10_long) (((x10_int)0))))) ||
                ((index122352) >= (x122363->FMGL(data)->FMGL(size))))
            {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122352), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x122363->FMGL(data)).set(index122352, value122353);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122354 = value122353;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret122354;
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
        ret122366 = r122355;
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
        ret122366;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10_long> outOffset;
    org::scalegraph::util::MemoryChunk<x10_long> newOffset;
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->list);
        buf.write(this->outOffset);
        buf.write(this->newOffset);
        buf.write(this->offsetPerThread);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_outOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >(that_list, that_outOffset, that_newOffset, that_offsetPerThread);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__2(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10_long> outOffset, org::scalegraph::util::MemoryChunk<x10_long> newOffset, org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread) : list(list), outOffset(outOffset), newOffset(newOffset), offsetPerThread(offsetPerThread) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:125-140";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122391 = r->FMGL(min);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value122392 = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122393 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret122394;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((offsetPerThread->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index122393) < (((x10_long) (((x10_int)0))))) || ((index122393) >= (offsetPerThread->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122393), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122394 = (offsetPerThread->FMGL(data))[index122393];
            ret122394;
        }))
        ;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122395;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((newOffset->FMGL(data)).isValid())) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122391) < (((x10_long) (((x10_int)0))))) ||
                ((index122391) >= (newOffset->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122391), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (newOffset->FMGL(data)).set(index122391, value122392);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122395 = value122392;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret122395;
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77737min122396 = r->FMGL(min);
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77737max122397 = ((x10_long) ((r->FMGL(max)) - (((x10_long)1ll))));
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i122398;
            for (
                 //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i122398 = i77737min122396; ((i122398) <= (i77737max122397));
                 
                 //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i122398 = ((x10_long) ((i122398) + (((x10_long)1ll)))))
            {
                
                //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid122399 = i122398;
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x122385 =
                  newOffset;
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long y122386 = ((x10_long) ((srcid122399) + (((x10_long)1ll))));
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long z122387 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122388 = srcid122399;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122389;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122388) < (((x10_long) (((x10_int)0))))) ||
                            ((index122388) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122388), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122389 = (newOffset->FMGL(data))[index122388];
                    ret122389;
                }))
                ;
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long ret122390;
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long r122382 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122383 = y122386;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122384;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x122385->FMGL(data)).isValid()))
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
                        if (((index122383) < (((x10_long) (((x10_int)0))))) ||
                            ((index122383) >= (x122385->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122383), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122384 = (x122385->FMGL(data))[index122383];
                    ret122384;
                }))
                ) + (z122387)));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122379 = y122386;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value122380 = r122382;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122381;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x122385->FMGL(data)).isValid()))
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
                    if (((index122379) < (((x10_long) (((x10_int)0))))) ||
                        ((index122379) >= (x122385->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122379), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (x122385->FMGL(data)).set(index122379, value122380);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122381 = value122380;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret122381;
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                ret122390 = r122382;
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
                ret122390;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    org::scalegraph::util::MemoryChunk<x10_long> newOffset;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsetPerThread);
        buf.write(this->newOffset);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >(that_offsetPerThread, that_newOffset);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__3(org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread, org::scalegraph::util::MemoryChunk<x10_long> newOffset) : offsetPerThread(offsetPerThread), newOffset(newOffset) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:146-151";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index121819 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret121820;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((list->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index121819) < (((x10_long) (((x10_int)0))))) || ((index121819) >= (list->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121819), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret121820 = (list->FMGL(data))[index121819];
            ret121820;
        }))
        ;
        
        //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i77755domain122418 = r;
        
        //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77755min122419 = i77755domain122418->FMGL(min);
        
        //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77755max122420 = i77755domain122418->FMGL(max);
        
        //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i122421;
            for (
                 //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i122421 = i77755min122419; ((i122421) <= (i77755max122420));
                 
                 //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i122421 = ((x10_long) ((i122421) + (((x10_long)1ll)))))
            {
                
                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid122422 = i122421;
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long newlen122400 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122401 = ((x10_long) ((srcid122422) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122402;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122401) < (((x10_long) (((x10_int)0))))) ||
                            ((index122401) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122401), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122402 = (newOffset->FMGL(data))[index122401];
                    ret122402;
                }))
                ) - ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122403 = srcid122422;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122404;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122403) < (((x10_long) (((x10_int)0))))) ||
                            ((index122403) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122403), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122404 = (newOffset->FMGL(data))[index122403];
                    ret122404;
                }))
                )));
                
                //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long oldlen122405 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122406 = ((x10_long) ((srcid122422) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122407;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((outOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122406) < (((x10_long) (((x10_int)0))))) ||
                            ((index122406) >= (outOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122406), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122407 = (outOffset->FMGL(data))[index122406];
                    ret122407;
                }))
                ) - ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122408 = srcid122422;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122409;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((outOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122408) < (((x10_long) (((x10_int)0))))) ||
                            ((index122408) >= (outOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122408), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122409 = (outOffset->FMGL(data))[index122408];
                    ret122409;
                }))
                )));
                
                //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(e)->updateOutEdge_temp(
                  newVertex->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                    (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index122410 = srcid122422;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret122411;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((newOffset->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index122410) < (((x10_long) (((x10_int)0))))) ||
                                ((index122410) >= (newOffset->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122410), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122411 = (newOffset->FMGL(data))[index122410];
                        ret122411;
                    }))
                    , newlen122400), newValue->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                                       (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index122412 =
                                             srcid122422;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long ret122413;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((newOffset->
                                                        FMGL(data)).isValid()))
                                               {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                               //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (((index122412) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index122412) >= (newOffset->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122412), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret122413 = (newOffset->
                                                          FMGL(data))[index122412];
                                           ret122413;
                                       }))
                                       , newlen122400), outVertex->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                          (__extension__ ({
                                                              
                                                              //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              x10_long index122414 =
                                                                srcid122422;
                                                              
                                                              //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              x10_long ret122415;
                                                              {
                                                                  
                                                                  //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (!((outOffset->
                                                                           FMGL(data)).isValid()))
                                                                  {
                                                                      
                                                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                      if (true)
                                                                      {
                                                                          
                                                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                      }
                                                                      
                                                                  }
                                                                  
                                                                  //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (((index122414) < (((x10_long) (((x10_int)0))))) ||
                                                                      ((index122414) >= (outOffset->
                                                                                           FMGL(data)->
                                                                                           FMGL(size))))
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                      if (true)
                                                                      {
                                                                          
                                                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122414), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                      }
                                                                      
                                                                  }
                                                                  
                                                              }
                                                              
                                                              //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                              ret122415 =
                                                                (outOffset->
                                                                   FMGL(data))[index122414];
                                                              ret122415;
                                                          }))
                                                          ,
                                                          oldlen122405),
                  outValue->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                    (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index122416 = srcid122422;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret122417;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((outOffset->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index122416) < (((x10_long) (((x10_int)0))))) ||
                                ((index122416) >= (outOffset->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122416), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122417 = (outOffset->FMGL(data))[index122416];
                        ret122417;
                    }))
                    , oldlen122405), srcid122422);
            }
        }
        
        //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mOutOffset) = newOffset;
        
        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mOutVertex) = newVertex;
        
        //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mOutValue) = newValue;
        
        //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Assert_c
        #ifndef NO_ASSERTIONS
        if (x10aux::x10__assertions_enabled)
            x10aux::x10__assert((x10aux::struct_equals(newOffset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                         ((x10_long) ((r->
                                                                         FMGL(max)) + (((x10_long)1ll))))),
                                                       offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                         ((x10_long) ((tid) + (((x10_long)1ll))))))));
        #endif//NO_ASSERTIONS
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10_long> newOffset;
    org::scalegraph::util::MemoryChunk<x10_long> outOffset;
    org::scalegraph::util::MemoryChunk<x10_long> newVertex;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue;
    org::scalegraph::util::MemoryChunk<x10_long> outVertex;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> outValue;
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->list);
        buf.write(this->newOffset);
        buf.write(this->outOffset);
        buf.write(this->newVertex);
        buf.write(this->newValue);
        buf.write(this->outVertex);
        buf.write(this->outValue);
        buf.write(this->offsetPerThread);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_outOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newVertex = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_newValue = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_outVertex = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_outValue = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >(that_list, that_newOffset, that_outOffset, that_newVertex, that_newValue, that_outVertex, that_outValue, that_offsetPerThread);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__4(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10_long> newOffset, org::scalegraph::util::MemoryChunk<x10_long> outOffset, org::scalegraph::util::MemoryChunk<x10_long> newVertex, org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue, org::scalegraph::util::MemoryChunk<x10_long> outVertex, org::scalegraph::util::MemoryChunk<TPMGL(E)> outValue, org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread) : list(list), newOffset(newOffset), outOffset(outOffset), newVertex(newVertex), newValue(newValue), outVertex(outVertex), outValue(outValue), offsetPerThread(offsetPerThread) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:158-177";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 501 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122150 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122151;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((list->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index122150) < (((x10_long) (((x10_int)0))))) || ((index122150) >= (list->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122150), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122151 = (list->FMGL(data))[index122150];
            ret122151;
        }))
        ;
        
        //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long count = ((x10_long)0ll);
        
        //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i77903domain122619 = r;
        
        //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77903min122620 = i77903domain122619->FMGL(min);
        
        //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77903max122621 = i77903domain122619->FMGL(max);
        
        //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i122622;
            for (
                 //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i122622 = i77903min122620; ((i122622) <= (i77903max122621));
                 
                 //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i122622 = ((x10_long) ((i122622) + (((x10_long)1ll)))))
            {
                
                //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid122623 = i122622;
                
                //#line 505 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long orgn_length122606 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122607 = ((x10_long) ((srcid122623) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122608;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((inOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122607) < (((x10_long) (((x10_int)0))))) ||
                            ((index122607) >= (inOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122607), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122608 = (inOffset->FMGL(data))[index122607];
                    ret122608;
                }))
                ) - ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122609 = srcid122623;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122610;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((inOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122609) < (((x10_long) (((x10_int)0))))) ||
                            ((index122609) >= (inOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122609), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122610 = (inOffset->FMGL(data))[index122609];
                    ret122610;
                }))
                )));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122603 = ((x10_long) ((srcid122623) + (((x10_long)1ll))));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value122604 = ((x10_long) ((orgn_length122606) + (x10aux::nullCheck(e)->calcEdgeNumDifferential(
                                                                             srcid122623))));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122605;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((newOffset->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122603) < (((x10_long) (((x10_int)0))))) ||
                        ((index122603) >= (newOffset->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122603), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (newOffset->FMGL(data)).set(index122603, value122604);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122605 = value122604;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret122605;
                
                //#line 508 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                count = ((x10_long) ((count) + ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122611 = ((x10_long) ((srcid122623) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122612;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122611) < (((x10_long) (((x10_int)0))))) ||
                            ((index122611) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122611), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122612 = (newOffset->FMGL(data))[index122611];
                    ret122612;
                }))
                )));
            }
        }
        
        //#line 510 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> x122624 =
          offsetPerThread;
        
        //#line 510 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long y122625 = ((x10_long) ((tid) + (((x10_long)1ll))));
        
        //#line 510 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long z122626 = count;
        
        //#line 510 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long ret122627;
        
        //#line 510 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long r122616 = ((x10_long) (((__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122617 = y122625;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret122618;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x122624->FMGL(data)).isValid())) {
                    
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
                if (((index122617) < (((x10_long) (((x10_int)0))))) ||
                    ((index122617) >= (x122624->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122617), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122618 = (x122624->FMGL(data))[index122617];
            ret122618;
        }))
        ) + (z122626)));
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122613 = y122625;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value122614 = r122616;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122615;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x122624->FMGL(data)).isValid())) {
                
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
            if (((index122613) < (((x10_long) (((x10_int)0))))) ||
                ((index122613) >= (x122624->FMGL(data)->FMGL(size))))
            {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122613), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (x122624->FMGL(data)).set(index122613, value122614);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122615 = value122614;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret122615;
        
        //#line 510 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
        ret122627 = r122616;
        
        //#line 510 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
        ret122627;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10_long> inOffset;
    org::scalegraph::util::MemoryChunk<x10_long> newOffset;
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->list);
        buf.write(this->inOffset);
        buf.write(this->newOffset);
        buf.write(this->offsetPerThread);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_inOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >(that_list, that_inOffset, that_newOffset, that_offsetPerThread);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__5(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10_long> inOffset, org::scalegraph::util::MemoryChunk<x10_long> newOffset, org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread) : list(list), inOffset(inOffset), newOffset(newOffset), offsetPerThread(offsetPerThread) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:500-511";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122652 = r->FMGL(min);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value122653 = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122654 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret122655;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((offsetPerThread->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index122654) < (((x10_long) (((x10_int)0))))) || ((index122654) >= (offsetPerThread->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122654), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122655 = (offsetPerThread->FMGL(data))[index122654];
            ret122655;
        }))
        ;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122656;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((newOffset->FMGL(data)).isValid())) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122652) < (((x10_long) (((x10_int)0))))) ||
                ((index122652) >= (newOffset->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122652), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (newOffset->FMGL(data)).set(index122652, value122653);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122656 = value122653;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret122656;
        
        //#line 518 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77940min122657 = r->FMGL(min);
        
        //#line 518 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77940max122658 = ((x10_long) ((r->FMGL(max)) - (((x10_long)1ll))));
        
        //#line 518 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i122659;
            for (
                 //#line 518 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i122659 = i77940min122657; ((i122659) <= (i77940max122658));
                 
                 //#line 518 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i122659 = ((x10_long) ((i122659) + (((x10_long)1ll)))))
            {
                
                //#line 518 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid122660 = i122659;
                
                //#line 519 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x122646 =
                  newOffset;
                
                //#line 519 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long y122647 = ((x10_long) ((srcid122660) + (((x10_long)1ll))));
                
                //#line 519 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long z122648 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122649 = srcid122660;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122650;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122649) < (((x10_long) (((x10_int)0))))) ||
                            ((index122649) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122649), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122650 = (newOffset->FMGL(data))[index122649];
                    ret122650;
                }))
                ;
                
                //#line 519 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long ret122651;
                
                //#line 519 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long r122643 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122644 = y122647;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122645;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x122646->FMGL(data)).isValid()))
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
                        if (((index122644) < (((x10_long) (((x10_int)0))))) ||
                            ((index122644) >= (x122646->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122644), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122645 = (x122646->FMGL(data))[index122644];
                    ret122645;
                }))
                ) + (z122648)));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122640 = y122647;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value122641 = r122643;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122642;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x122646->FMGL(data)).isValid()))
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
                    if (((index122640) < (((x10_long) (((x10_int)0))))) ||
                        ((index122640) >= (x122646->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122640), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (x122646->FMGL(data)).set(index122640, value122641);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122642 = value122641;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret122642;
                
                //#line 519 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                ret122651 = r122643;
                
                //#line 519 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
                ret122651;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    org::scalegraph::util::MemoryChunk<x10_long> newOffset;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->offsetPerThread);
        buf.write(this->newOffset);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >(that_offsetPerThread, that_newOffset);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__6(org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread, org::scalegraph::util::MemoryChunk<x10_long> newOffset) : offsetPerThread(offsetPerThread), newOffset(newOffset) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:516-520";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_EdgeProvider__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 528 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122249 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122250;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((list->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index122249) < (((x10_long) (((x10_int)0))))) || ((index122249) >= (list->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122249), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122250 = (list->FMGL(data))[index122249];
            ret122250;
        }))
        ;
        
        //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i77958domain122684 = r;
        
        //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77958min122685 = i77958domain122684->FMGL(min);
        
        //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77958max122686 = i77958domain122684->FMGL(max);
        
        //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i122687;
            for (
                 //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i122687 = i77958min122685; ((i122687) <= (i77958max122686));
                 
                 //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i122687 = ((x10_long) ((i122687) + (((x10_long)1ll)))))
            {
                
                //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long srcid122688 = i122687;
                
                //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long newlen122661 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122662 = ((x10_long) ((srcid122688) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122663;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122662) < (((x10_long) (((x10_int)0))))) ||
                            ((index122662) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122662), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122663 = (newOffset->FMGL(data))[index122662];
                    ret122663;
                }))
                ) - ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122664 = srcid122688;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122665;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122664) < (((x10_long) (((x10_int)0))))) ||
                            ((index122664) >= (newOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122664), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122665 = (newOffset->FMGL(data))[index122664];
                    ret122665;
                }))
                )));
                
                //#line 532 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long oldlen122666 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122667 = ((x10_long) ((srcid122688) + (((x10_long)1ll))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122668;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((inOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122667) < (((x10_long) (((x10_int)0))))) ||
                            ((index122667) >= (inOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122667), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122668 = (inOffset->FMGL(data))[index122667];
                    ret122668;
                }))
                ) - ((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122669 = srcid122688;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122670;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((inOffset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122669) < (((x10_long) (((x10_int)0))))) ||
                            ((index122669) >= (inOffset->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122669), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122670 = (inOffset->FMGL(data))[index122669];
                    ret122670;
                }))
                )));
                
                //#line 533 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(e)->updateOutEdge_temp(
                  newVertex->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                    (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index122671 = srcid122688;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret122672;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((newOffset->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index122671) < (((x10_long) (((x10_int)0))))) ||
                                ((index122671) >= (newOffset->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122671), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122672 = (newOffset->FMGL(data))[index122671];
                        ret122672;
                    }))
                    , newlen122661), newValue->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                                       (__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index122673 =
                                             srcid122688;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long ret122674;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((newOffset->
                                                        FMGL(data)).isValid()))
                                               {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                               //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (((index122673) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index122673) >= (newOffset->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122673), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret122674 = (newOffset->
                                                          FMGL(data))[index122673];
                                           ret122674;
                                       }))
                                       , newlen122661), inVertex->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                          (__extension__ ({
                                                              
                                                              //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              x10_long index122675 =
                                                                srcid122688;
                                                              
                                                              //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              x10_long ret122676;
                                                              {
                                                                  
                                                                  //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (!((inOffset->
                                                                           FMGL(data)).isValid()))
                                                                  {
                                                                      
                                                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                      if (true)
                                                                      {
                                                                          
                                                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                      }
                                                                      
                                                                  }
                                                                  
                                                                  //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (((index122675) < (((x10_long) (((x10_int)0))))) ||
                                                                      ((index122675) >= (inOffset->
                                                                                           FMGL(data)->
                                                                                           FMGL(size))))
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                      if (true)
                                                                      {
                                                                          
                                                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122675), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                      }
                                                                      
                                                                  }
                                                                  
                                                              }
                                                              
                                                              //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                              ret122676 =
                                                                (inOffset->
                                                                   FMGL(data))[index122675];
                                                              ret122676;
                                                          }))
                                                          ,
                                                          oldlen122666),
                  inValue->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                    (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index122677 = srcid122688;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret122678;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((inOffset->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index122677) < (((x10_long) (((x10_int)0))))) ||
                                ((index122677) >= (inOffset->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122677), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122678 = (inOffset->FMGL(data))[index122677];
                        ret122678;
                    }))
                    , oldlen122666), srcid122688);
            }
        }
        
        //#line 542 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mInOffset) = newOffset;
        
        //#line 543 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mInVertex) = newVertex;
        
        //#line 544 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(e)->FMGL(mInValue) = newValue;
        
        //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i77977domain122689 = (__extension__ ({
            
            //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this122690 =
              x10aux::nullCheck(e)->FMGL(mEdgeModifyReqOffset);
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this122690->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long i77977max122691 = i77977domain122689->FMGL(max);
        
        //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
        {
            x10_long i122692;
            for (
                 //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                 i122692 = ((x10_long)0ll); ((i122692) <= (i77977max122691));
                 
                 //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                 i122692 = ((x10_long) ((i122692) + (((x10_long)1ll)))))
            {
                
                //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long i122693 = i122692;
                
                //#line 546 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this122679 =
                  x10aux::nullCheck(e)->FMGL(mEdgeModifyReqOffset);
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122680 = i122693;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value122681 = (__extension__ ({
                    
                    //#line 546 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122682 =
                      x10aux::nullCheck(e)->FMGL(mEdgeModifyReqWithAR);
                    x10aux::nullCheck(this122682)->FMGL(size);
                }))
                ;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122683;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this122679->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122680) < (((x10_long) (((x10_int)0))))) ||
                        ((index122680) >= (this122679->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122680), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (this122679->FMGL(data)).set(index122680, value122681);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122683 = value122681;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret122683;
            }
        }
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Assert_c
        #ifndef NO_ASSERTIONS
        if (x10aux::x10__assertions_enabled)
            x10aux::x10__assert((x10aux::struct_equals(newOffset->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                         ((x10_long) ((r->
                                                                         FMGL(max)) + (((x10_long)1ll))))),
                                                       offsetPerThread->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                         ((x10_long) ((tid) + (((x10_long)1ll))))))));
        #endif//NO_ASSERTIONS
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10_long> newOffset;
    org::scalegraph::util::MemoryChunk<x10_long> inOffset;
    org::scalegraph::util::MemoryChunk<x10_long> newVertex;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue;
    org::scalegraph::util::MemoryChunk<x10_long> inVertex;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> inValue;
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->list);
        buf.write(this->newOffset);
        buf.write(this->inOffset);
        buf.write(this->newVertex);
        buf.write(this->newValue);
        buf.write(this->inVertex);
        buf.write(this->inValue);
        buf.write(this->offsetPerThread);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_inOffset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_newVertex = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_newValue = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_inVertex = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_inValue = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsetPerThread = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >(that_list, that_newOffset, that_inOffset, that_newVertex, that_newValue, that_inVertex, that_inValue, that_offsetPerThread);
        return this_;
    }
    
    org_scalegraph_xpregel_EdgeProvider__closure__7(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10_long> newOffset, org::scalegraph::util::MemoryChunk<x10_long> inOffset, org::scalegraph::util::MemoryChunk<x10_long> newVertex, org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue, org::scalegraph::util::MemoryChunk<x10_long> inVertex, org::scalegraph::util::MemoryChunk<TPMGL(E)> inValue, org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread) : list(list), newOffset(newOffset), inOffset(inOffset), newVertex(newVertex), newValue(newValue), inVertex(inVertex), inValue(inValue), offsetPerThread(offsetPerThread) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10:527-548";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER__CLOSURE__7_CLOSURE
 /* private static type XP = org.scalegraph.id.ProfilingID$XPregel; */ 

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10FieldDecl_c

//#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_constructor(
                           ) {
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.AssignPropertyCall_c
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::__fieldInitializers76853();
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStartSrcid) = ((x10_long)0ll);
}
template<class TPMGL(E)> org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_make(
                           ) {
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>))) org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>();
    this_->_constructor();
    return this_;
}



//#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_constructor(
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge,
                           org::scalegraph::util::MemoryChunk<x10_long> reqOff,
                           org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
                           x10_long startSrcid) {
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.AssignPropertyCall_c
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::__fieldInitializers76853();
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutOffset) = x10aux::nullCheck(outEdge)->
                               FMGL(offsets);
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutVertex) = x10aux::nullCheck(outEdge)->
                               FMGL(vertexes);
    
    //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutValue) = x10aux::nullCheck(outEdge)->FMGL(value);
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInOffset) = x10aux::nullCheck(inEdge)->FMGL(offsets);
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInVertex) = x10aux::nullCheck(inEdge)->FMGL(vertexes);
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInValue) = x10aux::nullCheck(inEdge)->FMGL(value);
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeModifyReqOffset) = reqOff;
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeModifyReqWithAR) = req;
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStartSrcid) = startSrcid;
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = false;
}
template<class TPMGL(E)> org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_make(
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                           org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge,
                           org::scalegraph::util::MemoryChunk<x10_long> reqOff,
                           org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* req,
                           x10_long startSrcid) {
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>))) org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>();
    this_->_constructor(outEdge, inEdge, reqOff, req, startSrcid);
    return this_;
}



//#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c

//#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c

//#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::updateOutEdge_temp(
  org::scalegraph::util::MemoryChunk<x10_long> newEdge, org::scalegraph::util::MemoryChunk<TPMGL(E)> newVal,
  org::scalegraph::util::MemoryChunk<x10_long> oldEdge, org::scalegraph::util::MemoryChunk<TPMGL(E)> oldVal,
  x10_long srcid) {
    
    //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long localsrcid = ((x10_long) ((srcid) - (this->FMGL(mStartSrcid))));
    
    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long start = (__extension__ ({
        
        //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121853 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121852 = localsrcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121854;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121853->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121852) < (((x10_long) (((x10_int)0))))) ||
                ((index121852) >= (this121853->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121852), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121854 = (this121853->FMGL(data))[index121852];
        ret121854;
    }))
    ;
    
    //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) (((__extension__ ({
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121857 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121856 = ((x10_long) ((localsrcid) + (((x10_long)1ll))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121858;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121857->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121856) < (((x10_long) (((x10_int)0))))) ||
                ((index121856) >= (this121857->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121856), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121858 = (this121857->FMGL(data))[index121856];
        ret121858;
    }))
    ) - (start)));
    
    //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > req =
      (__extension__ ({
          
          //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this121860 =
            this->FMGL(mEdgeModifyReqWithAR);
          x10aux::nullCheck(this121860)->FMGL(mc);
      }))
      ->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::subpart(
        start, length);
    
    //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long oldEdgeIndex = ((x10_long)0ll);
    
    //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long newEdgeIndex = ((x10_long)0ll);
    
    //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77774max122469 = ((x10_long) ((length) - (((x10_long)1ll))));
    
    //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122470;
        for (
             //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122470 = ((x10_long)0ll); ((i122470) <= (i77774max122469));
             
             //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122470 = ((x10_long) ((i122470) + (((x10_long)1ll)))))
        {
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i122471 = i122470;
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long reqId122450 = ((x10_long) (((__extension__ ({
                                                     
                                                     //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                     x10_long index122451 =
                                                       i122471;
                                                     
                                                     //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                     org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122452;
                                                     {
                                                         
                                                         //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (!((req->
                                                                  FMGL(data)).isValid()))
                                                         {
                                                             
                                                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                             }
                                                             
                                                         }
                                                         
                                                         //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (((index122451) < (((x10_long) (((x10_int)0))))) ||
                                                             ((index122451) >= (req->
                                                                                  FMGL(data)->
                                                                                  FMGL(size))))
                                                         {
                                                             
                                                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122451), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                     //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret122452 =
                                                       (req->
                                                          FMGL(data))[index122451];
                                                     ret122452;
                                                 }))
                                                 ->FMGL(val1)) & (((x10_long)-8070450532247928833ll))));
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            TPMGL(E) reqValue122453 = (__extension__ ({
                                          
                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                          x10_long index122454 =
                                            i122471;
                                          
                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                          org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122455;
                                          {
                                              
                                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (!((req->
                                                       FMGL(data)).isValid()))
                                              {
                                                  
                                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                  if (true)
                                                  {
                                                      
                                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                  }
                                                  
                                              }
                                              
                                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (((index122454) < (((x10_long) (((x10_int)0))))) ||
                                                  ((index122454) >= (req->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                                              {
                                                  
                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                  if (true)
                                                  {
                                                      
                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122454), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                  }
                                                  
                                              }
                                              
                                          }
                                          
                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret122455 = (req->
                                                         FMGL(data))[index122454];
                                          ret122455;
                                      }))
                                      ->FMGL(val2);
            
            //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int reqARM122456 = (__extension__ ({
                
                //#line 372 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long l122457 = (__extension__ ({
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index122458 =
                                         i122471;
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122459;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((req->FMGL(data)).isValid()))
                                           {
                                               
                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                               }
                                               
                                           }
                                           
                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (((index122458) < (((x10_long) (((x10_int)0))))) ||
                                               ((index122458) >= (req->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122458), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret122459 = (req->
                                                      FMGL(data))[index122458];
                                       ret122459;
                                   }))
                                   ->FMGL(val1);
                ((x10_int) (((x10_long) ((((x10_long) ((l122457) & (((x10_long)8070450532247928832ll))))) >> (0x3f & (((x10_int)60)))))));
            }))
            ;
            
            //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long copyLength122443 = ((x10_long)0ll);
            
            //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long oldlen122444 = (__extension__ ({
                oldEdge->FMGL(data)->FMGL(size);
            }))
            ;
            
            //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long newlen122445 = (__extension__ ({
                newEdge->FMGL(data)->FMGL(size);
            }))
            ;
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long oldtarget122446 = ((x10_long) ((oldEdgeIndex) + (copyLength122443)));
            
            //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long newtarget122447 = ((x10_long) ((newEdgeIndex) + (copyLength122443)));
            
            //#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10While_c
            while (((oldtarget122446) < (oldlen122444)) &&
                   ((newtarget122447) < (newlen122445)) &&
                   ((((x10_long) (((__extension__ ({
                       
                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                       x10_long index122448 = oldtarget122446;
                       
                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                       x10_long ret122449;
                       {
                           
                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                           if (!((oldEdge->FMGL(data)).isValid()))
                           {
                               
                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                               if (true) {
                                   
                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                               }
                               
                           }
                           
                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                           if (((index122448) < (((x10_long) (((x10_int)0))))) ||
                               ((index122448) >= (oldEdge->
                                                    FMGL(data)->
                                                    FMGL(size))))
                           {
                               
                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                               if (true) {
                                   
                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122448), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                               }
                               
                           }
                           
                       }
                       
                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                       ret122449 = (oldEdge->FMGL(data))[index122448];
                       ret122449;
                   }))
                   ) & (((x10_long)-8070450532247928833ll))))) < (reqId122450)))
            {
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122433 = newtarget122447;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value122434 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122435 = oldtarget122446;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122436;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((oldEdge->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122435) < (((x10_long) (((x10_int)0))))) ||
                            ((index122435) >= (oldEdge->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122435), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122436 = (oldEdge->FMGL(data))[index122435];
                    ret122436;
                }))
                ;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122437;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((newEdge->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122433) < (((x10_long) (((x10_int)0))))) ||
                        ((index122433) >= (newEdge->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122433), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (newEdge->FMGL(data)).set(index122433, value122434);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122437 = value122434;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret122437;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122438 = newtarget122447;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                TPMGL(E) value122439 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122440 = oldtarget122446;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) ret122441;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((oldVal->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122440) < (((x10_long) (((x10_int)0))))) ||
                            ((index122440) >= (oldVal->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122440), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122441 = (oldVal->FMGL(data))[index122440];
                    ret122441;
                }))
                ;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                TPMGL(E) ret122442;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((newVal->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122438) < (((x10_long) (((x10_int)0))))) ||
                        ((index122438) >= (newVal->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122438), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (newVal->FMGL(data)).set(index122438, value122439);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122442 = value122439;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret122442;
                
                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                copyLength122443 = ((x10_long) ((copyLength122443) + (((x10_long)1ll))));
                
                //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                oldtarget122446 = ((x10_long) ((oldEdgeIndex) + (copyLength122443)));
                
                //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                newtarget122447 = ((x10_long) ((newEdgeIndex) + (copyLength122443)));
            }
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
            oldEdgeIndex = ((x10_long) ((oldEdgeIndex) + (copyLength122443)));
            
            //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
            newEdgeIndex = ((x10_long) ((newEdgeIndex) + (copyLength122443)));
            
            //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Switch_c
            switch (reqARM122456) {
                
                //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Case_c
                case ((x10_int)0): ;
                {
                    
                    //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    oldEdgeIndex = ((x10_long) ((oldEdgeIndex) + (((x10_long)1ll))));
                    
                    //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Branch_c
                    break;
                }
                //#line 235 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Case_c
                case ((x10_int)1): ;
                {
                    {
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index122460 = newEdgeIndex;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value122461 = reqId122450;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret122462;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((newEdge->FMGL(data)).isValid()))
                            {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index122460) < (((x10_long) (((x10_int)0))))) ||
                                ((index122460) >= (newEdge->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122460), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (newEdge->FMGL(data)).set(index122460, value122461);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122462 = value122461;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret122462;
                    }
                    {
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index122463 = newEdgeIndex;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(E) value122464 = reqValue122453;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(E) ret122465;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((newVal->FMGL(data)).isValid()))
                            {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index122463) < (((x10_long) (((x10_int)0))))) ||
                                ((index122463) >= (newVal->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122463), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (newVal->FMGL(data)).set(index122463, value122464);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122465 = value122464;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret122465;
                    }
                    
                    //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    newEdgeIndex = ((x10_long) ((newEdgeIndex) + (((x10_long)1ll))));
                    
                    //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Branch_c
                    break;
                }
                //#line 240 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Case_c
                case ((x10_int)2): ;
                {
                    
                    //#line 241 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Assert_c
                    #ifndef NO_ASSERTIONS
                    if (x10aux::x10__assertions_enabled)
                        x10aux::x10__assert((x10aux::struct_equals(oldEdge->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                     oldEdgeIndex),
                                                                   reqId122450)));
                    #endif//NO_ASSERTIONS
                    {
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index122466 = newEdgeIndex;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(E) value122467 = reqValue122453;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(E) ret122468;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((newVal->FMGL(data)).isValid()))
                            {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index122466) < (((x10_long) (((x10_int)0))))) ||
                                ((index122466) >= (newVal->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122466), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (newVal->FMGL(data)).set(index122466, value122467);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122468 = value122467;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret122468;
                    }
                    
                    //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    oldEdgeIndex = ((x10_long) ((oldEdgeIndex) + (((x10_long)1ll))));
                    
                    //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                    newEdgeIndex = ((x10_long) ((newEdgeIndex) + (((x10_long)1ll))));
                    
                    //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Branch_c
                    break;
                }
                //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Case_c
                default: ;
                {
                    
                    //#line 248 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(x10aux::makeStringLit("invalid operation: updateOutEdge_temp"))));
                }
            }
        }
    }
    
    //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long rest = ((x10_long) (((__extension__ ({
        newEdge->FMGL(data)->FMGL(size);
    }))
    ) - (newEdgeIndex)));
    
    //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(rest, ((x10_long) ((oldEdge->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (oldEdgeIndex))))));
    #endif//NO_ASSERTIONS
    
    //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<x10_long >(
      oldEdge, oldEdgeIndex, newEdge, newEdgeIndex, rest);
    
    //#line 255 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(E) >(
      oldVal, oldEdgeIndex, newVal, newEdgeIndex, rest);
}

//#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> x10_long org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::calcEdgeNumDifferential(
  x10_long srcid) {
    
    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long localsrcid = ((x10_long) ((srcid) - (this->FMGL(mStartSrcid))));
    
    //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long start = (__extension__ ({
        
        //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121901 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121900 = localsrcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121902;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121901->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121900) < (((x10_long) (((x10_int)0))))) ||
                ((index121900) >= (this121901->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121900), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121902 = (this121901->FMGL(data))[index121900];
        ret121902;
    }))
    ;
    
    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long end = ((x10_long) (((__extension__ ({
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121905 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121904 = ((x10_long) ((localsrcid) + (((x10_long)1ll))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121906;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121905->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121904) < (((x10_long) (((x10_int)0))))) ||
                ((index121904) >= (this121905->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121904), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121906 = (this121905->FMGL(data))[index121904];
        ret121906;
    }))
    ) - (((x10_long)1ll))));
    
    //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> count = org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)3))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77792min122485 = start;
    
    //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77792max122486 = end;
    
    //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122487;
        for (
             //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122487 = i77792min122485; ((i122487) <= (i77792max122486));
             
             //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122487 = ((x10_long) ((i122487) + (((x10_long)1ll)))))
        {
            
            //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i122488 = i122487;
            
            //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x122478 =
              count;
            
            //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int y122479 = (__extension__ ({
                
                //#line 372 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                x10_long l122480 = (__extension__ ({
                                       
                                       //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122481 =
                                         this->FMGL(mEdgeModifyReqWithAR);
                                       
                                       //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                       x10_long index122482 =
                                         i122488;
                                       
                                       //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122483;
                                       {
                                           
                                           //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                           if (((index122482) < (((x10_long) (((x10_int)0))))) ||
                                               ((index122482) >= (x10aux::nullCheck(this122481)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122482), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret122483 = (x10aux::nullCheck(this122481)->
                                                      FMGL(mc)->
                                                      FMGL(data))[index122482];
                                       ret122483;
                                   }))
                                   ->FMGL(val1);
                ((x10_int) (((x10_long) ((((x10_long) ((l122480) & (((x10_long)8070450532247928832ll))))) >> (0x3f & (((x10_int)60)))))));
            }))
            ;
            
            //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long ret122484;
            
            //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long r122475 = ((x10_long) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index122476 = y122479;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122477;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x122478->FMGL(data)).isValid()))
                    {
                        
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
                    if (((index122476) < (((x10_int)0))) ||
                        ((((x10_long) (index122476))) >= (x122478->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122476), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122477 = (x122478->FMGL(data))[index122476];
                ret122477;
            }))
            ) + (((x10_long)1ll))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index122472 = y122479;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value122473 = r122475;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret122474;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x122478->FMGL(data)).isValid())) {
                    
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
                if (((index122472) < (((x10_int)0))) || ((((x10_long) (index122472))) >= (x122478->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122472), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x122478->FMGL(data)).set(index122472, value122473);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122474 = value122473;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret122474;
            
            //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
            ret122484 = r122475;
            
            //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
            ret122484;
        }
    }
    
    //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return ((x10_long) (((__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121934;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((count->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((((x10_int)1)) < (((x10_int)0))) || ((((x10_long) (((x10_int)1)))) >= (count->
                                                                                          FMGL(data)->
                                                                                          FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)1)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121934 = (count->FMGL(data))[((x10_int)1)];
        ret121934;
    }))
    ) - ((__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121937;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((count->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (count->
                                                                                          FMGL(data)->
                                                                                          FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121937 = (count->FMGL(data))[((x10_int)0)];
        ret121937;
    }))
    )));
    
}

//#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::optimizeReqEdge(
  x10::lang::LongRange srcid) {
    
    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long dif = ((x10_long)0ll);
    
    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77810min122489 = srcid->FMGL(min);
    
    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77810max122490 = ((x10_long) ((srcid->FMGL(max)) - (((x10_long)1ll))));
    
    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122491;
        for (
             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122491 = i77810min122489; ((i122491) <= (i77810max122490));
             
             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122491 = ((x10_long) ((i122491) + (((x10_long)1ll)))))
        {
            
            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long si122492 = i122491;
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
            dif = this->optimizeReqEdge(si122492, dif, false);
        }
    }
    
    //#line 276 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->optimizeReqEdge(srcid->FMGL(max), dif, true);
}

//#line 278 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::optimizeReqEdge(
  x10_long srcid) {
    
    //#line 279 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->optimizeReqEdge(srcid, ((x10_long)0ll), true);
}

//#line 289 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> x10_long org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::optimizeReqEdge(
  x10_long srcid, x10_long modDiffReqStartSavingOffset, x10_boolean reduceBottom) {
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long localsrcid = ((x10_long) ((srcid) - (this->FMGL(mStartSrcid))));
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long reqStartIdx = (__extension__ ({
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121940 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121939 = localsrcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121941;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121940->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121939) < (((x10_long) (((x10_int)0))))) ||
                ((index121939) >= (this121940->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121939), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121941 = (this121940->FMGL(data))[index121939];
        ret121941;
    }))
    ;
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> x122537 =
      this->FMGL(mEdgeModifyReqOffset);
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long y122538 = localsrcid;
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long z122539 = modDiffReqStartSavingOffset;
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long ret122540;
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long r122496 = ((x10_long) (((__extension__ ({
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122497 = y122538;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122498;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((x122537->FMGL(data)).isValid())) {
                
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
            if (((index122497) < (((x10_long) (((x10_int)0))))) ||
                ((index122497) >= (x122537->FMGL(data)->FMGL(size))))
            {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122497), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122498 = (x122537->FMGL(data))[index122497];
        ret122498;
    }))
    ) + (z122539)));
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index122493 = y122538;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value122494 = r122496;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret122495;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((x122537->FMGL(data)).isValid())) {
            
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
        if (((index122493) < (((x10_long) (((x10_int)0))))) ||
            ((index122493) >= (x122537->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122493), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (x122537->FMGL(data)).set(index122493, value122494);
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret122495 = value122494;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret122495;
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
    ret122540 = r122496;
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
    ret122540;
    
    //#line 293 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long reqEndIdx = ((x10_long) (((__extension__ ({
        
        //#line 293 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121964 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121963 = ((x10_long) ((localsrcid) + (((x10_long)1ll))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121965;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121964->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121963) < (((x10_long) (((x10_int)0))))) ||
                ((index121963) >= (this121964->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121963), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121965 = (this121964->FMGL(data))[index121963];
        ret121965;
    }))
    ) - (((x10_long)1ll))));
    
    //#line 294 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long outend = ((x10_long) (((__extension__ ({
        
        //#line 294 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121968 =
          this->FMGL(mOutOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121967 = ((x10_long) ((srcid) + (((x10_long)1ll))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121969;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121968->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121967) < (((x10_long) (((x10_int)0))))) ||
                ((index121967) >= (this121968->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121967), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121969 = (this121968->FMGL(data))[index121967];
        ret121969;
    }))
    ) - (((x10_long)1ll))));
    
    //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MaskedStableSort_TupleK1<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >(((__extension__ ({
                                                                                                                    
                                                                                                                    //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                                                                                                    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this121971 =
                                                                                                                      this->
                                                                                                                        FMGL(mEdgeModifyReqWithAR);
                                                                                                                    x10aux::nullCheck(this121971)->
                                                                                                                      FMGL(mc);
                                                                                                                }))
                                                                                                                ->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::subpart(
                                                                                                                  reqStartIdx,
                                                                                                                  ((x10_long) ((((x10_long) ((reqEndIdx) - (reqStartIdx)))) + (((x10_long) (((x10_int)1))))))))->pointer(), ((__extension__ ({
                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                 //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                                                                                                 org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this121971 =
                                                                                                                                                                                                                                   this->
                                                                                                                                                                                                                                     FMGL(mEdgeModifyReqWithAR);
                                                                                                                                                                                                                                 x10aux::nullCheck(this121971)->
                                                                                                                                                                                                                                   FMGL(mc);
                                                                                                                                                                                                                             }))
                                                                                                                                                                                                                             ->org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::subpart(
                                                                                                                                                                                                                               reqStartIdx,
                                                                                                                                                                                                                               ((x10_long) ((((x10_long) ((reqEndIdx) - (reqStartIdx)))) + (((x10_long) (((x10_int)1))))))))->size());
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long reqSaveIdx = (__extension__ ({
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121973 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121972 = localsrcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121974;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121973->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121972) < (((x10_long) (((x10_int)0))))) ||
                ((index121972) >= (this121973->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121972), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121974 = (this121973->FMGL(data))[index121972];
        ret121974;
    }))
    ;
    
    //#line 298 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long outIdx = (__extension__ ({
        
        //#line 298 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this121977 =
          this->FMGL(mOutOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index121976 = srcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121978;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this121977->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121976) < (((x10_long) (((x10_int)0))))) ||
                ((index121976) >= (this121977->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121976), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121978 = (this121977->FMGL(data))[index121976];
        ret121978;
    }))
    ;
    
    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77828min122541 = reqStartIdx;
    
    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77828max122542 = reqEndIdx;
    
    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122543;
        for (
             //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122543 = i77828min122541; ((i122543) <= (i77828max122542));
             
             //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122543 = ((x10_long) ((i122543) + (((x10_long)1ll)))))
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long reqIdx122544 = i122543;
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long targetid122523 = (__extension__ ({
                                          
                                          //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                          org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122524 =
                                            this->FMGL(mEdgeModifyReqWithAR);
                                          
                                          //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                          x10_long index122525 =
                                            reqIdx122544;
                                          
                                          //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                          org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122526;
                                          {
                                              
                                              //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                              if (((index122525) < (((x10_long) (((x10_int)0))))) ||
                                                  ((index122525) >= (x10aux::nullCheck(this122524)->
                                                                       FMGL(size))))
                                              {
                                                  
                                                  //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                  if (true)
                                                  {
                                                      
                                                      //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122525), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                  }
                                                  
                                              }
                                              
                                          }
                                          
                                          //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret122526 = (x10aux::nullCheck(this122524)->
                                                         FMGL(mc)->
                                                         FMGL(data))[index122525];
                                          ret122526;
                                      }))
                                      ->FMGL(val1);
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reqIdx122544, reqEndIdx)) &&
                (x10aux::struct_equals(((x10_long) ((targetid122523) & (((x10_long)-8070450532247928833ll)))),
                                       ((x10_long) (((__extension__ ({
                                                         
                                                         //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                                         org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122527 =
                                                           this->
                                                             FMGL(mEdgeModifyReqWithAR);
                                                         
                                                         //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                         x10_long index122528 =
                                                           ((x10_long) ((reqIdx122544) + (((x10_long) (((x10_int)1))))));
                                                         
                                                         //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                         org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122529;
                                                         {
                                                             
                                                             //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                             if (((index122528) < (((x10_long) (((x10_int)0))))) ||
                                                                 ((index122528) >= (x10aux::nullCheck(this122527)->
                                                                                      FMGL(size))))
                                                             {
                                                                 
                                                                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                                 if (true)
                                                                 {
                                                                     
                                                                     //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                                     x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122528), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                 }
                                                                 
                                                             }
                                                             
                                                         }
                                                         
                                                         //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                                         ret122529 =
                                                           (x10aux::nullCheck(this122527)->
                                                              FMGL(mc)->
                                                              FMGL(data))[index122528];
                                                         ret122529;
                                                     }))
                                                     ->FMGL(val1)) & (((x10_long)-8070450532247928833ll)))))))
            {
                
                //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Branch_c
                continue;
            }
            
            //#line 306 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::tuple::Tuple2<x10_boolean, x10_long> search122530 =
              org::scalegraph::util::Algorithm::template linearSearch<x10_long >(
                this->FMGL(mOutVertex), x10::lang::LongRange::_make(outIdx, outend),
                ((x10_long) ((targetid122523) & (((x10_long)-8070450532247928833ll)))));
            
            //#line 307 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
            if (search122530->FMGL(val1)) {
                
                //#line 308 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                outIdx = ((x10_long) ((search122530->FMGL(val2)) + (((x10_long)1ll))));
                
                //#line 327 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals((__extension__ ({
                                               
                                               //#line 372 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                               x10_long l122531 =
                                                 targetid122523;
                                               ((x10_int) (((x10_long) ((((x10_long) ((l122531) & (((x10_long)8070450532247928832ll))))) >> (0x3f & (((x10_int)60)))))));
                                           }))
                                           , ((x10_int)1))))
                {
                    
                    //#line 328 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122507 =
                      this->FMGL(mEdgeModifyReqWithAR);
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    x10_long index122508 = ((x10_long) ((reqSaveIdx =
                      ((x10_long) ((reqSaveIdx) + (((x10_long)1ll))))) - (((x10_long)1ll))));
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> value122509 =
                      (__extension__ ({
                        
                        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc122510 =
                           org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
                        
                        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                        x10_long val122499 = ((x10_long) ((((x10_long) (((__extension__ ({
                                                                             
                                                                             //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                                                             org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122500 =
                                                                               this->
                                                                                 FMGL(mEdgeModifyReqWithAR);
                                                                             
                                                                             //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                                             x10_long index122501 =
                                                                               reqIdx122544;
                                                                             
                                                                             //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                                             org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122502;
                                                                             {
                                                                                 
                                                                                 //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                                                 if (((index122501) < (((x10_long) (((x10_int)0))))) ||
                                                                                     ((index122501) >= (x10aux::nullCheck(this122500)->
                                                                                                          FMGL(size))))
                                                                                 {
                                                                                     
                                                                                     //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                                                     if (true)
                                                                                     {
                                                                                         
                                                                                         //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122501), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                     }
                                                                                     
                                                                                 }
                                                                                 
                                                                             }
                                                                             
                                                                             //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                                                             ret122502 =
                                                                               (x10aux::nullCheck(this122500)->
                                                                                  FMGL(mc)->
                                                                                  FMGL(data))[index122501];
                                                                             ret122502;
                                                                         }))
                                                                         ->
                                                                           FMGL(val1)) & (((x10_long)-8070450532247928833ll))))) | (((x10_long)2305843009213693952ll))));
                        
                        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                        TPMGL(E) val122503 = (__extension__ ({
                                                 
                                                 //#line 330 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122504 =
                                                   this->
                                                     FMGL(mEdgeModifyReqWithAR);
                                                 
                                                 //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                 x10_long index122505 =
                                                   reqIdx122544;
                                                 
                                                 //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122506;
                                                 {
                                                     
                                                     //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                     if (((index122505) < (((x10_long) (((x10_int)0))))) ||
                                                         ((index122505) >= (x10aux::nullCheck(this122504)->
                                                                              FMGL(size))))
                                                     {
                                                         
                                                         //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122505), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                         }
                                                         
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret122506 =
                                                   (x10aux::nullCheck(this122504)->
                                                      FMGL(mc)->
                                                      FMGL(data))[index122505];
                                                 ret122506;
                                             }))
                                             ->FMGL(val2);
                        
                        //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc122510->FMGL(val1) = val122499;
                        
                        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc122510->FMGL(val2) = val122503;
                        alloc122510;
                    }))
                    ;
                    {
                        
                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                        if (((index122508) < (((x10_long) (((x10_int)0))))) ||
                            ((index122508) >= (x10aux::nullCheck(this122507)->
                                                 FMGL(size))))
                        {
                            
                            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122508), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(this122507)->FMGL(mc)->
                       FMGL(data)).set(index122508, value122509);
                } else {
                    
                    //#line 333 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122511 =
                      this->FMGL(mEdgeModifyReqWithAR);
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    x10_long index122512 = ((x10_long) ((reqSaveIdx =
                      ((x10_long) ((reqSaveIdx) + (((x10_long)1ll))))) - (((x10_long)1ll))));
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> value122513 =
                      (__extension__ ({
                        
                        //#line 333 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122514 =
                          this->FMGL(mEdgeModifyReqWithAR);
                        
                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                        x10_long index122515 = reqIdx122544;
                        
                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122516;
                        {
                            
                            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                            if (((index122515) < (((x10_long) (((x10_int)0))))) ||
                                ((index122515) >= (x10aux::nullCheck(this122514)->
                                                     FMGL(size))))
                            {
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122515), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                        ret122516 = (x10aux::nullCheck(this122514)->
                                       FMGL(mc)->FMGL(data))[index122515];
                        ret122516;
                    }))
                    ;
                    {
                        
                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                        if (((index122512) < (((x10_long) (((x10_int)0))))) ||
                            ((index122512) >= (x10aux::nullCheck(this122511)->
                                                 FMGL(size))))
                        {
                            
                            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122512), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(this122511)->FMGL(mc)->
                       FMGL(data)).set(index122512, value122513);
                }
                
            } else 
            //#line 348 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals((__extension__ ({
                                            
                                            //#line 372 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                            x10_long l122532 =
                                              targetid122523;
                                            ((x10_int) (((x10_long) ((((x10_long) ((l122532) & (((x10_long)8070450532247928832ll))))) >> (0x3f & (((x10_int)60)))))));
                                        }))
                                        , ((x10_int)0))))
            {
                
                //#line 349 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122517 =
                  this->FMGL(mEdgeModifyReqWithAR);
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                x10_long index122518 = ((x10_long) ((reqSaveIdx =
                  ((x10_long) ((reqSaveIdx) + (((x10_long)1ll))))) - (((x10_long)1ll))));
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> value122519 =
                  (__extension__ ({
                    
                    //#line 349 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122520 =
                      this->FMGL(mEdgeModifyReqWithAR);
                    
                    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    x10_long index122521 = reqIdx122544;
                    
                    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret122522;
                    {
                        
                        //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                        if (((index122521) < (((x10_long) (((x10_int)0))))) ||
                            ((index122521) >= (x10aux::nullCheck(this122520)->
                                                 FMGL(size))))
                        {
                            
                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122521), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122522 = (x10aux::nullCheck(this122520)->
                                   FMGL(mc)->FMGL(data))[index122521];
                    ret122522;
                }))
                ;
                {
                    
                    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                    if (((index122518) < (((x10_long) (((x10_int)0))))) ||
                        ((index122518) >= (x10aux::nullCheck(this122517)->
                                             FMGL(size))))
                    {
                        
                        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122518), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                (x10aux::nullCheck(this122517)->FMGL(mc)->
                   FMGL(data)).set(index122518, value122519);
            }
            
        }
    }
    
    //#line 354 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
    if (reduceBottom) {
        
        //#line 364 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(this->FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::setSize(
          reqSaveIdx);
        
        //#line 365 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122533 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122534 = ((x10_long) ((localsrcid) + (((x10_long)1ll))));
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value122535 = reqSaveIdx;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122536;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122533->FMGL(data)).isValid())) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122534) < (((x10_long) (((x10_int)0))))) ||
                ((index122534) >= (this122533->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122534), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (this122533->FMGL(data)).set(index122534, value122535);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122536 = value122535;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret122536;
    }
    
    //#line 367 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return ((x10_long) ((reqSaveIdx) - ((__extension__ ({
        
        //#line 367 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122030 =
          this->FMGL(mEdgeModifyReqOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122029 = ((x10_long) ((localsrcid) + (((x10_long)1ll))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122031;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122030->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122029) < (((x10_long) (((x10_int)0))))) ||
                ((index122029) >= (this122030->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122029), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122031 = (this122030->FMGL(data))[index122029];
        ret122031;
    }))
    )));
    
}

//#line 372 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c

//#line 379 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::outEdges(
  x10_long srcid) {
    
    //#line 380 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long len = ((x10_long) (((__extension__ ({
        
        //#line 380 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122034 =
          this->FMGL(mOutOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122033 = ((x10_long) ((srcid) + (((x10_long)1ll))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122035;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122034->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122033) < (((x10_long) (((x10_int)0))))) ||
                ((index122033) >= (this122034->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122033), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122035 = (this122034->FMGL(data))[index122033];
        ret122035;
    }))
    ) - ((__extension__ ({
        
        //#line 380 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122038 =
          this->FMGL(mOutOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122037 = srcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122039;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122038->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122037) < (((x10_long) (((x10_int)0))))) ||
                ((index122037) >= (this122038->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122037), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122039 = (this122038->FMGL(data))[index122037];
        ret122039;
    }))
    )));
    
    //#line 381 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
    if (this->FMGL(mEdgeChanged)) {
        
        //#line 382 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        this->fixModifiedEdges(srcid);
        
        //#line 383 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        this->optimizeReqEdge(srcid);
        
        //#line 384 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        x10_long lenWithDiff = ((x10_long) ((len) + (this->calcEdgeNumDifferential(
                                                       srcid))));
        
        //#line 386 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(this->FMGL(mGetEdgeBuf))->org::scalegraph::util::GrowableMemory<x10_long>::setSize(
          lenWithDiff);
        
        //#line 387 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(this->FMGL(mGetValBuf))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::setSize(
          lenWithDiff);
        
        //#line 388 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        this->updateOutEdge_temp(x10aux::nullCheck(this->
                                                     FMGL(mGetEdgeBuf))->org::scalegraph::util::GrowableMemory<x10_long>::raw(),
                                 x10aux::nullCheck(this->
                                                     FMGL(mGetValBuf))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::raw(),
                                 this->FMGL(mOutVertex)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                   (__extension__ ({
                                       
                                       //#line 391 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::MemoryChunk<x10_long> this122042 =
                                         this->FMGL(mOutOffset);
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index122041 =
                                         srcid;
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret122043;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((this122042->
                                                    FMGL(data)).isValid()))
                                           {
                                               
                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                               }
                                               
                                           }
                                           
                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (((index122041) < (((x10_long) (((x10_int)0))))) ||
                                               ((index122041) >= (this122042->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122041), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret122043 = (this122042->
                                                      FMGL(data))[index122041];
                                       ret122043;
                                   }))
                                   , len), this->FMGL(mOutValue)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                                             (__extension__ ({
                                                 
                                                 //#line 392 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                                 org::scalegraph::util::MemoryChunk<x10_long> this122046 =
                                                   this->
                                                     FMGL(mOutOffset);
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long index122045 =
                                                   srcid;
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long ret122047;
                                                 {
                                                     
                                                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (!((this122046->
                                                              FMGL(data)).isValid()))
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                         }
                                                         
                                                     }
                                                     
                                                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (((index122045) < (((x10_long) (((x10_int)0))))) ||
                                                         ((index122045) >= (this122046->
                                                                              FMGL(data)->
                                                                              FMGL(size))))
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122045), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                         }
                                                         
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret122047 =
                                                   (this122046->
                                                      FMGL(data))[index122045];
                                                 ret122047;
                                             }))
                                             , len), srcid);
        
        //#line 394 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 394 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> > alloc77653 =
               org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >::_alloc();
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> val122545 =
              x10aux::nullCheck(this->FMGL(mGetEdgeBuf))->org::scalegraph::util::GrowableMemory<x10_long>::raw();
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(E)> val122546 =
              x10aux::nullCheck(this->FMGL(mGetValBuf))->org::scalegraph::util::GrowableMemory<TPMGL(E)>::raw();
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc77653->FMGL(val1) = val122545;
            
            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc77653->FMGL(val2) = val122546;
            alloc77653;
        }))
        ;
        
    } else {
        
        //#line 396 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 396 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> > alloc77654 =
               org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> >::_alloc();
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> val122547 =
              this->FMGL(mOutVertex)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                (__extension__ ({
                    
                    //#line 397 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this122548 =
                      this->FMGL(mOutOffset);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122549 = srcid;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122550;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this122548->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122549) < (((x10_long) (((x10_int)0))))) ||
                            ((index122549) >= (this122548->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122549), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122550 = (this122548->FMGL(data))[index122549];
                    ret122550;
                }))
                , len);
            
            //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(E)> val122551 =
              this->FMGL(mOutValue)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
                (__extension__ ({
                    
                    //#line 398 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this122552 =
                      this->FMGL(mOutOffset);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122553 = srcid;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret122554;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this122552->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122553) < (((x10_long) (((x10_int)0))))) ||
                            ((index122553) >= (this122552->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122553), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122554 = (this122552->FMGL(data))[index122553];
                    ret122554;
                }))
                , len);
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc77654->FMGL(val1) = val122547;
            
            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
            alloc77654->FMGL(val2) = val122551;
            alloc77654;
        }))
        ;
        
    }
    
}

//#line 402 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::outEdgesId(
  x10_long srcid) {
    
    //#line 403 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 403 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> > this122063 =
          this->outEdges(srcid);
        this122063->FMGL(val1);
    }))
    ;
    
}

//#line 406 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<TPMGL(E)>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::outEdgesValue(
  x10_long srcid) {
    
    //#line 407 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 407 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<TPMGL(E)> > this122064 =
          this->outEdges(srcid);
        this122064->FMGL(val2);
    }))
    ;
    
}

//#line 410 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::inEdgesId(
  x10_long srcid) {
    
    //#line 411 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long start = (__extension__ ({
        
        //#line 411 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122066 =
          this->FMGL(mInOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122065 = srcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122067;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122066->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122065) < (((x10_long) (((x10_int)0))))) ||
                ((index122065) >= (this122066->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122065), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122067 = (this122066->FMGL(data))[index122065];
        ret122067;
    }))
    ;
    
    //#line 412 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) (((__extension__ ({
        
        //#line 412 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122070 =
          this->FMGL(mInOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122069 = ((x10_long) ((srcid) + (((x10_long) (((x10_int)1))))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122071;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122070->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122069) < (((x10_long) (((x10_int)0))))) ||
                ((index122069) >= (this122070->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122069), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122071 = (this122070->FMGL(data))[index122069];
        ret122071;
    }))
    ) - (start)));
    
    //#line 413 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return this->FMGL(mInVertex)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             start, length);
    
}

//#line 416 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::util::MemoryChunk<TPMGL(E)>
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::inEdgesValue(
  x10_long srcid) {
    
    //#line 417 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long start = (__extension__ ({
        
        //#line 417 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122074 =
          this->FMGL(mInOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122073 = srcid;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122075;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122074->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122073) < (((x10_long) (((x10_int)0))))) ||
                ((index122073) >= (this122074->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122073), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122075 = (this122074->FMGL(data))[index122073];
        ret122075;
    }))
    ;
    
    //#line 418 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long length = ((x10_long) (((__extension__ ({
        
        //#line 418 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this122078 =
          this->FMGL(mInOffset);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index122077 = ((x10_long) ((srcid) + (((x10_long)1ll))));
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122079;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this122078->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122077) < (((x10_long) (((x10_int)0))))) ||
                ((index122077) >= (this122078->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122077), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122079 = (this122078->FMGL(data))[index122077];
        ret122079;
    }))
    ) - (start)));
    
    //#line 419 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return this->FMGL(mInValue)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::subpart(
             start, length);
    
}

//#line 422 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::setOutEdges(
  x10_long srcid, org::scalegraph::util::MemoryChunk<x10_long> id,
  org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 423 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->clearOutEdges(srcid);
    
    //#line 424 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->addOutEdges(id, value);
    
    //#line 425 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 428 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::clearOutEdges(
  x10_long srcid) {
    
    //#line 429 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::setSize(
      (__extension__ ({
          
          //#line 429 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::MemoryChunk<x10_long> this122082 =
            this->FMGL(mEdgeModifyReqOffset);
          
          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
          x10_long index122081 = srcid;
          
          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
          x10_long ret122083;
          {
              
              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
              if (!((this122082->FMGL(data)).isValid())) {
                  
                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                  if (true) {
                      
                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                  }
                  
              }
              
              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
              if (((index122081) < (((x10_long) (((x10_int)0))))) ||
                  ((index122081) >= (this122082->FMGL(data)->
                                       FMGL(size)))) {
                  
                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                  if (true) {
                      
                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122081), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                  }
                  
              }
              
          }
          
          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
          ret122083 = (this122082->FMGL(data))[index122081];
          ret122083;
      }))
      );
    
    //#line 430 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    this->removeOutEdges(this->outEdgesId(srcid));
    
    //#line 431 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 434 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::removeOutEdge(
  x10_long id) {
    
    //#line 435 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    TPMGL(E) defV = (TPMGL(E) )(0);
    
    //#line 436 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::add(
      (__extension__ ({
          
          //#line 436 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc77655 =
             org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
          
          //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
          x10_long val122555 = id;
          
          //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
          TPMGL(E) val122556 = defV;
          
          //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
          alloc77655->FMGL(val1) = val122555;
          
          //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
          alloc77655->FMGL(val2) = val122556;
          alloc77655;
      }))
      );
    
    //#line 437 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 440 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::removeOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id) {
    
    //#line 441 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    TPMGL(E) defV = (TPMGL(E) )(0);
    
    //#line 442 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i77846domain122562 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((id->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 442 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77846max122563 = i77846domain122562->FMGL(max);
    
    //#line 442 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122564;
        for (
             //#line 442 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122564 = ((x10_long)0ll); ((i122564) <= (i77846max122563));
             
             //#line 442 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122564 = ((x10_long) ((i122564) + (((x10_long)1ll)))))
        {
            
            //#line 442 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i122565 = i122564;
            
            //#line 443 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(this->FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::add(
              (__extension__ ({
                  
                  //#line 443 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                  org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc122561 =
                     org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
                  
                  //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                  x10_long val122557 = (__extension__ ({
                      
                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long index122558 = i122565;
                      
                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret122559;
                      {
                          
                          //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((id->FMGL(data)).isValid()))
                          {
                              
                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index122558) < (((x10_long) (((x10_int)0))))) ||
                              ((index122558) >= (id->FMGL(data)->
                                                   FMGL(size))))
                          {
                              
                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122558), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret122559 = (id->FMGL(data))[index122558];
                      ret122559;
                  }))
                  ;
                  
                  //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                  TPMGL(E) val122560 = defV;
                  
                  //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                  alloc122561->FMGL(val1) = val122557;
                  
                  //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                  alloc122561->FMGL(val2) = val122560;
                  alloc122561;
              }))
              );
        }
    }
    
    //#line 445 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 448 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::addOutEdge(
  x10_long id, TPMGL(E) value) {
    
    //#line 449 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::add(
      (__extension__ ({
          
          //#line 449 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc77657 =
             org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
          
          //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
          x10_long val122566 = ((x10_long) ((id) | (((x10_long)1152921504606846976ll))));
          
          //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
          TPMGL(E) val122567 = value;
          
          //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
          alloc77657->FMGL(val1) = val122566;
          
          //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
          alloc77657->FMGL(val2) = val122567;
          alloc77657;
      }))
      );
    
    //#line 450 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 453 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::addOutEdges(
  org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) {
    
    //#line 454 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(id->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   value->org::scalegraph::util::MemoryChunk<TPMGL(E)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 455 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i77865domain122575 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((id->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 455 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77865max122576 = i77865domain122575->FMGL(max);
    
    //#line 455 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122577;
        for (
             //#line 455 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122577 = ((x10_long)0ll); ((i122577) <= (i77865max122576));
             
             //#line 455 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122577 = ((x10_long) ((i122577) + (((x10_long)1ll)))))
        {
            
            //#line 455 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i122578 = i122577;
            
            //#line 456 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(this->FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::add(
              (__extension__ ({
                  
                  //#line 456 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                  org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc122574 =
                     org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
                  
                  //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                  x10_long val122568 = ((x10_long) (((__extension__ ({
                      
                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long index122569 = i122578;
                      
                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret122570;
                      {
                          
                          //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((id->FMGL(data)).isValid()))
                          {
                              
                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index122569) < (((x10_long) (((x10_int)0))))) ||
                              ((index122569) >= (id->FMGL(data)->
                                                   FMGL(size))))
                          {
                              
                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122569), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret122570 = (id->FMGL(data))[index122569];
                      ret122570;
                  }))
                  ) | (((x10_long)1152921504606846976ll))));
                  
                  //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                  TPMGL(E) val122571 = (__extension__ ({
                      
                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long index122572 = i122578;
                      
                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      TPMGL(E) ret122573;
                      {
                          
                          //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((value->FMGL(data)).isValid()))
                          {
                              
                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index122572) < (((x10_long) (((x10_int)0))))) ||
                              ((index122572) >= (value->FMGL(data)->
                                                   FMGL(size))))
                          {
                              
                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122572), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret122573 = (value->FMGL(data))[index122572];
                      ret122573;
                  }))
                  ;
                  
                  //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                  alloc122574->FMGL(val1) = val122568;
                  
                  //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                  alloc122574->FMGL(val2) = val122571;
                  alloc122574;
              }))
              );
        }
    }
    
    //#line 458 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = true;
}

//#line 463 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::fixModifiedEdges(
  x10_long srcid) {
    
    //#line 464 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long localsrcid = ((x10_long) ((srcid) - (this->FMGL(mStartSrcid))));
    
    //#line 465 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> this122579 =
      this->FMGL(mEdgeModifyReqOffset);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index122580 = ((x10_long) ((localsrcid) + (((x10_long)1ll))));
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value122581 = (__extension__ ({
        
        //#line 465 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this122582 =
          this->FMGL(mEdgeModifyReqWithAR);
        x10aux::nullCheck(this122582)->FMGL(size);
    }))
    ;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret122583;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((this122579->FMGL(data)).isValid())) {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index122580) < (((x10_long) (((x10_int)0))))) ||
            ((index122580) >= (this122579->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122580), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (this122579->FMGL(data)).set(index122580, value122581);
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret122583 = value122581;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret122583;
}

//#line 469 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*
  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::org__scalegraph__xpregel__EdgeProvider____this__org__scalegraph__xpregel__EdgeProvider(
  ) {
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::__fieldInitializers76853(
  ) {
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutOffset) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutVertex) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutValue) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInOffset) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInVertex) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInValue) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeModifyReqOffset) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_long> >();
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeModifyReqWithAR) = (x10aux::class_cast_unchecked<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>(X10_NULL));
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mGetEdgeBuf) = (__extension__ ({
        
        //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_long>* alloc77659 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_long> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_long>))) org::scalegraph::util::GrowableMemory<x10_long>()))
        ;
        
        //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc77659)->::org::scalegraph::util::GrowableMemory<x10_long>::_constructor(
          ((x10_long)0ll));
        alloc77659;
    }))
    ;
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mGetValBuf) = (__extension__ ({
        
        //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(E)>* alloc77660 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(E)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(E)>))) org::scalegraph::util::GrowableMemory<TPMGL(E)>()))
        ;
        
        //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc77660)->::org::scalegraph::util::GrowableMemory<TPMGL(E)>::_constructor(
          ((x10_long)0ll));
        alloc77660;
    }))
    ;
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEdgeChanged) = false;
}
template<class TPMGL(E)> const x10aux::serialization_id_t org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mOutOffset));
    buf.write(this->FMGL(mOutVertex));
    buf.write(this->FMGL(mOutValue));
    buf.write(this->FMGL(mInOffset));
    buf.write(this->FMGL(mInVertex));
    buf.write(this->FMGL(mInValue));
    buf.write(this->FMGL(mEdgeModifyReqOffset));
    buf.write(this->FMGL(mEdgeModifyReqWithAR));
    buf.write(this->FMGL(mGetEdgeBuf));
    buf.write(this->FMGL(mGetValBuf));
    buf.write(this->FMGL(mEdgeChanged));
    buf.write(this->FMGL(mStartSrcid));
    
}

template<class TPMGL(E)> x10::lang::Reference* org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>))) org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mOutOffset) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mOutVertex) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mOutValue) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
    FMGL(mInOffset) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mInVertex) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mInValue) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
    FMGL(mEdgeModifyReqOffset) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(mEdgeModifyReqWithAR) = buf.read<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>();
    FMGL(mGetEdgeBuf) = buf.read<org::scalegraph::util::GrowableMemory<x10_long>*>();
    FMGL(mGetValBuf) = buf.read<org::scalegraph::util::GrowableMemory<TPMGL(E)>*>();
    FMGL(mEdgeChanged) = buf.read<x10_boolean>();
    FMGL(mStartSrcid) = buf.read<x10_long>();
}

template<class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<void>::reInitializeEdgeProvider(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list)
{
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 836 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange range122331 = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((numThreads) - (((x10_int)1)))));
    
    //#line 837 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size122327 = ((x10_int) ((((x10_int) ((range122331->
                                                     FMGL(max)) - (range122331->
                                                                     FMGL(min))))) + (((x10_int)1))));
    
    //#line 838 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads122328 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 839 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size122329 = (__extension__ ({
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int a122330 = ((x10_int) ((((x10_int) ((((x10_int) ((size122327) + (nthreads122328)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads122328)));
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a122330) < (((x10_int)1))) ? (((x10_int)1)) : (a122330);
    }))
    ;
    {
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var138 = x10::lang::Runtime::startFinish();
        {
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable122723 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i74176max122324 = ((x10_int) ((nthreads122328) - (((x10_int)1))));
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i122325;
                            for (
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i122325 = ((x10_int)0); ((i122325) <= (i74176max122324));
                                 
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i122325 = ((x10_int) ((i122325) + (((x10_int)1)))))
                            {
                                
                                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i122326 = i122325;
                                
                                //#line 841 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start122318 = (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a122319 = ((x10_int) ((range122331->
                                                                     FMGL(max)) + (((x10_int)1))));
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b122320 = ((x10_int) ((range122331->
                                                                     FMGL(min)) + (((x10_int) ((i122326) * (chunk_size122329))))));
                                    ((a122319) < (b122320))
                                      ? (a122319) : (b122320);
                                }))
                                ;
                                
                                //#line 842 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range122321 =
                                  x10::lang::IntRange::_make(i_start122318, (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a122322 = range122331->
                                                        FMGL(max);
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b122323 = ((x10_int) ((((x10_int) ((i_start122318) + (chunk_size122329)))) - (((x10_int)1))));
                                    ((a122322) < (b122323))
                                      ? (a122322) : (b122323);
                                }))
                                );
                                
                                //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__1<TPMGL(E)>(i_range122321, list))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1225) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1225);
                        {
                            
                            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1226) {
                if (true) {
                    x10::lang::CheckedThrowable* formal122724 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1226);
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable122723 = formal122724;
                    }
                } else
                throw;
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable122723)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable122723))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable122723));
                }
                
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var138);
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable122723)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable122723)))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable122723));
                }
                
            }
            
        }
    }
}
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<void>::updateOutEdge(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* outEdge,
                                                                                                          org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list,
                                                                                                          org::scalegraph::graph::id::IdStruct ids)
{
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ProfilingDB__Timer mtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                         ((x10_int)0),
                                                         ((x10_long) (((x10_int)0))));
    
    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_boolean changed122423 = false;
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i77681domain122338 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((list->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77681max122339 = i77681domain122338->FMGL(max);
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122340;
        for (
             //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122340 = ((x10_long)0ll); ((i122340) <= (i77681max122339));
             
             //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122340 = ((x10_long) ((i122340) + (((x10_long)1ll)))))
        {
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i122341 = i122340;
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* pkg122332 = x10aux::makeStringLit("updateOutEdge");
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Utils.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* str122333 = x10::lang::String::__plus(x10aux::makeStringLit(""), x10aux::nullCheck((__extension__ ({
                                                                                                    
                                                                                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                                    x10_long index122334 =
                                                                                                      i122341;
                                                                                                    
                                                                                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                                    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122335;
                                                                                                    {
                                                                                                        
                                                                                                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                                        if (!((list->
                                                                                                                 FMGL(data)).isValid()))
                                                                                                        {
                                                                                                            
                                                                                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                                            if (true)
                                                                                                            {
                                                                                                                
                                                                                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                                            }
                                                                                                            
                                                                                                        }
                                                                                                        
                                                                                                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                                        if (((index122334) < (((x10_long) (((x10_int)0))))) ||
                                                                                                            ((index122334) >= (list->
                                                                                                                                 FMGL(data)->
                                                                                                                                 FMGL(size))))
                                                                                                        {
                                                                                                            
                                                                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                                            if (true)
                                                                                                            {
                                                                                                                
                                                                                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122334), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                                            }
                                                                                                            
                                                                                                        }
                                                                                                        
                                                                                                    }
                                                                                                    
                                                                                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                    ret122335 =
                                                                                                      (list->
                                                                                                         FMGL(data))[index122334];
                                                                                                    ret122335;
                                                                                                }))
                                                                                                )->
                                                                                                  FMGL(mEdgeChanged));
            
            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
            if (x10aux::nullCheck((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index122336 = i122341;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122337;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((list->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index122336) < (((x10_long) (((x10_int)0))))) ||
                            ((index122336) >= (list->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122336), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret122337 = (list->FMGL(data))[index122336];
                    ret122337;
                }))
                )->FMGL(mEdgeChanged)) {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
                changed122423 = true;
                
                //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.Branch_c
                break;
            }
            
        }
    }
    
    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10If_c
    if (!(changed122423)) {
        
        //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long numVertexes = (__extension__ ({
        ids->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((numThreads) + (((x10_int) (((x10_long)1ll)))))))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> outOffset =
      x10aux::nullCheck(outEdge)->FMGL(offsets);
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> outVertex =
      x10aux::nullCheck(outEdge)->FMGL(vertexes);
    
    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> outValue =
      x10aux::nullCheck(outEdge)->FMGL(value);
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newOffset =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((numVertexes) + (((x10_long)1ll)))), ((x10_int)0), false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret122424;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((newOffset->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (newOffset->
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
    (newOffset->FMGL(data)).set(((x10_int)0), ((x10_long)0ll));
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret122424 = ((x10_long)0ll);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret122424;
    
    //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__2<TPMGL(V),TPMGL(E)>(list, outOffset, newOffset, offsetPerThread))));
    
    //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int i77719max122425 = ((x10_int) ((numThreads) - (((x10_int)1))));
    
    //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_int i122426;
        for (
             //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122426 = ((x10_int)0); ((i122426) <= (i77719max122425));
             
             //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122426 = ((x10_int) ((i122426) + (((x10_int)1)))))
        {
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int i122427 = i122426;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x122373 =
              offsetPerThread;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int y122374 = ((x10_int) ((i122427) + (((x10_int) (((x10_long)1ll))))));
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long z122375 = (__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index122376 = i122427;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122377;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((offsetPerThread->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122376) < (((x10_int)0))) ||
                        ((((x10_long) (index122376))) >= (offsetPerThread->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122376), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122377 = (offsetPerThread->FMGL(data))[index122376];
                ret122377;
            }))
            ;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long ret122378;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long r122370 = ((x10_long) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index122371 = y122374;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122372;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x122373->FMGL(data)).isValid()))
                    {
                        
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
                    if (((index122371) < (((x10_int)0))) ||
                        ((((x10_long) (index122371))) >= (x122373->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122371), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122372 = (x122373->FMGL(data))[index122371];
                ret122372;
            }))
            ) + (z122375)));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index122367 = y122374;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value122368 = r122370;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret122369;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x122373->FMGL(data)).isValid())) {
                    
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
                if (((index122367) < (((x10_int)0))) || ((((x10_long) (index122367))) >= (x122373->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122367), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x122373->FMGL(data)).set(index122367, value122368);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122369 = value122368;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret122369;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
            ret122378 = r122370;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
            ret122378;
        }
    }
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__3<TPMGL(V),TPMGL(E)>(offsetPerThread, newOffset))));
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index122428 = numVertexes;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value122429 = (__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index122430 = numThreads;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122431;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((offsetPerThread->FMGL(data)).isValid()))
            {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122430) < (((x10_int)0))) || ((((x10_long) (index122430))) >= (offsetPerThread->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122430), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122431 = (offsetPerThread->FMGL(data))[index122430];
        ret122431;
    }))
    ;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret122432;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((newOffset->FMGL(data)).isValid())) {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index122428) < (((x10_long) (((x10_int)0))))) ||
            ((index122428) >= (newOffset->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122428), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (newOffset->FMGL(data)).set(index122428, value122429);
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret122432 = value122429;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret122432;
    
    //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long newNumEdgesNum = (__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index121816 = numThreads;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret121817;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((offsetPerThread->FMGL(data)).isValid()))
            {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121816) < (((x10_int)0))) || ((((x10_long) (index121816))) >= (offsetPerThread->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121816), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121817 = (offsetPerThread->FMGL(data))[index121816];
        ret121817;
    }))
    ;
    
    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newVertex =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(newNumEdgesNum, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue =
      org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make(newNumEdgesNum, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)3));
    }
    
    //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__4<TPMGL(V),TPMGL(E)>(list, newOffset, outOffset, newVertex, newValue, outVertex, outValue, offsetPerThread))));
    {
        
        //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)4));
    }
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (outOffset->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (outVertex->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (outValue->FMGL(data)).del();
    
    //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(outEdge)->FMGL(offsets) = newOffset;
    
    //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(outEdge)->FMGL(vertexes) = newVertex;
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(outEdge)->FMGL(value) = newValue;
}
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::EdgeProvider<void>::updateInEdge(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* inEdge,
                                                                                                         org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list,
                                                                                                         org::scalegraph::graph::id::IdStruct ids,
                                                                                                         org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > reqOffs,
                                                                                                         org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> reqs)
{
    
    //#line 478 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* arrat =  ((new (memset(x10aux::alloc<x10::array::Array<x10_long> >(), 0, sizeof(x10::array::Array<x10_long>))) x10::array::Array<x10_long>()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg122584 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg122584)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((((x10_int)0)) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg122584);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(size) = ((x10_int)0);
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(layout_min0) = arrat->FMGL(layout_stride1) =
      arrat->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    arrat->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_long >(((x10_int)0), 8, false, true);
    
    //#line 479 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > tempReqOff =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::_make((__extension__ ({
        list->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> tempReq =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* >::_make((__extension__ ({
        list->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 481 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i77884domain122702 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((list->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 481 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77884max122703 = i77884domain122702->FMGL(max);
    
    //#line 481 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122704;
        for (
             //#line 481 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122704 = ((x10_long)0ll); ((i122704) <= (i77884max122703));
             
             //#line 481 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122704 = ((x10_long) ((i122704) + (((x10_long)1ll)))))
        {
            
            //#line 481 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i122705 = i122704;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122585 = i122705;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> value122586 =
              x10aux::nullCheck((__extension__ ({
                  
                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  x10_long index122587 = i122705;
                  
                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122588;
                  {
                      
                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (!((list->FMGL(data)).isValid()))
                      {
                          
                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                          }
                          
                      }
                      
                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (((index122587) < (((x10_long) (((x10_int)0))))) ||
                          ((index122587) >= (list->FMGL(data)->
                                               FMGL(size))))
                      {
                          
                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122587), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                          }
                          
                      }
                      
                  }
                  
                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                  ret122588 = (list->FMGL(data))[index122587];
                  ret122588;
              }))
              )->FMGL(mEdgeModifyReqOffset);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> ret122589;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((tempReqOff->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index122585) < (((x10_long) (((x10_int)0))))) ||
                    ((index122585) >= (tempReqOff->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122585), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (tempReqOff->FMGL(data)).set(index122585, value122586);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122589 = value122586;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret122589;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index122590 = i122705;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* value122591 =
              x10aux::nullCheck((__extension__ ({
                  
                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  x10_long index122592 = i122705;
                  
                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122593;
                  {
                      
                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (!((list->FMGL(data)).isValid()))
                      {
                          
                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                          }
                          
                      }
                      
                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (((index122592) < (((x10_long) (((x10_int)0))))) ||
                          ((index122592) >= (list->FMGL(data)->
                                               FMGL(size))))
                      {
                          
                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122592), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                          }
                          
                      }
                      
                  }
                  
                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                  ret122593 = (list->FMGL(data))[index122592];
                  ret122593;
              }))
              )->FMGL(mEdgeModifyReqWithAR);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* ret122594;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((tempReq->FMGL(data)).isValid())) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index122590) < (((x10_long) (((x10_int)0))))) ||
                    ((index122590) >= (tempReq->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122590), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (tempReq->FMGL(data)).set(index122590, value122591);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122594 = value122591;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret122594;
            
            //#line 485 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122595 = i122705;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122596;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((list->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122595) < (((x10_long) (((x10_int)0))))) ||
                        ((index122595) >= (list->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122595), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122596 = (list->FMGL(data))[index122595];
                ret122596;
            }))
            )->FMGL(mEdgeModifyReqOffset) = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122597 = i122705;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> ret122598;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((reqOffs->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122597) < (((x10_long) (((x10_int)0))))) ||
                        ((index122597) >= (reqOffs->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122597), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122598 = (reqOffs->FMGL(data))[index122597];
                ret122598;
            }))
            ;
            
            //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122599 = i122705;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122600;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((list->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122599) < (((x10_long) (((x10_int)0))))) ||
                        ((index122599) >= (list->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122599), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122600 = (list->FMGL(data))[index122599];
                ret122600;
            }))
            )->FMGL(mEdgeModifyReqWithAR) = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122601 = i122705;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* ret122602;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((reqs->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122601) < (((x10_long) (((x10_int)0))))) ||
                        ((index122601) >= (reqs->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122601), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122602 = (reqs->FMGL(data))[index122601];
                ret122602;
            }))
            ;
        }
    }
    
    //#line 489 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 490 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long numVertexes = (__extension__ ({
        ids->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 491 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsetPerThread =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((numThreads) + (((x10_int) (((x10_long)1ll)))))))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 493 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> inOffset =
      x10aux::nullCheck(inEdge)->FMGL(offsets);
    
    //#line 494 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> inVertex =
      x10aux::nullCheck(inEdge)->FMGL(vertexes);
    
    //#line 495 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> inValue =
      (x10aux::struct_equals((__extension__ ({
                                 
                                 //#line 495 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                 org::scalegraph::util::MemoryChunk<x10_long> this122143 =
                                   x10aux::nullCheck(inEdge)->
                                     FMGL(vertexes);
                                 this122143->FMGL(data)->
                                   FMGL(size);
                             }))
                             , (__extension__ ({
                                 
                                 //#line 495 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                 org::scalegraph::util::MemoryChunk<TPMGL(E)> this122144 =
                                   x10aux::nullCheck(inEdge)->
                                     FMGL(value);
                                 this122144->FMGL(data)->
                                   FMGL(size);
                             }))
                             )) ? (x10aux::nullCheck(inEdge)->
                                     FMGL(value)) : (org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make((__extension__ ({
                                                         
                                                         //#line 495 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
                                                         org::scalegraph::util::MemoryChunk<x10_long> this122145 =
                                                           x10aux::nullCheck(inEdge)->
                                                             FMGL(vertexes);
                                                         this122145->
                                                           FMGL(data)->
                                                           FMGL(size);
                                                     }))
                                                     , 0, false, (x10_byte*)(void*)__FILE__, __LINE__));
    
    //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newOffset =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((numVertexes) + (((x10_long)1ll)))), ((x10_int)0), false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret122706;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((newOffset->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (newOffset->
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
    (newOffset->FMGL(data)).set(((x10_int)0), ((x10_long)0ll));
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret122706 = ((x10_long)0ll);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret122706;
    
    //#line 500 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__5<TPMGL(V),TPMGL(E)>(list, inOffset, newOffset, offsetPerThread))));
    
    //#line 513 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_int i77922max122707 = ((x10_int) ((numThreads) - (((x10_int)1))));
    
    //#line 513 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_int i122708;
        for (
             //#line 513 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122708 = ((x10_int)0); ((i122708) <= (i77922max122707));
             
             //#line 513 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122708 = ((x10_int) ((i122708) + (((x10_int)1)))))
        {
            
            //#line 513 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int i122709 = i122708;
            
            //#line 514 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x122634 =
              offsetPerThread;
            
            //#line 514 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_int y122635 = ((x10_int) ((i122709) + (((x10_int) (((x10_long)1ll))))));
            
            //#line 514 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long z122636 = (__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index122637 = i122709;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122638;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((offsetPerThread->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122637) < (((x10_int)0))) ||
                        ((((x10_long) (index122637))) >= (offsetPerThread->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122637), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122638 = (offsetPerThread->FMGL(data))[index122637];
                ret122638;
            }))
            ;
            
            //#line 514 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long ret122639;
            
            //#line 514 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long r122631 = ((x10_long) (((__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index122632 = y122635;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret122633;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((x122634->FMGL(data)).isValid()))
                    {
                        
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
                    if (((index122632) < (((x10_int)0))) ||
                        ((((x10_long) (index122632))) >= (x122634->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122632), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122633 = (x122634->FMGL(data))[index122632];
                ret122633;
            }))
            ) + (z122636)));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index122628 = y122635;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value122629 = r122631;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret122630;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((x122634->FMGL(data)).isValid())) {
                    
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
                if (((index122628) < (((x10_int)0))) || ((((x10_long) (index122628))) >= (x122634->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122628), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (x122634->FMGL(data)).set(index122628, value122629);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret122630 = value122629;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret122630;
            
            //#line 514 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
            ret122639 = r122631;
            
            //#line 514 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Local_c
            ret122639;
        }
    }
    
    //#line 516 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__6<TPMGL(V),TPMGL(E)>(offsetPerThread, newOffset))));
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index122710 = numVertexes;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value122711 = (__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index122712 = numThreads;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122713;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((offsetPerThread->FMGL(data)).isValid()))
            {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122712) < (((x10_int)0))) || ((((x10_long) (index122712))) >= (offsetPerThread->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122712), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122713 = (offsetPerThread->FMGL(data))[index122712];
        ret122713;
    }))
    ;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret122714;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((newOffset->FMGL(data)).isValid())) {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index122710) < (((x10_long) (((x10_int)0))))) ||
            ((index122710) >= (newOffset->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122710), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (newOffset->FMGL(data)).set(index122710, value122711);
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret122714 = value122711;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret122714;
    
    //#line 522 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long newNumEdgesNum = (__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index122246 = numThreads;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret122247;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((offsetPerThread->FMGL(data)).isValid()))
            {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index122246) < (((x10_int)0))) || ((((x10_long) (index122246))) >= (offsetPerThread->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122246), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret122247 = (offsetPerThread->FMGL(data))[index122246];
        ret122247;
    }))
    ;
    
    //#line 523 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newVertex =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(newNumEdgesNum, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 524 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> newValue =
      org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make(newNumEdgesNum, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 527 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_EdgeProvider__closure__7<TPMGL(V),TPMGL(E)>(list, newOffset, inOffset, newVertex, newValue, inVertex, inValue, offsetPerThread))));
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (inOffset->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (inVertex->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (inValue->FMGL(data)).del();
    
    //#line 553 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(inEdge)->FMGL(offsets) = newOffset;
    
    //#line 554 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(inEdge)->FMGL(vertexes) = newVertex;
    
    //#line 555 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(inEdge)->FMGL(value) = newValue;
    
    //#line 558 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i77996domain122715 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((list->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 558 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
    x10_long i77996max122716 = i77996domain122715->FMGL(max);
    
    //#line 558 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": polyglot.ast.For_c
    {
        x10_long i122717;
        for (
             //#line 558 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
             i122717 = ((x10_long)0ll); ((i122717) <= (i77996max122716));
             
             //#line 558 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i122717 = ((x10_long) ((i122717) + (((x10_long)1ll)))))
        {
            
            //#line 558 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": x10.ast.X10LocalDecl_c
            x10_long i122718 = i122717;
            
            //#line 559 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122694 = i122718;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122695;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((list->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122694) < (((x10_long) (((x10_int)0))))) ||
                        ((index122694) >= (list->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122694), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122695 = (list->FMGL(data))[index122694];
                ret122695;
            }))
            )->FMGL(mEdgeModifyReqOffset) = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122696 = i122718;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> ret122697;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((tempReqOff->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122696) < (((x10_long) (((x10_int)0))))) ||
                        ((index122696) >= (tempReqOff->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122696), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122697 = (tempReqOff->FMGL(data))[index122696];
                ret122697;
            }))
            ;
            
            //#line 560 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/EdgeProvider.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122698 = i122718;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret122699;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((list->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122698) < (((x10_long) (((x10_int)0))))) ||
                        ((index122698) >= (list->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122698), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122699 = (list->FMGL(data))[index122698];
                ret122699;
            }))
            )->FMGL(mEdgeModifyReqWithAR) = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index122700 = i122718;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* ret122701;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((tempReq->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index122700) < (((x10_long) (((x10_int)0))))) ||
                        ((index122700) >= (tempReq->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index122700), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret122701 = (tempReq->FMGL(data))[index122700];
                ret122701;
            }))
            ;
        }
    }
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_EDGEPROVIDER_H_NODEPS

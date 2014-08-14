#ifndef __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H
#define __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_NODEPS
#include <org/scalegraph/graph/VertexTranslatorBase.h>
#undef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_NODEPS
namespace x10 { namespace lang { 
class Boolean;
} } 
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
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime__Worker;
} } 
namespace x10 { namespace lang { 
class Thread;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Pinned;
} } 
namespace org { namespace scalegraph { namespace graph { 

template<class TPMGL(T)> class VertexTranslator;
template <> class VertexTranslator<void>;
template<class TPMGL(T)> class VertexTranslator : public org::scalegraph::graph::VertexTranslatorBase
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10::util::Team* team__);
    
    virtual org::scalegraph::util::MemoryChunk<x10_long> translateWithAll(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, x10_boolean withPut) = 0;
    virtual org::scalegraph::graph::VertexTranslator<TPMGL(T)>* org__scalegraph__graph__VertexTranslator____this__org__scalegraph__graph__VertexTranslator(
      );
    
    // Serialization
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::graph::VertexTranslator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::graph::VertexTranslator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::graph::VertexTranslatorBase>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.graph.VertexTranslator";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class VertexTranslator<void> : public org::scalegraph::graph::VertexTranslatorBase
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_boolean FMGL(debug);
    
    static void debugln(x10::lang::String* str);
    
    template<class TPMGL(T)> static org::scalegraph::util::DistMemoryChunk<x10_long>
      translate(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator,
                org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices,
                x10_boolean withPut);
    
    template<class TPMGL(T)> static org::scalegraph::util::DistMemoryChunk<x10_long>
      translate(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator,
                org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices);
    
    template<class TPMGL(T)> static org::scalegraph::util::DistMemoryChunk<x10_long>
      putAndTranslate(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator,
                      org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices);
    
    static void FMGL(debug__do_init)();
    static void FMGL(debug__init)();
    static volatile x10aux::StaticInitController::status FMGL(debug__status);
    static x10::lang::CheckedThrowable* FMGL(debug__exception);
    static x10_boolean FMGL(debug__get)();
    
};

} } } 
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H

namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class VertexTranslator;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
#include <org/scalegraph/graph/VertexTranslatorBase.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/Timer.h>
#include <x10/lang/Long.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime__Worker.h>
#include <x10/lang/Thread.h>
#include <x10/compiler/Inline.h>
#include <x10/util/Team.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Pinned.h>
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_GENERICS
inline x10_boolean org::scalegraph::graph::VertexTranslator<void>::FMGL(debug__get)() {
    if (FMGL(debug__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(debug__init)();
    }
    return org::scalegraph::graph::VertexTranslator<void>::FMGL(debug);
}

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_GENERICS
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_IMPLEMENTATION
#include <org/scalegraph/graph/VertexTranslator.h>

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Try_c
        try {
            
            //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
            return x10aux::nullCheck((x10aux::class_cast<org::scalegraph::graph::VertexTranslator<TPMGL(T)>*>(translator->x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>::__apply())))->translateWithAll(
                     vertices->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply(),
                     withPut);
            
        }
        catch (x10::lang::CheckedThrowable* __exc1699) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc1699);
                {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                    
                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(e)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices;
    x10_boolean withPut;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->translator);
        buf.write(this->vertices);
        buf.write(this->withPut);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> that_translator = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_vertices = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        x10_boolean that_withPut = buf.read<x10_boolean>();
        org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >(that_translator, that_vertices, that_withPut);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__closure__1(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices, x10_boolean withPut) : translator(translator), vertices(vertices), withPut(withPut) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:61-70";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__CLOSURE__1_CLOSURE

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_constructor(
                           x10::util::Team* team__) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
      team__);
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.AssignPropertyCall_c
    
}


//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c

//#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c

//#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c

//#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator<TPMGL(T)>*
  org::scalegraph::graph::VertexTranslator<TPMGL(T)>::org__scalegraph__graph__VertexTranslator____this__org__scalegraph__graph__VertexTranslator(
  ) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return this;
    
}
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslatorBase::_serialize_body(buf);
    
}

template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslatorBase::_deserialize_body(buf);
    
}

template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator<void>::translate(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator,
                                                            org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices,
                                                            x10_boolean withPut)
{
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return org::scalegraph::util::DistMemoryChunk<void>::template make<x10_long >(
             x10aux::nullCheck(x10aux::nullCheck(translator->x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>::__apply())->
                                 FMGL(team))->placeGroup(),
             reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__closure__1<TPMGL(T)>(translator, vertices, withPut))));
    
}
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator<void>::translate(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator,
                                                            org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices)
{
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::VertexTranslator<void>::template translate<TPMGL(T) >(
             translator, vertices, false);
    
}
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator<void>::putAndTranslate(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> translator,
                                                                  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertices)
{
    
    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::VertexTranslator<void>::template translate<TPMGL(T) >(
             translator, vertices, true);
    
}
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS

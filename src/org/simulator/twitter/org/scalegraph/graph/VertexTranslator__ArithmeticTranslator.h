#ifndef __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H
#define __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
#include <org/scalegraph/graph/VertexTranslator.h>
#undef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace org { namespace scalegraph { namespace graph { 
class VertexTranslatorBase;
} } } 
namespace org { namespace scalegraph { namespace graph { 

template<class TPMGL(T)> class VertexTranslator__ArithmeticTranslator;
template <> class VertexTranslator__ArithmeticTranslator<void>;
template<class TPMGL(T)> class VertexTranslator__ArithmeticTranslator : public org::scalegraph::graph::VertexTranslator<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10::util::Team* team__);
    
    static org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* _make(
             x10::util::Team* team__);
    
    virtual x10_boolean isTranslator();
    virtual x10_long sizeOfDictionary();
    x10_long toLong(TPMGL(T) v);
    virtual org::scalegraph::util::MemoryChunk<x10_long> translateWithAll(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> vertexes,
      x10_boolean withPut);
    virtual org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>*
      org__scalegraph__graph__VertexTranslator__ArithmeticTranslator____this__org__scalegraph__graph__VertexTranslator__ArithmeticTranslator(
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

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::graph::VertexTranslator<TPMGL(T)> >()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.graph.VertexTranslator.ArithmeticTranslator";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class VertexTranslator__ArithmeticTranslator<void> : public org::scalegraph::graph::VertexTranslator<void>
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H

namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class VertexTranslator__ArithmeticTranslator;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_NODEPS
#include <org/scalegraph/graph/VertexTranslator.h>
#include <x10/util/Team.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Native.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Math.h>
#include <org/scalegraph/graph/VertexTranslatorBase.h>
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_GENERICS
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_IMPLEMENTATION
#include <org/scalegraph/graph/VertexTranslator__ArithmeticTranslator.h>

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long>::template itable <org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 285 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long tmpMaxId = ((x10_long)0ll);
        
        //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i49386domain49483 = r;
        
        //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49386min49484 = i49386domain49483->FMGL(min);
        
        //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49386max49485 = i49386domain49483->FMGL(max);
        
        //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
        {
            x10_long i49486;
            for (
                 //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                 i49486 = i49386min49484; ((i49486) <= (i49386max49485));
                 
                 //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                 i49486 = ((x10_long) ((i49486) + (((x10_long)1ll))))) {
                
                //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long i49487 = i49486;
                
                //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long v49482 = saved_this->toLong(vertexes->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                       i49487));
                
                //#line 288 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                translated->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i49487, v49482);
                
                //#line 289 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
                if (((tmpMaxId) < (v49482))) {
                    
                    //#line 289 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                    tmpMaxId = v49482;
                }
                
            }
        }
        
        //#line 291 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
        return tmpMaxId;
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> vertexes;
    org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vertexes);
        buf.write(this->saved_this);
        buf.write(this->translated);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_vertexes = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >(that_vertexes, that_saved_this, that_translated);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8(org::scalegraph::util::MemoryChunk<TPMGL(T)> vertexes, org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<x10_long> translated) : vertexes(vertexes), saved_this(saved_this), translated(translated) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:284-292";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long>::template itable <org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long a, x10_long b) {
        
        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
        return x10::lang::Math::max(a, b);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:293";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR__CLOSURE__9_CLOSURE

//#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_constructor(
                           x10::util::Team* team__) {
    
    //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_constructor(
      team__);
    
    //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.AssignPropertyCall_c
    
}
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_make(
                           x10::util::Team* team__) {
    org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>))) org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>();
    this_->_constructor(team__);
    return this_;
}



//#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::isTranslator(
  ) {
    
    //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 272 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::sizeOfDictionary(
  ) {
    
    //#line 272 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return ((x10_long)0ll);
    
}

//#line 274 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::toLong(
  TPMGL(T) v){
    return x10_long(v);
}

//#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::translateWithAll(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertexes, x10_boolean withPut) {
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> translated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(vertexes->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 284 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long localMaxId = org::scalegraph::util::Parallel::template reduce<x10_long >(
                            vertexes->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                            reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(sizeof(org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T)>(vertexes, this, translated))),
                            reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(sizeof(org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T)>())));
    
    //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
    if (withPut) {
        
        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(maxVertexID) = x10::lang::Math::max(x10aux::nullCheck(this->
                                                                           FMGL(team))->reduce(
                                                         this->
                                                           FMGL(teamRank),
                                                         ((x10_int)0),
                                                         localMaxId,
                                                         x10::util::Team::
                                                           FMGL(MAX__get)()),
                                                       this->
                                                         FMGL(maxVertexID));
    }
    
    //#line 298 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 267 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>*
  org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::org__scalegraph__graph__VertexTranslator__ArithmeticTranslator____this__org__scalegraph__graph__VertexTranslator__ArithmeticTranslator(
  ) {
    
    //#line 267 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return this;
    
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_serialize_body(buf);
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>))) org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_deserialize_body(buf);
    
}

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR_H_NODEPS

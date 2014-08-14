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
template<class TPMGL(T)> class MemoryChunkData;
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
#include <org/scalegraph/util/MemoryChunkData.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
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
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long tmpMaxId = ((x10_long)0ll);
        
        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i91859domain130462 = r;
        
        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i91859min130463 = i91859domain130462->FMGL(min);
        
        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i91859max130464 = i91859domain130462->FMGL(max);
        
        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
        {
            x10_long i130465;
            for (
                 //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                 i130465 = i91859min130463; ((i130465) <= (i91859max130464));
                 
                 //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                 i130465 = ((x10_long) ((i130465) + (((x10_long)1ll))))) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long i130466 = i130465;
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long v130459 = saved_this->toLong((__extension__ ({
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          x10_long index130460 =
                                                            i130466;
                                                          
                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                          TPMGL(T) ret130461;
                                                          {
                                                              
                                                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                              if (!((vertexes->
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
                                                              if (((index130460) < (((x10_long) (((x10_int)0))))) ||
                                                                  ((index130460) >= (vertexes->
                                                                                       FMGL(data)->
                                                                                       FMGL(size))))
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (true)
                                                                  {
                                                                      
                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index130460), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                  }
                                                                  
                                                              }
                                                              
                                                          }
                                                          
                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret130461 =
                                                            (vertexes->
                                                               FMGL(data))[index130460];
                                                          ret130461;
                                                      }))
                                                      );
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index130456 = i130466;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value130457 = v130459;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret130458;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((translated->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index130456) < (((x10_long) (((x10_int)0))))) ||
                        ((index130456) >= (translated->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index130456), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (translated->FMGL(data)).set(index130456, value130457);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret130458 = value130457;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret130458;
                
                //#line 289 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
                if (((tmpMaxId) < (v130459))) {
                    
                    //#line 289 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                    tmpMaxId = v130459;
                }
                
            }
        }
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
        return tmpMaxId;
        
    }
    
    // captured environment
    org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> vertexes;
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->vertexes);
        buf.write(this->translated);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_vertexes = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T) >(that_saved_this, that_vertexes, that_translated);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8(org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<TPMGL(T)> vertexes, org::scalegraph::util::MemoryChunk<x10_long> translated) : saved_this(saved_this), vertexes(vertexes), translated(translated) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:284-292";
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
        
        //#line 293 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a130243 = a;
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long b130244 = b;
            ((a130243) < (b130244)) ? (b130244) : (a130243);
        }))
        ;
        
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:293";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >, &org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__ARITHMETICTRANSLATOR__CLOSURE__9_CLOSURE

//#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_constructor(
                           x10::util::Team* team__) {
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::VertexTranslator<TPMGL(T)>* this130454 =
      this;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team__130455 = team__;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this130454)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
      team__130455);
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.AssignPropertyCall_c
    
}
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::_make(
                           x10::util::Team* team__) {
    org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>))) org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>();
    this_->_constructor(team__);
    return this_;
}



//#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::isTranslator(
  ) {
    
    //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::sizeOfDictionary(
  ) {
    
    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return ((x10_long)0ll);
    
}

//#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::toLong(
  TPMGL(T) v){
    return x10_long(v);
}

//#line 282 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::translateWithAll(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertexes, x10_boolean withPut) {
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> translated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        vertexes->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long localMaxId = org::scalegraph::util::Parallel::template reduce<x10_long >(
                            (__extension__ ({
                                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertexes->
                                                                                             FMGL(data)->
                                                                                             FMGL(size)) - (((x10_long)1ll)))));
                            }))
                            , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(sizeof(org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__8<TPMGL(T)>(this, vertexes, translated))),
                            reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(sizeof(org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__ArithmeticTranslator__closure__9<TPMGL(T)>())));
    
    //#line 294 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
    if (withPut) {
        
        //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(maxVertexID) = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a130245 = x10aux::nullCheck(this->FMGL(team))->reduce(
                                 this->FMGL(teamRank), ((x10_int)0),
                                 localMaxId, ((x10_int)9));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long b130246 = this->FMGL(maxVertexID);
            ((a130245) < (b130246)) ? (b130246) : (a130245);
        }))
        ;
    }
    
    //#line 298 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>*
  org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<TPMGL(T)>::org__scalegraph__graph__VertexTranslator__ArithmeticTranslator____this__org__scalegraph__graph__VertexTranslator__ArithmeticTranslator(
  ) {
    
    //#line 267 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
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

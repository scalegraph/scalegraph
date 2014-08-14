/*************************************************/
/* START of VertexTranslator */
#include <org/scalegraph/graph/VertexTranslator.h>

x10aux::RuntimeType org::scalegraph::graph::VertexTranslator<void>::rtt;
x10_boolean org::scalegraph::graph::VertexTranslator<void>::FMGL(debug);
void org::scalegraph::graph::VertexTranslator<void>::FMGL(debug__do_init)() {
    FMGL(debug__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::graph::VertexTranslator<void>.debug");
    x10_boolean __var1535__ = x10aux::class_cast_unchecked<x10_boolean>(true);
    FMGL(debug) = __var1535__;
    FMGL(debug__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::graph::VertexTranslator<void>::FMGL(debug__init)() {
    x10aux::StaticInitController::initField(&FMGL(debug__status), &FMGL(debug__do_init), &FMGL(debug__exception), "org::scalegraph::graph::VertexTranslator<void>.debug");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::graph::VertexTranslator<void>::FMGL(debug__status);
x10::lang::CheckedThrowable* org::scalegraph::graph::VertexTranslator<void>::FMGL(debug__exception);
void org::scalegraph::graph::VertexTranslator<void>::debugln(x10::lang::String* str)
{
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit(""), x10::lang::RuntimeNatives::currentTimeMillis()), x10aux::makeStringLit(":VertexTranslator: ")), x10::lang::Place::_make(x10aux::here)), x10aux::makeStringLit("(")), (__extension__ ({
          x10aux::nullCheck((__extension__ ({
              x10aux::class_cast<x10::lang::Runtime__Worker*>(x10::lang::Thread::currentThread());
          }))
          )->FMGL(workerId);
      }))
      ), x10aux::makeStringLit(")")), str)));
    
    //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->flush();
}

/* END of VertexTranslator */
/*************************************************/
/*************************************************/
/* START of VertexTranslator$HashTranslator */
#include <org/scalegraph/graph/VertexTranslator__HashTranslator.h>

x10aux::RuntimeType org::scalegraph::graph::VertexTranslator__HashTranslator<void>::rtt;

/* END of VertexTranslator$HashTranslator */
/*************************************************/
/*************************************************/
/* START of VertexTranslator$ArithmeticTranslator */
#include <org/scalegraph/graph/VertexTranslator__ArithmeticTranslator.h>

x10aux::RuntimeType org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<void>::rtt;

/* END of VertexTranslator$ArithmeticTranslator */
/*************************************************/
/*************************************************/
/* START of VertexTranslator$NoTraslator */
#include <org/scalegraph/graph/VertexTranslator__NoTraslator.h>

#include <org/scalegraph/graph/VertexTranslator.h>
#include <x10/lang/Long.h>
#include <x10/util/Team.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/graph/VertexTranslatorBase.h>
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long>::itable<org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 310 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long tmpMaxId = ((x10_long)0ll);
        
        //#line 311 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i91878domain130472 = r;
        
        //#line 311 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i91878min130473 = i91878domain130472->FMGL(min);
        
        //#line 311 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i91878max130474 = i91878domain130472->FMGL(max);
        
        //#line 311 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
        {
            x10_long i130475;
            for (
                 //#line 311 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                 i130475 = i91878min130473; ((i130475) <= (i91878max130474));
                 
                 //#line 311 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                 i130475 = ((x10_long) ((i130475) + (((x10_long)1ll))))) {
                
                //#line 311 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long i130476 = i130475;
                
                //#line 312 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long v130469 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index130470 = i130476;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret130471;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((vertexes->FMGL(data)).isValid())) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index130470) < (((x10_long) (((x10_int)0))))) ||
                            ((index130470) >= (vertexes->FMGL(data)->FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index130470), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130471 = (vertexes->FMGL(data))[index130470];
                    ret130471;
                }))
                ;
                
                //#line 313 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
                if (((tmpMaxId) < (v130469))) {
                    
                    //#line 313 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                    tmpMaxId = v130469;
                }
                
            }
        }
        
        //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
        return tmpMaxId;
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> vertexes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vertexes);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10>();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_vertexes = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10* this_ = new (storage) org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10(that_vertexes);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10(org::scalegraph::util::MemoryChunk<x10_long> vertexes) : vertexes(vertexes) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:309-316";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::itable<org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long a, x10_long b) {
        
        //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a130253 = a;
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long b130254 = b;
            ((a130253) < (b130254)) ? (b130254) : (a130253);
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
        org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11>();
        buf.record_reference(storage);
        org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11* this_ = new (storage) org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11();
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:317";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR__CLOSURE__11_CLOSURE

//#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::VertexTranslator__NoTraslator::_constructor(
  x10::util::Team* team__) {
    
    //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::VertexTranslator<x10_long>* this130467 = this;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team__130468 = team__;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this130467)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
      team__130468);
    
    //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::graph::VertexTranslator__NoTraslator* org::scalegraph::graph::VertexTranslator__NoTraslator::_make(
  x10::util::Team* team__) {
    org::scalegraph::graph::VertexTranslator__NoTraslator* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__NoTraslator>(), 0, sizeof(org::scalegraph::graph::VertexTranslator__NoTraslator))) org::scalegraph::graph::VertexTranslator__NoTraslator();
    this_->_constructor(team__);
    return this_;
}



//#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::VertexTranslator__NoTraslator::isTranslator(
  ) {
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 306 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::VertexTranslator__NoTraslator::sizeOfDictionary(
  ) {
    
    //#line 306 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return ((x10_long)0ll);
    
}

//#line 308 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::graph::VertexTranslator__NoTraslator::translateWithAll(
  org::scalegraph::util::MemoryChunk<x10_long> vertexes, x10_boolean withPut) {
    
    //#line 309 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long localMaxId = org::scalegraph::util::Parallel::reduce<x10_long >(
                            (__extension__ ({
                                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertexes->
                                                                                             FMGL(data)->
                                                                                             FMGL(size)) - (((x10_long)1ll)))));
                            }))
                            , reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >(sizeof(org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10)))org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10(vertexes))),
                            reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(sizeof(org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11)))org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11())));
    
    //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
    if (withPut) {
        
        //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(maxVertexID) = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a130255 = x10aux::nullCheck(this->FMGL(team))->reduce(
                                 this->FMGL(teamRank), ((x10_int)0),
                                 localMaxId, ((x10_int)9));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long b130256 = this->FMGL(maxVertexID);
            ((a130255) < (b130256)) ? (b130256) : (a130255);
        }))
        ;
    }
    
    //#line 322 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return vertexes;
    
}

//#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::VertexTranslator__NoTraslator* org::scalegraph::graph::VertexTranslator__NoTraslator::org__scalegraph__graph__VertexTranslator__NoTraslator____this__org__scalegraph__graph__VertexTranslator__NoTraslator(
  ) {
    
    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::graph::VertexTranslator__NoTraslator::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::VertexTranslator__NoTraslator::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::graph::VertexTranslator__NoTraslator::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator<x10_long>::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::graph::VertexTranslator__NoTraslator::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator__NoTraslator* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__NoTraslator>(), 0, sizeof(org::scalegraph::graph::VertexTranslator__NoTraslator))) org::scalegraph::graph::VertexTranslator__NoTraslator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::graph::VertexTranslator__NoTraslator::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator<x10_long>::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::graph::VertexTranslator__NoTraslator::rtt;
void org::scalegraph::graph::VertexTranslator__NoTraslator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::graph::VertexTranslator<x10_long> >()};
    rtt.initStageTwo("org.scalegraph.graph.VertexTranslator.NoTraslator",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long>::itable<org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10>org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10::__apply, &org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, x10_long> >, &org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__NoTraslator__closure__10::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::itable<org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11>org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11::__apply, &org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >, &org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__NoTraslator__closure__11::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of VertexTranslator$NoTraslator */
/*************************************************/

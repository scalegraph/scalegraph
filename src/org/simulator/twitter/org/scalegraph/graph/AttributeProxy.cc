/*************************************************/
/* START of AttributeProxy */
#include <org/scalegraph/graph/AttributeProxy.h>

#include <org/scalegraph/graph/Graph.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/id/Type.h>
#include <org/scalegraph/graph/AttributeProxy__ProxyImpl.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Short.h>
#include <x10/lang/Float.h>
#include <x10/lang/Double.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Char.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/IllegalOperationException.h>

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c

//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::AttributeProxy* org::scalegraph::graph::AttributeProxy::make(
  x10_int typeId) {
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Switch_c
    switch (typeId) {
        
        //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 1/*org::scalegraph::id::Type::FMGL(Boolean__get)()*/: ;
        {
            
            //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_boolean>::_make();
            
        }
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 2/*org::scalegraph::id::Type::FMGL(Byte__get)()*/: ;
        {
            
            //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_byte>::_make();
            
        }
        //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 3/*org::scalegraph::id::Type::FMGL(Short__get)()*/: ;
        {
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_short>::_make();
            
        }
        //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 4/*org::scalegraph::id::Type::FMGL(Int__get)()*/: ;
        {
            
            //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_int>::_make();
            
        }
        //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 5/*org::scalegraph::id::Type::FMGL(Long__get)()*/: ;
        {
            
            //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_long>::_make();
            
        }
        //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 6/*org::scalegraph::id::Type::FMGL(Float__get)()*/: ;
        {
            
            //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_float>::_make();
            
        }
        //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 7/*org::scalegraph::id::Type::FMGL(Double__get)()*/: ;
        {
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_double>::_make();
            
        }
        //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 8/*org::scalegraph::id::Type::FMGL(UByte__get)()*/: ;
        {
            
            //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ubyte>::_make();
            
        }
        //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 9/*org::scalegraph::id::Type::FMGL(UShort__get)()*/: ;
        {
            
            //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ushort>::_make();
            
        }
        //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 10/*org::scalegraph::id::Type::FMGL(UInt__get)()*/: ;
        {
            
            //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_uint>::_make();
            
        }
        //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 11/*org::scalegraph::id::Type::FMGL(ULong__get)()*/: ;
        {
            
            //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ulong>::_make();
            
        }
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 12/*org::scalegraph::id::Type::FMGL(Char__get)()*/: ;
        {
            
            //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_char>::_make();
            
        }
        //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case 13/*org::scalegraph::id::Type::FMGL(String__get)()*/: ;
        {
            
            //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return org::scalegraph::graph::AttributeProxy__ProxyImpl<org::scalegraph::util::SString>::_make();
            
        }
        //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Not supported attribute type"))));
        }
    }
}

//#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::AttributeProxy* org::scalegraph::graph::AttributeProxy::org__scalegraph__graph__AttributeProxy____this__org__scalegraph__graph__AttributeProxy(
  ) {
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::AttributeProxy::_constructor(
  ) {
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Empty_c
    ;
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.AssignPropertyCall_c
    
}

void org::scalegraph::graph::AttributeProxy::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

void org::scalegraph::graph::AttributeProxy::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::graph::AttributeProxy::rtt;
void org::scalegraph::graph::AttributeProxy::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.AttributeProxy",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of AttributeProxy */
/*************************************************/
/*************************************************/
/* START of AttributeProxy$ProxyImpl */
#include <org/scalegraph/graph/AttributeProxy__ProxyImpl.h>

x10aux::RuntimeType org::scalegraph::graph::AttributeProxy__ProxyImpl<void>::rtt;

/* END of AttributeProxy$ProxyImpl */
/*************************************************/

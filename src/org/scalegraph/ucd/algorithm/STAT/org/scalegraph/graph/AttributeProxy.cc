/*************************************************/
/* START of AttributeProxy */
#include <org/scalegraph/graph/AttributeProxy.h>

#include <org/scalegraph/graph/Graph.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
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

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::AttributeProxy* org::scalegraph::graph::AttributeProxy::make(
  x10_int typeId) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Switch_c
    switch (typeId) {
        
        //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)1): ;
        {
            
            //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_boolean>* alloc94309 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_boolean> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_boolean>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_boolean>()))
                ;
                alloc94309;
            }))
            ;
            
        }
        //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)2): ;
        {
            
            //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_byte>* alloc94310 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_byte> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_byte>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_byte>()))
                ;
                alloc94310;
            }))
            ;
            
        }
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)3): ;
        {
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_short>* alloc94311 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_short> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_short>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_short>()))
                ;
                alloc94311;
            }))
            ;
            
        }
        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)4): ;
        {
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_int>* alloc94312 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_int> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_int>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_int>()))
                ;
                alloc94312;
            }))
            ;
            
        }
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)5): ;
        {
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_long>* alloc94313 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_long> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_long>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_long>()))
                ;
                alloc94313;
            }))
            ;
            
        }
        //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)6): ;
        {
            
            //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_float>* alloc94314 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_float> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_float>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_float>()))
                ;
                alloc94314;
            }))
            ;
            
        }
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)7): ;
        {
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_double>* alloc94315 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_double> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_double>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_double>()))
                ;
                alloc94315;
            }))
            ;
            
        }
        //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)8): ;
        {
            
            //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ubyte>* alloc94316 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ubyte> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ubyte>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ubyte>()))
                ;
                alloc94316;
            }))
            ;
            
        }
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)9): ;
        {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ushort>* alloc94317 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ushort> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ushort>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ushort>()))
                ;
                alloc94317;
            }))
            ;
            
        }
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)10): ;
        {
            
            //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_uint>* alloc94318 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_uint> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_uint>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_uint>()))
                ;
                alloc94318;
            }))
            ;
            
        }
        //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)11): ;
        {
            
            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ulong>* alloc94319 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ulong> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ulong>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_ulong>()))
                ;
                alloc94319;
            }))
            ;
            
        }
        //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)12): ;
        {
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_char>* alloc94320 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_char> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_char>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<x10_char>()))
                ;
                alloc94320;
            }))
            ;
            
        }
        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        case ((x10_int)13): ;
        {
            
            //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy__ProxyImpl<org::scalegraph::util::SString>* alloc94321 =
                   ((new (memset(x10aux::alloc<org::scalegraph::graph::AttributeProxy__ProxyImpl<org::scalegraph::util::SString> >(), 0, sizeof(org::scalegraph::graph::AttributeProxy__ProxyImpl<org::scalegraph::util::SString>))) org::scalegraph::graph::AttributeProxy__ProxyImpl<org::scalegraph::util::SString>()))
                ;
                alloc94321;
            }))
            ;
            
        }
        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Not supported attribute type"))));
        }
    }
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::AttributeProxy* org::scalegraph::graph::AttributeProxy::org__scalegraph__graph__AttributeProxy____this__org__scalegraph__graph__AttributeProxy(
  ) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::AttributeProxy::_constructor(
  ) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/AttributeProxy.x10": x10.ast.AssignPropertyCall_c
    
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

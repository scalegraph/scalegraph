/*************************************************/
/* START of IdStruct */
#include <org/scalegraph/graph/id/IdStruct.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::IdStruct> {
public:
    static x10::lang::Any::itable<IdStruct_ibox0 > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
x10::lang::Any::itable<IdStruct_ibox0 >  IdStruct_ibox0::itable(&IdStruct_ibox0::equals, &IdStruct_ibox0::hashCode, &IdStruct_ibox0::toString, &IdStruct_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::IdStruct >  org::scalegraph::graph::id::IdStruct::_itable_0(&org::scalegraph::graph::id::IdStruct::equals, &org::scalegraph::graph::id::IdStruct::hashCode, &org::scalegraph::graph::id::IdStruct::toString, &org::scalegraph::graph::id::IdStruct::typeName);
x10aux::itable_entry org::scalegraph::graph::id::IdStruct::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::IdStruct::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::IdStruct>())};
x10aux::itable_entry org::scalegraph::graph::id::IdStruct::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::IdStruct_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::IdStruct>())};

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10FieldDecl_c
/** MathAppend.ceilLog2(R) */

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10FieldDecl_c
/** MathAppend.ceilLog2(C) */

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10FieldDecl_c
/** MathAppend.ceilLog2(numberOfLocalVertexes) */

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10FieldDecl_c
/** true -&gt outer edge, false -&gt inner edge */

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10FieldDecl_c
/** The (maximum) number of local vertices. This value is uniform on all places. */

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10FieldDecl_c
/** The  number of global vertices. This value is uniform on all places.
	 * The original ID of any vertexes in the graph is less than this value. */

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10ConstructorDecl_c


//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::IdStruct::typeName(){
    return x10aux::type_name((*this));
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::IdStruct::toString() {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.IdStruct:"), x10aux::makeStringLit(" lgr=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                         FMGL(lgr)), x10aux::makeStringLit(" lgc=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        FMGL(lgc)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       FMGL(lgl)), x10aux::makeStringLit(" transpose=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(transpose)), x10aux::makeStringLit(" numberOfLocalVertexes=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   FMGL(numberOfLocalVertexes)), x10aux::makeStringLit(" numberOfGlobalVertexes=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       FMGL(numberOfGlobalVertexes));
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::IdStruct::hashCode() {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgr)))));
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgc)))));
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(transpose)))));
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(numberOfLocalVertexes)))));
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(numberOfGlobalVertexes)))));
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::IdStruct::equals(
  x10::lang::Any* other) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::IdStruct>(other)))
    {
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::IdStruct::equals(
             x10aux::class_cast<org::scalegraph::graph::id::IdStruct>(other));
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::IdStruct::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::IdStruct>(other)))
    {
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::IdStruct::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::IdStruct>(other));
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::IdStruct::_serialize(org::scalegraph::graph::id::IdStruct this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgr));
    buf.write(this_->FMGL(lgc));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(transpose));
    buf.write(this_->FMGL(numberOfLocalVertexes));
    buf.write(this_->FMGL(numberOfGlobalVertexes));
    
}

void org::scalegraph::graph::id::IdStruct::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgr) = buf.read<x10_int>();
    FMGL(lgc) = buf.read<x10_int>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(transpose) = buf.read<x10_boolean>();
    FMGL(numberOfLocalVertexes) = buf.read<x10_long>();
    FMGL(numberOfGlobalVertexes) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::IdStruct::rtt;
void org::scalegraph::graph::id::IdStruct::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.IdStruct",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of IdStruct */
/*************************************************/

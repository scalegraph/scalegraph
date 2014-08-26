/*************************************************/
/* START of VertexTranslatorBase */
#include <org/scalegraph/graph/VertexTranslatorBase.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/util/Team.h>
#include <x10/array/Array.h>
#include <x10/lang/Boolean.h>

//#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::VertexTranslatorBase::_constructor(x10::util::Team* team__) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": polyglot.ast.Empty_c
    ;
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.AssignPropertyCall_c
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::graph::VertexTranslatorBase::__fieldInitializers48843();
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(team) = team__;
    
    //#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(teamRank) = x10aux::nullCheck(x10aux::nullCheck(this->FMGL(team))->role())->x10::array::Array<x10_int>::__apply(
                             ((x10_int)0));
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(teamSize) = x10aux::nullCheck(this->FMGL(team))->size();
}


//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::VertexTranslatorBase::maxVertexID(
  ) {
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10Return_c
    return this->FMGL(maxVertexID);
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::VertexTranslatorBase* org::scalegraph::graph::VertexTranslatorBase::org__scalegraph__graph__VertexTranslatorBase____this__org__scalegraph__graph__VertexTranslatorBase(
  ) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::VertexTranslatorBase::__fieldInitializers48843(
  ) {
    
    //#line 15 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(maxVertexID) = ((x10_long) (((x10_int)0)));
}
void org::scalegraph::graph::VertexTranslatorBase::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(team));
    buf.write(this->FMGL(teamRank));
    buf.write(this->FMGL(teamSize));
    buf.write(this->FMGL(maxVertexID));
    
}

void org::scalegraph::graph::VertexTranslatorBase::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(team) = buf.read<x10::util::Team*>();
    FMGL(teamRank) = buf.read<x10_int>();
    FMGL(teamSize) = buf.read<x10_int>();
    FMGL(maxVertexID) = buf.read<x10_long>();
}

x10aux::RuntimeType org::scalegraph::graph::VertexTranslatorBase::rtt;
void org::scalegraph::graph::VertexTranslatorBase::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.VertexTranslatorBase",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of VertexTranslatorBase */
/*************************************************/

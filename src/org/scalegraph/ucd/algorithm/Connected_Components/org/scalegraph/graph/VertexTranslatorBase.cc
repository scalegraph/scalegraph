/*************************************************/
/* START of VertexTranslatorBase */
#include <org/scalegraph/graph/VertexTranslatorBase.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/util/Team.h>
#include <x10/array/Array.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Boolean.h>
#include <x10/array/Region.h>

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10FieldDecl_c

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::VertexTranslatorBase::_constructor(x10::util::Team* team__) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.AssignPropertyCall_c
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::VertexTranslatorBase* this121494 = this;
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121494)->FMGL(maxVertexID) = ((x10_long) (((x10_int)0)));
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(team) = team__;
    
    //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(teamRank) = (__extension__ ({
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this121491 = x10aux::nullCheck(this->
                                                                     FMGL(team))->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret121492;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret121493; __ret121493: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this121491)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret121492 = (x10aux::nullCheck(this121491)->FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret121493_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this121491)->FMGL(region)->contains(
                                ((x10_int)0)))) {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret121492 = (x10aux::nullCheck(this121491)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this121491)->
                                                                                                                FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret121493_end_;
            }
            
        }goto __ret121493_end_; __ret121493_end_: ;
        }
        ret121492;
        }))
        ;
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(teamSize) = x10aux::nullCheck(this->FMGL(team))->size();
    }
    
    

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::VertexTranslatorBase::maxVertexID(
  ) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10Return_c
    return this->FMGL(maxVertexID);
    
}

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::VertexTranslatorBase* org::scalegraph::graph::VertexTranslatorBase::org__scalegraph__graph__VertexTranslatorBase____this__org__scalegraph__graph__VertexTranslatorBase(
  ) {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::VertexTranslatorBase::__fieldInitializers91910(
  ) {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslatorBase.x10": Eval of x10.ast.X10FieldAssign_c
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
